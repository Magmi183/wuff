//
// Created by Michal Janecek on 30.01.2024.
//

#include "Highlighter.h"
#include "../utils/utils.h"
#include <algorithm>
#include <utility>


Highlighter::Highlighter(WooWooAnalyzer *analyzer) : Component(analyzer) {
    prepareQueries();
}


std::vector<int> Highlighter::semanticTokens(const std::string &docUri) {
    auto documentPath = utils::uriToPathString(docUri);
    WooWooDocument *document = analyzer->getDocument(documentPath);

    std::vector<int> data;
    std::vector<NodeInfo> nodes;


    TSQueryCursor *wooCursor = ts_query_cursor_new();
    ts_query_cursor_exec(wooCursor, queries[woowooHighlightQuery], ts_tree_root_node(document->tree));

    TSQueryMatch match;
    while (ts_query_cursor_next_match(wooCursor, &match)) {
        for (uint32_t i = 0; i < match.capture_count; ++i) {
            uint32_t capture_index = match.captures[i].index;
            TSNode capturedNode = match.captures[i].node;

            uint32_t capture_name_length;
            const char *capture_name_chars = ts_query_capture_name_for_id(queries[woowooHighlightQuery], capture_index,
                                                                          &capture_name_length);
            std::string capture_name(capture_name_chars, capture_name_length);

            TSPoint start_point = ts_node_start_point(capturedNode);
            TSPoint end_point = ts_node_end_point(capturedNode);

            nodes.emplace_back(start_point, end_point, capture_name);
        }
    }
    ts_query_cursor_delete(wooCursor);


    // - - Adding nodes from YAML highlights
    addMetaBlocksNodes(document, nodes);

    addCommentNodes(document, nodes);

    // Filtering
    std::vector<NodeInfo> unique;
    std::unordered_map<std::pair<int, int>, bool, pairHash> seen;
    for (NodeInfo nodeInfo: nodes) {
        std::pair<int, int> startPoint = document->utfMappings->utf8ToUtf16(nodeInfo.startPoint.row,
                                                                            nodeInfo.startPoint.column);
        if (seen.find(startPoint) == seen.end()) {
            seen[startPoint] = true;
            unique.emplace_back(nodeInfo);
        } else {
            // a different node with the same start was already processed
            // this occcurs because of the way the YAML queries are structured
            continue;
        }
    }
    nodes = std::move(unique);

    std::sort(nodes.begin(), nodes.end(), [](const NodeInfo &a, const NodeInfo &b) {
        // First, compare by line
        if (a.startPoint.row != b.startPoint.row) {
            return a.startPoint.row < b.startPoint.row;
        }
        // If lines are the same, compare by column
        return a.startPoint.column < b.startPoint.column;
    });

    uint32_t lastLine = 0;
    uint32_t lastStart = 0;
    for (const NodeInfo &node: nodes) {

        std::pair<int, int> startPoint = document->utfMappings->utf8ToUtf16(node.startPoint.row,
                                                                            node.startPoint.column);
        std::pair<int, int> endPoint = document->utfMappings->utf8ToUtf16(node.endPoint.row, node.endPoint.column);

        uint32_t deltaStart =
                lastLine == startPoint.first ? startPoint.second - lastStart : startPoint.second;

        uint32_t deltaLine = startPoint.first - lastLine;
        lastLine = startPoint.first;
        lastStart = startPoint.second;

        data.emplace_back(deltaLine);
        data.emplace_back(deltaStart);
        data.emplace_back(endPoint.second - startPoint.second);
        data.emplace_back(tokenTypeIndices[node.name]);
        data.emplace_back(0);
    }


    return data;
}


void Highlighter::addMetaBlocksNodes(WooWooDocument *document, std::vector<NodeInfo> &nodes) {


    for (MetaContext *metaContext: document->metaBlocks) {
        TSQueryCursor *yamlCursor = ts_query_cursor_new();
        ts_query_cursor_exec(yamlCursor, queries[yamlHighlightQuery], ts_tree_root_node(metaContext->tree));

        TSQueryMatch match;
        while (ts_query_cursor_next_match(yamlCursor, &match)) {
            for (uint32_t i = 0; i < match.capture_count; ++i) {
                TSNode capturedNode = match.captures[i].node;
                // The capture ID uniquely identifies the capture within the query
                uint32_t capture_id = match.captures[i].index;

                // Get the capture name using the capture ID
                uint32_t capture_name_length;
                const char *capture_name_chars = ts_query_capture_name_for_id(queries[yamlHighlightQuery], capture_id,
                                                                              &capture_name_length);
                std::string capture_name(capture_name_chars, capture_name_length);

                TSPoint start_point = ts_node_start_point(capturedNode);
                start_point.row += metaContext->lineOffset;
                TSPoint end_point = ts_node_end_point(capturedNode);
                end_point.row += metaContext->lineOffset;


                nodes.emplace_back(start_point, end_point, capture_name);
            }
        }

        ts_query_cursor_delete(yamlCursor);
    }

}

