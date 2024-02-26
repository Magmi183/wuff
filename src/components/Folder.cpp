//
// Created by Michal Janecek on 04.02.2024.
//

#include "Folder.h"
#include "../utils/utils.h"

// TODO feat: Add other kinds of folding ranges.

Folder::Folder(WooWooAnalyzer *analyzer) : Component(analyzer) {
    prepareQueries();
}


std::vector<FoldingRange> Folder::foldingRanges(const TextDocumentIdentifier &tdi) {

    auto document = analyzer->getDocumentByUri(tdi.uri);

    std::vector<FoldingRange> ranges;

    TSQueryCursor *cursor = ts_query_cursor_new();
    ts_query_cursor_exec(cursor, queries[foldableTypesQuery], ts_tree_root_node(document->tree));

    TSQueryMatch match;
    while (ts_query_cursor_next_match(cursor, &match)) {
        for (uint32_t i = 0; i < match.capture_count; ++i) {
            TSNode capturedNode = match.captures[i].node;

            TSPoint start_point = ts_node_start_point(capturedNode);
            TSPoint end_point = ts_node_end_point(capturedNode);

            FoldingRange fr = FoldingRange(start_point.row, start_point.column, end_point.row, end_point.column,
                                           "region");
            ranges.emplace_back(fr);
        }
    }
    ts_query_cursor_delete(cursor);

    return ranges;
}

const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>> &Folder::getQueryStringByName() const {
    return queryStringsByName;
}

const std::string Folder::foldableTypesQuery = "foldableTypesQuery";
const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>> Folder::queryStringsByName = {
        {foldableTypesQuery, std::make_pair(tree_sitter_woowoo(), R"(
(document_part) @dp
(wobject) @ob
(block) @b
)")}};
