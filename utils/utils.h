//
// Created by Michal Janecek on 31.01.2024.
//

#ifndef WUFF_UTILS_H
#define WUFF_UTILS_H

#include <string>
#include "../document/WooWooDocument.h"

namespace utils {

    std::string percentDecode(const std::string& encoded);
    std::string uriToPathString(const std::string& uri);
    std::string pathToUri(const fs::path &documentPath);
    std::string getChildText(TSNode node, const char *childType, WooWooDocument *doc);
    void reportQueryError(const std::string & queryName, uint32_t errorOffset, TSQueryError errorType);
} // namespace utils


#endif //WUFF_UTILS_H
