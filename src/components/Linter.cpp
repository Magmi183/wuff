//
// Created by Michal Janecek on 01.02.2024.
//

#include "Linter.h"

Linter::Linter(WooWooAnalyzer *analyzer) : Component(analyzer) {
    prepareQueries();
}

std::vector<Diagnostic> Linter::diagnose(const TextDocumentIdentifier &tdi) {

    auto doc = analyzer->getDocumentByUri(tdi.uri);

    std::vector<Diagnostic> diagnostics;
    diagnoseErrors(doc, diagnostics);;
    diagnoseMissingNodes(doc, diagnostics);

    diagnoseMetaBlocks(doc, diagnostics);
    
    return diagnostics;
}


void Linter::diagnoseErrors(WooWooDocument *doc, std::vector<Diagnostic> &diagnostics) {

    TSQueryCursor *errorCursor = ts_query_cursor_new();
    ts_query_cursor_exec(errorCursor, queries[errorNodesQuery], ts_tree_root_node(doc->tree));

    TSQueryMatch match;
    while (ts_query_cursor_next_match(errorCursor, &match)) {
        for (unsigned i = 0; i < match.capture_count; ++i) {
            TSNode error_node = match.captures[i].node;
            auto text = doc->getNodeText(error_node);
            // Construct the range
            TSPoint start_point = ts_node_start_point(error_node);
            TSPoint end_point = ts_node_end_point(error_node);
            Range range = {Position{start_point.row, start_point.column}, Position{end_point.row, end_point.column}};

            if (range.start.line != range.end.line) {
                range.end = Position{start_point.row, start_point.column + 1};
            }

            Diagnostic diagnostic = {range, "Syntax error", "source", DiagnosticSeverity::Error};
            diagnostics.emplace_back(diagnostic);
        }
    }

}

// TODO: Test this.
void Linter::diagnoseMissingNodes(WooWooDocument *doc, std::vector<Diagnostic> &diagnostics) {
    // Recursive lambda function to traverse the syntax tree
    std::function<void(TSNode)> traverseTree = [&](TSNode node) {
        uint32_t childCount = ts_node_child_count(node);

        for (uint32_t i = 0; i < childCount; ++i) {
            TSNode child = ts_node_child(node, i);

            // Check if the node is missing
            if (ts_node_is_missing(child)) {
                // Construct the range for the missing node
                TSPoint start_point = ts_node_start_point(child);
                TSPoint end_point = ts_node_end_point(child);

                Range range = {Position{start_point.row, start_point.column}, Position{end_point.row, end_point.column + 1}};

                // Create the diagnostic for the missing node
                Diagnostic diagnostic = {range, "Syntax error: MISSING " + std::string(ts_node_type(child)), "source", DiagnosticSeverity::Error};
                diagnostics.emplace_back(diagnostic);
            }

            // Recursively traverse the child nodes
            traverseTree(child);
        }
    };

    // Start the tree traversal from the root node
    traverseTree(ts_tree_root_node(doc->tree));
}

void Linter::diagnoseMetaBlocks(WooWooDocument *doc, std::vector<Diagnostic> &d) {

}

const std::unordered_map<std::string, std::pair<TSLanguage*, std::string>> &Linter::getQueryStringByName() const {
    return queryStringsByName;
}

const std::string Linter::errorNodesQuery = "errorNodesQuery";

const std::unordered_map<std::string, std::pair<TSLanguage*, std::string>> Linter::queryStringsByName = {
        {errorNodesQuery, std::make_pair(tree_sitter_woowoo(), "(ERROR) @error")}
};