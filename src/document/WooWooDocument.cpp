//
// Created by Michal Janecek on 27.01.2024.
//

#include "WooWooDocument.h"
#include <fstream>
#include <sstream>
#include <utility>


WooWooDocument::WooWooDocument(fs::path documentPath, Parser *parser) : documentPath(std::move(documentPath)), parser(parser) {
    utfMappings = new UTF8toUTF16Mapping();
    updateSource();
}

void WooWooDocument::updateSource() {
    std::ifstream file(documentPath, std::ios::in);
    if (file) {
        std::stringstream buffer;
        buffer << file.rdbuf();
        file.close();
        std::string fileContents = buffer.str();
        updateSource(fileContents);
    } else {
        std::cerr << "Could not open file: " << documentPath << std::endl;
    }
}


void WooWooDocument::updateSource(std::string &newSource) {
    this->source = std::move(newSource);
    deleteCommentsAndMetas();
    tree = parser->parseWooWoo(source);
    metaBlocks = parser->parseMetas(tree, source);
    utfMappings->buildMappings(source);
    updateComments();
}

void WooWooDocument::updateComments() {

    std::istringstream stream(source);
    std::string line;
    uint32_t lineIndex = 0;
    while (std::getline(stream, line)) {
        if (!line.empty() && line[0] == '%')
            commentLines.emplace_back(new CommentLine(lineIndex, line.size()));
        lineIndex++;
    }

}

std::string WooWooDocument::substr(uint32_t startByte, uint32_t endByte) const {
    return source.substr(startByte, endByte - startByte);
}

std::string WooWooDocument::getNodeText(TSNode node) const {
    // function assumes that the node is a part of this document!
    uint32_t start_byte = ts_node_start_byte(node);
    uint32_t end_byte = ts_node_end_byte(node);
    return substr(start_byte, end_byte);
}

std::string WooWooDocument::getMetaNodeText(MetaContext *mx, TSNode node) const {
    uint32_t meta_start_byte = ts_node_start_byte(node);
    uint32_t meta_end_byte = ts_node_end_byte(node);
    return substr(meta_start_byte + mx->byteOffset, meta_end_byte + mx->byteOffset);
}


void WooWooDocument::deleteCommentsAndMetas() {
    for (MetaContext *metaBlock: metaBlocks) {
        delete metaBlock;
    }
    metaBlocks.clear();

    for (CommentLine *commentLine: commentLines) {
        delete commentLine;
    }
    commentLines.clear();

}

WooWooDocument::~WooWooDocument() {
    deleteCommentsAndMetas();
    ts_tree_delete(tree);
    tree = nullptr;
}

MetaContext *WooWooDocument::getMetaContextByLine(uint32_t line) {
    for (MetaContext * mx : metaBlocks){
        if(mx->lineOffset <= line && line <= (ts_node_end_point(ts_tree_root_node(mx->tree)).row + mx->lineOffset) ){
            return mx;
        }
    }
    return nullptr;
}