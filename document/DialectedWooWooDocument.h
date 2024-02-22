//
// Created by Michal Janecek on 08.02.2024.
//

#ifndef DIALECTED_WOOWOO_DOCUMENT_H
#define DIALECTED_WOOWOO_DOCUMENT_H

#include "WooWooDocument.h"
#include "../dialect/DialectManager.h"
#include <filesystem>
#include <optional>
#include "tree_sitter/api.h"

namespace fs = std::filesystem;

class DialectedWooWooDocument : public WooWooDocument {
public:
    
    DialectedWooWooDocument(const fs::path& documentPath1, Parser* parser1, DialectManager * dialectManager);

    
    virtual ~DialectedWooWooDocument();
    std::vector<std::pair<MetaContext *, TSNode>> getReferencablesBy(const std::string& referencingTypeName);
    void updateSource(std::string &source) override;

    std::optional<std::pair<MetaContext *, TSNode>> findReferencable(const std::vector<Reference> & references, const std::string & referenceValue);
    DialectManager * dialectManager;
    

private:

    void index();

    void prepareQueries();
    TSQuery * fieldQuery;
    // given a typeName, get all nodes that can be referenced by that
    std::unordered_map<std::string, std::vector<std::pair<MetaContext *, TSNode>> > referencablesByNode;
    
    // given Reference and value (of a metablock field), store the node and MetaContext (this is what is being referenced, e.g. label value)
    std::unordered_map<Reference, std::unordered_map<std::string, std::pair<MetaContext *, TSNode>>> referencableNodes;
};

#endif 