void Highlighter::addCommentNodes(WooWooDocument *document, std::vector<NodeInfo> &nodes) {

    for (CommentLine *cl: document->commentLines) {
        TSPoint start = {cl->lineNumber, 0};
        TSPoint end = {cl->lineNumber, cl->lineLength};
        nodes.emplace_back(start, end, "comment");
    }

}


void Highlighter::setTokenTypes(std::vector<std::string> tokenTypesFromClient) {
    this->tokenTypes = std::move(tokenTypesFromClient);

    // build a map for fast access
    for (size_t i = 0; i < tokenTypes.size(); ++i) {
        tokenTypeIndices[tokenTypes[i]] = i;
    }
}

void Highlighter::setTokenModifiers(std::vector<std::string> tokenModifiersFromClient) {
    this->tokenModifiers = std::move(tokenModifiersFromClient);

    // build a map for fast access
    for (size_t i = 0; i < tokenModifiers.size(); ++i) {
        tokenModifierIndices[tokenModifiers[i]] = i;
    }
}


const std::unordered_map<std::string, std::pair<TSLanguage*, std::string>> &Highlighter::getQueryStringByName() const {
    return queryStringsByName;
}

const std::string Highlighter::woowooHighlightQuery = "woowooHighlightQuery";
const std::string Highlighter::yamlHighlightQuery = "yamlHighlightQuery";
const std::unordered_map<std::string, std::pair<TSLanguage*, std::string>> Highlighter::queryStringsByName = {
        {woowooHighlightQuery,
                std::make_pair(tree_sitter_woowoo(), R"(
; Include statement

(include) @keyword
(filename) @string


; Document part

;(document_part "." @operator)
;(document_part_type) @namespace

; Let client do the title, use LS just to highlight environments in title
;(document_part_title) @variable


; Wobject
;(wobject ["." ":"] @operator)
;(wobject_type) @storage.type.struct


; Block

;  - Short Inner Environment

;(short_inner_environment ["." ":"] @operator)
;(short_inner_environment_type) @type
;(short_inner_environment_body) @parameter

;  - Verbose Inner Environment

;(verbose_inner_environment (_ "\"" @string))
;(verbose_inner_environment (_ ["." "@" "#"] @operator))
;(verbose_inner_environment_type) @method
;(verbose_inner_environment_at_end) @method
;(verbose_inner_environment_meta) @modifier

;  - Outer Environment

;(outer_environment_type) @variable.other
;(fragile_outer_environment ["!" ":"] @operator)
;(classic_outer_environment ["." ":"] @operator)

;  - Math

;(math_environment "$" @function)
;(math_environment_body ) @number
)")},
        {yamlHighlightQuery,std::make_pair(tree_sitter_yaml(), R"(
; Queries are from https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/yaml/highlights.scm , but the order of queries was changed.
; The order of the query reflects the priority - if a given node is retrieved by multiple queries,
; the type that counts is the type given by the first query that retrieved the given node.

(block_mapping_pair
  key: (flow_node [(double_quote_scalar) (single_quote_scalar)] @property))
(block_mapping_pair
  key: (flow_node (plain_scalar (string_scalar) @property)))

(flow_mapping
  (_ key: (flow_node [(double_quote_scalar) (single_quote_scalar)] @property)))
(flow_mapping
  (_ key: (flow_node (plain_scalar (string_scalar) @property))))

(boolean_scalar) @keyword
(null_scalar) @enum
(double_quote_scalar) @string
(single_quote_scalar) @string
((block_scalar) @string (#set! "priority" 99))
(string_scalar) @string
(escape_sequence) @string
(integer_scalar) @number
(float_scalar) @number
(comment) @comment
(anchor_name) @type
(alias_name) @type
(tag) @type

[
  (yaml_directive)
  (tag_directive)
  (reserved_directive)
] @modifier

[
 ","
 "-"
 ":"
 ">"
 "?"
 "|"
] @operator

[
 "["
 "]"
 "{"
 "}"
] @operator

[
 "*"
 "&"
 "---"
 "..."
] @operator
)") }
};




