//
// Created by Michal Janecek on 14.02.2024.
//

#include "Component.h"
#include "../utils/utils.h"

Component::Component(WooWooAnalyzer *analyzer) : analyzer(analyzer) {}

void Component::prepareQueries() {
    uint32_t errorOffset;
    TSQueryError errorType;

    for (const auto &q: getQueryStringByName()) {
        const auto &queryName = q.first;
        const auto &queryLanguage = q.second.first;
        const auto &queryString = q.second.second;

        TSQuery *query = ts_query_new(
                queryLanguage,
                queryString.c_str(),
                queryString.length(),
                &errorOffset,
                &errorType
        );

        if (!query) {
            utils::reportQueryError(queryName, errorOffset, errorType);
        }

        queries[queryName] = query;
    }
}

Component::~Component() {
    for (auto query: queries) {
        ts_query_delete(query.second);
    }
}