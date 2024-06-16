//
// Created by Michal Janecek on 28.01.2024.
//

#ifndef WUFF_PARSER_H
#define WUFF_PARSER_H

#include "tree_sitter/api.h"
#include "../document/MetaContext.h"
#include <string>
#include <vector>
#include <iostream>

extern "C" TSLanguage* tree_sitter_woowoo();
extern "C" TSLanguage* tree_sitter_yaml();

class Parser {
public:
    ~Parser();
    TSTree* parseWooWoo(const std::string& source);
    TSTree* parseYaml(const std::string& source);
    std::vector<MetaContext *> parseMetas(TSTree * WooWooTree, const std::string& source);
    static Parser * getInstance();

private:
    Parser();
    static std::unique_ptr<Parser> instance;
    static std::once_flag initInstanceFlag;

    TSParser* WooWooParser;
    TSParser* YAMLParser;
    
    void prepareQueries();
    TSQuery * metaBlocksQuery;
    static std::string extractStructureName(const TSNode & node, const std::string &source);
};



#endif //WUFF_PARSER_H
