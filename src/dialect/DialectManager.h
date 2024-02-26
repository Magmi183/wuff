//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef WUFF_DIALECTMANAGER_H
#define WUFF_DIALECTMANAGER_H


#include <string>
#include <memory>
#include "Dialect.h"

class DialectManager {
private:
    template<typename T>
    std::string scanForDescriptionByName(const std::vector<std::shared_ptr<T> > &describables, const std::string &name);
    void extractReferences(const MetaBlock& mb, std::vector<Reference> & target) const;
    void extractReferencingMetaFieldNames(std::vector<std::string> & names);
    
    void buildMaps();
    std::unordered_map<std::string, std::vector<Reference>> referencesByTypeName;
    
    
public:
    std::unique_ptr<Dialect> activeDialect;

    DialectManager(const std::string &dialectFilePath = "");

    void loadDialect(const std::string &dialectFilePath);

    void processDialect();

    std::string getDescription(const std::string &type, const std::string &name);

    // all references from the entire dialect in one place
    std::vector<Reference> allReferences;
    // all metaBlocks from the entire dialect in one place
    std::vector<MetaBlock> metaBlocks;
    void collectReferencesAndMetas();
    
    
    std::vector<std::string> getReferencingTypeNames();    
    std::vector<Reference> getPossibleReferencesByTypeName(const std::string& name);    
};


#endif //WUFF_DIALECTMANAGER_H
