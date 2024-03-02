//
// Created by Michal Janecek on 08.02.2024.
//

#include "DialectedWooWooDocument.h"
#include <algorithm>
#include "../utils/utils.h"

DialectedWooWooDocument::DialectedWooWooDocument(const fs::path &documentPath1, Parser *parser1,
                                                 DialectManager *dialectManager)
        : WooWooDocument(documentPath1, parser1), dialectManager(dialectManager) {
    prepareQueries();
    index();
}


DialectedWooWooDocument::~DialectedWooWooDocument() {
    ts_query_delete(fieldQuery);
}

void DialectedWooWooDocument::index() {
    referencablesByNode.clear();
    referencableNodes.clear();
    for (const std::string &typeName: dialectManager->getReferencingTypeNames()) {
        for (const Reference &ref: dialectManager->getPossibleReferencesByTypeName(typeName)) {

            // create if not exist
            referencableNodes[ref];

            for (MetaContext *mx: metaBlocks) {
                if ((ref.structureType.empty() || ref.structureType == mx->parentType) &&
                    (ref.structureName.empty() || ref.structureName == mx->parentName)) {
                    // this metablock is matching the requiremens by the reference

                    TSQueryCursor *wooCursor = ts_query_cursor_new();
                    ts_query_cursor_exec(wooCursor, fieldQuery, ts_tree_root_node(mx->tree));

                    TSQueryMatch match;
                    while (ts_query_cursor_next_match(wooCursor, &match)) {
                        TSNode valueNode;
                        bool correctKey = false;
                        for (uint32_t i = 0; i < match.capture_count; ++i) {
                            uint32_t capture_index = match.captures[i].index;
                            TSNode capturedNode = match.captures[i].node;

                            uint32_t valueCaptureName;
                            const char *valueCaptureNameChars = ts_query_capture_name_for_id(
                                    fieldQuery, capture_index, &valueCaptureName);
                            std::string valueCaptureNameStr(valueCaptureNameChars, valueCaptureName);

                            if (valueCaptureNameStr == "value") {
                                // mark the value node
                                valueNode = capturedNode;
                            } else if (valueCaptureNameStr == "key") {
                                if (getMetaNodeText(mx, capturedNode) == ref.metaKey) {
                                    // the field key is what we want
                                    correctKey = true;
                                } else {
                                    break;
                                }
                            }
                        }
                        if (!correctKey) continue;
                        referencablesByNode[typeName].emplace_back(std::make_pair(mx, valueNode));
                        referencableNodes[ref][getMetaNodeText(mx, valueNode)] = std::make_pair(mx, valueNode);

                    }
                    ts_query_cursor_delete(wooCursor);
                }
            }
        }
    }
}


void DialectedWooWooDocument::prepareQueries() {
    uint32_t errorOffset;
    TSQueryError errorType;
    fieldQuery = ts_query_new(
            tree_sitter_yaml(),
            MetaContext::metaFieldQueryString.c_str(),
            MetaContext::metaFieldQueryString.size(),
            &errorOffset,
            &errorType
    );

    if (!fieldQuery) {
        utils::reportQueryError("fieldQuery", errorOffset, errorType);
    }


}

std::vector<std::pair<MetaContext *, TSNode> > DialectedWooWooDocument::getReferencablesBy(
        const std::string &referencingTypeName) {
    auto refTypes = dialectManager->getReferencingTypeNames();
    if (std::find(refTypes.begin(), refTypes.end(), referencingTypeName) == refTypes.end()) {
        return {};
    }
    return referencablesByNode[referencingTypeName];
}

std::optional<std::pair<MetaContext *, TSNode>>
DialectedWooWooDocument::findReferencable(const std::vector<Reference> &references, const std::string &referenceValue) {

    for (auto &ref: references) {
        if (referencableNodes[ref].contains(referenceValue)) {
            return referencableNodes[ref][referenceValue];
        }
    }

    return std::nullopt;
}

std::vector<Location>
DialectedWooWooDocument::findLocationsOfReferences(const Reference &reference, const std::string &referenceValue) {

    std::vector<Location> locations;

    // need to search for possible references in all meta block and environments
    // this is done on-the-fly and thus take some time, as this operation should not occure very often

    // SEARCH FOR REFERENCES FROM META-BLOCKS (example --> "ref: chapter-01")
    for (MetaContext *mx: metaBlocks) {
        TSQueryCursor *wooCursor = ts_query_cursor_new();
        ts_query_cursor_exec(wooCursor, fieldQuery, ts_tree_root_node(mx->tree));

        TSQueryMatch match;
        while (ts_query_cursor_next_match(wooCursor, &match)) {
            TSNode valueNode;
            bool correctKey = false;
            bool correctValue = false;
            for (uint32_t i = 0; i < match.capture_count; ++i) {
                uint32_t capture_index = match.captures[i].index;
                TSNode capturedNode = match.captures[i].node;

                uint32_t valueCaptureName;
                const char *valueCaptureNameChars = ts_query_capture_name_for_id(
                        fieldQuery, capture_index, &valueCaptureName);
                std::string valueCaptureNameStr(valueCaptureNameChars, valueCaptureName);

                if (valueCaptureNameStr == "value") {
                    if (getMetaNodeText(mx, capturedNode) == referenceValue) {
                        // the field value is what we want
                        correctValue = true;
                    } else {
                        break;
                    }
                    valueNode = capturedNode;
                } else if (valueCaptureNameStr == "key") {
                    auto metaFieldKey = getMetaNodeText(mx, capturedNode);

                    for (const Reference &ref: dialectManager->getPossibleReferencesByTypeName(metaFieldKey)) {
                        if (ref.metaKey == reference.metaKey) {
                            correctKey = true;
                        }
                    }

                }
            }
            if (!correctKey || !correctValue) continue;
            auto s = ts_node_start_point(valueNode);
            auto e = ts_node_end_point(valueNode);
            Location l = {utils::pathToUri(documentPath), Range{{s.row + mx->lineOffset, s.column},
                                                                {e.row + mx->lineOffset, e.column}}};
            locations.emplace_back(l);

        }
        ts_query_cursor_delete(wooCursor);

    }

    // SEARCH FOR REFERENCES FROM SHORT INNER ENVIRONMETS (example --> ".reference:chapter-01")




    // SEARCH FOR REFERENCES FROM SHORTHANDS (example --> "See Chapter 1"#chapter-01")




    return locations;

}


void DialectedWooWooDocument::updateSource(std::string &source) {
    WooWooDocument::updateSource(source);
    prepareQueries();
    index();
}