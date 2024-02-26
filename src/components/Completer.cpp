//
// Created by Michal Janecek on 31.01.2024.
//

#include "Completer.h"
#include "../utils/utils.h"

Completer::Completer(WooWooAnalyzer *analyzer) : Component(analyzer) {
    prepareQueries();
}


std::vector<CompletionItem> Completer::complete(const CompletionParams &params) {
    std::vector<CompletionItem> completionItems;

    if (params.context->triggerKind == CompletionTriggerKind::TriggerCharacter) {
        if (params.context->triggerCharacter == ".") {
            completeInclude(completionItems, params);
        } else if (params.context->triggerCharacter == ":") {
            completeInnerEnvs(completionItems, params);
        } else if (params.context->triggerCharacter == "#" ||
                   params.context->triggerCharacter == "@") {
            completeShorthand(completionItems, params);
        }
    }

    return completionItems;
}


void Completer::completeInclude(std::vector<CompletionItem> &completionItems, const CompletionParams &params) {
    auto docPath = utils::uriToPathString(params.textDocument.uri);
    auto document = analyzer->getDocument(docPath);

    TSQueryCursor *cursor = ts_query_cursor_new();
    auto pos = document->utfMappings->utf16ToUtf8(params.position.line, params.position.character);
    uint32_t line = pos.first;
    uint32_t character = pos.second;
    TSPoint start_point = {line, character};
    TSPoint end_point = {line, character + 1};
    ts_query_cursor_set_point_range(cursor, start_point, end_point);
    ts_query_cursor_exec(cursor, queries[includeCollisionQuery], ts_tree_root_node(document->tree));

    TSQueryMatch match;
    bool hasMatch = ts_query_cursor_next_match(cursor, &match);

    if (hasMatch) {
        // include statement is not valid here
        return;
    }

    std::vector<std::string> relativePaths;
    std::string currentDocDir = std::filesystem::path(document->documentPath).parent_path().string();

    for (WooWooDocument *doc: analyzer->getDocumentsFromTheSameProject(document)) {
        if (doc != nullptr && !doc->documentPath.empty()) {
            std::string relPath = std::filesystem::relative(doc->documentPath, currentDocDir).string();
            relativePaths.push_back(relPath);
        }
    }

    std::stringstream ss;
    for (size_t i = 0; i < relativePaths.size(); ++i) {
        ss << relativePaths[i];
        if (i != relativePaths.size() - 1) {
            // Don't add a comma after the last element
            ss << ",";
        }
    }
    std::string pathsJoined = ss.str();

    std::string insertText = "include ${1|" + pathsJoined + "|}";
    CompletionItem item{
            ".include", // label
            CompletionItemKind::Snippet, // kind
            InsertTextFormat::Snippet, // insert_text_format
            insertText // insert_text
    };
    completionItems.emplace_back(item);

    ts_query_cursor_delete(cursor);
}

/**
* Autocomplete the bodies of inner environments. Behaviour entirely given by the dialect.
* For example, suggest possible "reference" values based on "labels" used in the document.
* .reference:<autocomplete>
 * \param completionItems 
 * \param params 
 */
void Completer::completeInnerEnvs(std::vector<CompletionItem> &completionItems, const CompletionParams &params) {
    auto document = analyzer->getDocumentByUri(params.textDocument.uri);

    TSQueryCursor *cursor = ts_query_cursor_new();
    TSPoint start_point = {params.position.line, params.position.character};
    TSPoint end_point = {params.position.line, params.position.character + 1};
    ts_query_cursor_set_point_range(cursor, start_point, end_point);
    ts_query_cursor_exec(cursor, queries[shortInnerEnvironmentQuery], ts_tree_root_node(document->tree));

    TSQueryMatch match;
    if (ts_query_cursor_next_match(cursor, &match)) {
        TSNode node = match.captures[0].node;
        std::string shortInnerEnvType = document->getNodeText(node);

        // nodes that can be referenced by this env.
        searchProjectForReferencables(completionItems, document, shortInnerEnvType);
    }
    ts_query_cursor_delete(cursor);
}

void Completer::completeShorthand(std::vector<CompletionItem> &completionItems, const CompletionParams &params) {
    // NOTE: As of now, suggesting completion everytime, even out of context.

    std::string shorthandName;
    if (params.context->triggerCharacter == "#") shorthandName = "#";
    if (params.context->triggerCharacter == "@") shorthandName = "@";
    if (shorthandName.empty()) return;

    auto docPath = utils::uriToPathString(params.textDocument.uri);
    auto document = analyzer->getDocument(docPath);

    searchProjectForReferencables(completionItems, document, shorthandName);

}


void Completer::searchProjectForReferencables(std::vector<CompletionItem> &completionItems, WooWooDocument *doc,
                                              std::string &referencingValue) {

    for (auto projectDocument: analyzer->getDocumentsFromTheSameProject(doc)) {
        for (auto referencable: projectDocument->getReferencablesBy(referencingValue)) {
            CompletionItem item(projectDocument->getMetaNodeText(referencable.first, referencable.second));
            completionItems.emplace_back(item);
        }
    }

}


const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>> &Completer::getQueryStringByName() const {
    return queryStringsByName;
}

const std::string Completer::includeCollisionQuery = "includeCollisionQuery";
const std::string Completer::shortInnerEnvironmentQuery = "shortInnerEnvironmentQuery";
const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>> Completer::queryStringsByName = {
        {includeCollisionQuery,      std::make_pair(tree_sitter_woowoo(), R"(
(block) @b
(wobject) @ob
)")},
        {shortInnerEnvironmentQuery, std::make_pair(tree_sitter_woowoo(), "(short_inner_environment_type) @siet")}
};

