//
// Created by Michal Janecek on 30.01.2024.
//

#ifndef WUFF_METACONTEXT_H
#define WUFF_METACONTEXT_H

#include <tree_sitter/api.h>
#include <string>


class MetaContext {
public:
    MetaContext(TSTree *tree, uint32_t lineOffset, uint32_t byteOffset, std::string parentType,
                std::string parentName);

    static const std::string metaFieldQueryString;
    
    TSTree *tree;
    uint32_t lineOffset;
    uint32_t byteOffset;
    std::string parentType;
    std::string parentName;
};


#endif //WUFF_METACONTEXT_H
