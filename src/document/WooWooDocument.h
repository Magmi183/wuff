//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef WUFF_WOOWOODOCUMENT_H
#define WUFF_WOOWOODOCUMENT_H

#include <filesystem>
#include <tree_sitter/api.h>
#include "../parser/Parser.h"
#include "UTF8toUTF16Mapping.h"
#include "CommentLine.h"

namespace fs = std::filesystem;

class WooWooDocument {

private:
    void updateComments();
    void deleteCommentsAndMetas();
    
public:
    TSTree* tree;
    std::vector<MetaContext *> metaBlocks;
    std::vector<CommentLine *> commentLines;
    Parser * parser;
    UTF8toUTF16Mapping * utfMappings;

    fs::path documentPath;
    std::string source;
    
    WooWooDocument(fs::path documentPath1, Parser * parser1);
    ~WooWooDocument();

    void updateSource();
    virtual void updateSource(std::string &source);
    [[nodiscard]] std::string getNodeText(TSNode node) const;
    std::string getMetaNodeText(MetaContext * mx, TSNode node) const;
    [[nodiscard]] std::string substr(uint32_t startByte, uint32_t endByte) const;
    MetaContext * getMetaContextByLine(uint32_t line);
};


#endif //WUFF_WOOWOODOCUMENT_H
