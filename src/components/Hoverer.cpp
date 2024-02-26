//
// Created by Michal Janecek on 28.01.2024.
//

#include "Hoverer.h"
#include "../utils/utils.h"


Hoverer::Hoverer(WooWooAnalyzer *analyzer) : Component(analyzer) {
    prepareQueries();
}


std::string Hoverer::hover(const std::string &docUri, uint32_t line, uint32_t character) {
    WooWooDocument *document = analyzer->getDocumentByUri(docUri);
    auto pos = document->utfMappings->utf16ToUtf8(line, character);
    line = pos.first;
    character = pos.second;

    TSQueryCursor *cursor = ts_query_cursor_new();
    TSPoint start_point = {line, character};
    TSPoint end_point = {line, character + 1};
    ts_query_cursor_set_point_range(cursor, start_point, end_point);
    ts_query_cursor_exec(cursor, queries[hoverableNodesQuery], ts_tree_root_node(document->tree));

    TSQueryMatch match;
    std::string nodeType;
    std::string nodeText;
    if (ts_query_cursor_next_match(cursor, &match)) {
        if (match.capture_count > 0) {
            TSNode node = match.captures[0].node;
            nodeType = ts_node_type(node);
            nodeText = document->getNodeText(node);

        }
    }

    ts_query_cursor_delete(cursor);
    return analyzer->dialectManager->getDescription(nodeType, nodeText);
}

const std::unordered_map <std::string, std::pair<TSLanguage *, std::string>> &Hoverer::getQueryStringByName() const {
    return queryStringsByName;
}

const std::string Hoverer::hoverableNodesQuery = "hoverableNodesQuery";
const std::unordered_map <std::string, std::pair<TSLanguage *, std::string>> Hoverer::queryStringsByName = {
        {hoverableNodesQuery, std::make_pair(tree_sitter_woowoo(), R"(
(document_part_type) @node
(wobject_type) @node
(short_inner_environment_type) @node
(verbose_inner_environment_type) @node
(outer_environment_type) @node
)")}};
