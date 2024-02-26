//
// Created by Michal Janecek on 31.01.2024.
//

#include "Navigator.h"

#include <pybind11/attr.h>

#include "../utils/utils.h"

Navigator::Navigator(WooWooAnalyzer *analyzer) : Component(analyzer) {
    prepareQueries();
}

Location Navigator::goToDefinition(const DefinitionParams &params) {
    auto document = analyzer->getDocumentByUri(params.textDocument.uri);
    auto pos = document->utfMappings->utf16ToUtf8(params.position.line, params.position.character);
    uint32_t line = pos.first;
    uint32_t character = pos.second;

    TSQueryCursor *cursor = ts_query_cursor_new();
    TSPoint start_point = {line, character};
    TSPoint end_point = {line, character + 1};
    ts_query_cursor_set_point_range(cursor, start_point, end_point);
    ts_query_cursor_exec(cursor, queries[goToDefinitionQuery], ts_tree_root_node(document->tree));

    TSQueryMatch match;
    std::string nodeType;
    std::string nodeText;
    if (ts_query_cursor_next_match(cursor, &match)) {
        if (match.capture_count > 0) {
            TSNode node = match.captures[0].node;

            nodeType = ts_node_type(node);
            nodeText = document->getNodeText(node);

            if (nodeType == "filename") {
                return navigateToFile(params, nodeText);
            }
            if (nodeType == "short_inner_environment") {
                return resolveShortInnerEnvironmentReference(params, node);
            }
            if (nodeType == "verbose_inner_environment_hash_end") {
                return resolveShorthandReference("#", params, node);
            }
            if (nodeType == "verbose_inner_environment_at_end") {
                return resolveShorthandReference("@", params, node);
            }
            if (nodeType == "meta_block") {
                return resolveMetaBlockReference(params, node);
            }

        }
    }
    return Location("", Range{Position{0, 0}, Position{0, 0}});
}

Location Navigator::navigateToFile(const DefinitionParams &params, const std::string &relativeFilePath) {
    auto document = analyzer->getDocumentByUri(params.textDocument.uri);
    auto fileBegin = Range{Position{0, 0}, Position{0, 0}};
    fs::path filePath = fs::canonical(document->documentPath.parent_path() / relativeFilePath);
    auto fileUri = "file://" + filePath.generic_string();
    return {fileUri, fileBegin};
}


Location Navigator::resolveShortInnerEnvironmentReference(const DefinitionParams &params, TSNode node) {
    auto document = analyzer->getDocumentByUri(params.textDocument.uri);
    auto shortInnerEnvironmentType = utils::getChildText(node, "short_inner_environment_type", document);

    // obtain what can be referenced by this environment
    std::vector<Reference> referenceTargets = document->dialectManager->getPossibleReferencesByTypeName(
            shortInnerEnvironmentType);

    // obtain the body part of the referencing environment 
    auto value = utils::getChildText(node, "short_inner_environment_body", document);

    return findReference(params, referenceTargets, value);
}

Location
Navigator::resolveShorthandReference(const std::string &shorthandType, const DefinitionParams &params, TSNode node) {
    auto document = analyzer->getDocumentByUri(params.textDocument.uri);

    // obtain what can be referenced by this environment
    std::vector<Reference> referenceTargets = document->dialectManager->getPossibleReferencesByTypeName(shorthandType);

    return findReference(params, referenceTargets, document->getNodeText(node));
}


Location Navigator::resolveMetaBlockReference(const DefinitionParams &params, TSNode node) {
    auto document = analyzer->getDocumentByUri(params.textDocument.uri);
    auto pos = document->utfMappings->utf16ToUtf8(params.position.line, params.position.character);
    uint32_t line = pos.first;
    uint32_t character = pos.second;
    TSQueryCursor *cursor = ts_query_cursor_new();
    MetaContext *mx = document->getMetaContextByLine(line);
    // points adjusted by metablock position
    TSPoint start_point = {line - mx->lineOffset, character};
    TSPoint end_point = {line - mx->lineOffset, character + 1};
    ts_query_cursor_set_point_range(cursor, start_point, end_point);
    ts_query_cursor_exec(cursor, queries[metaFieldQuery], ts_tree_root_node(mx->tree));

    TSQueryMatch match;
    while (ts_query_cursor_next_match(cursor, &match)) {
        std::string metaFieldName;
        std::string metaFieldValue;
        for (uint32_t i = 0; i < match.capture_count; ++i) {
            TSNode capturedNode = match.captures[i].node;
            uint32_t capture_id = match.captures[i].index;

            uint32_t capture_name_length;
            const char *capture_name_chars = ts_query_capture_name_for_id(queries[metaFieldQuery], capture_id,
                                                                          &capture_name_length);
            std::string capture_name(capture_name_chars, capture_name_length);
            if (capture_name == "key") {
                metaFieldName = document->getMetaNodeText(mx, capturedNode);
            } else if (capture_name == "value") {
                metaFieldValue = document->getMetaNodeText(mx, capturedNode);
            }
        }
        if (!metaFieldValue.empty() && !metaFieldName.empty()) {
            ts_query_cursor_delete(cursor);
            return findReference(params, document->dialectManager->getPossibleReferencesByTypeName(metaFieldName),
                                 metaFieldValue);
        }
    }

    ts_query_cursor_delete(cursor);
    return Location("", Range{Position{0, 0}, Position{0, 0}});

}


Location Navigator::findReference(const DefinitionParams &params, const std::vector<Reference> &possibleReferences,
                                  const std::string &referencingValue) {
    auto document = analyzer->getDocumentByUri(params.textDocument.uri);

    for (auto doc: analyzer->getDocumentsFromTheSameProject(document)) {
        std::optional<std::pair<MetaContext *, TSNode>> foundRef = doc->findReferencable(possibleReferences,
                                                                                         referencingValue);

        if (foundRef.has_value()) {
            MetaContext *mx = foundRef.value().first;
            TSPoint start_point = ts_node_start_point(foundRef.value().second);
            TSPoint end_point = ts_node_end_point(foundRef.value().second);
            auto s = document->utfMappings->utf8ToUtf16(start_point.row + mx->lineOffset, start_point.column);
            auto e = document->utfMappings->utf8ToUtf16(end_point.row + mx->lineOffset, end_point.column);

            auto fieldRange = Range{Position{s.first, s.second}, Position{e.first, e.second}};
            return {utils::pathToUri(doc->documentPath), fieldRange};
        }
    }
    return Location("", Range{Position{0, 0}, Position{0, 0}});
}


// - - - - - - -

const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>> &Navigator::getQueryStringByName() const {
    return queryStringsByName;
}

const std::string Navigator::metaFieldQuery = "metaFieldQuery";
const std::string Navigator::goToDefinitionQuery = "goToDefinitionQuery";
const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>> Navigator::queryStringsByName = {
        {metaFieldQuery,      std::make_pair(tree_sitter_yaml(), MetaContext::metaFieldQueryString)},
        {goToDefinitionQuery, std::make_pair(tree_sitter_woowoo(),
                                             R"(
(filename) @type
(short_inner_environment) @type
(verbose_inner_environment_hash_end) @type
(verbose_inner_environment_at_end) @type
(meta_block) @type
)")}
};


