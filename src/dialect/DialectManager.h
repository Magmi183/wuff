//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef WUFF_DIALECTMANAGER_H
#define WUFF_DIALECTMANAGER_H


#include <string>
#include <memory>
#include <mutex>

#include "Dialect.h"

class DialectManager {
public:
    static DialectManager * getInstance();

    std::unique_ptr<Dialect> activeDialect;

    void loadDialect(const std::string &dialectFilePath);

    std::string getDescription(const std::string &type, const std::string &name);

    // all references from the entire dialect in one place
    std::vector<Reference> allReferences;
    // all metaBlocks from the entire dialect in one place
    std::vector<MetaBlock> metaBlocks;

    std::vector<std::string> getReferencingTypeNames();
    std::vector<Reference> getPossibleReferencesByTypeName(const std::string& name);

private:
    DialectManager() = default;
    static std::unique_ptr<DialectManager> instance;
    static std::once_flag initInstanceFlag;

    template<typename T>
    std::string scanForDescriptionByName(const std::vector<std::shared_ptr<T> > &describables, const std::string &name);
    static void extractReferences(const MetaBlock& mb, std::vector<Reference> & target) ;
    void extractReferencingMetaFieldNames(std::vector<std::string> & names);
    void processDialect();
    void collectReferencesAndMetas();

    void buildMaps();
    std::unordered_map<std::string, std::vector<Reference>> referencesByTypeName;

};


#endif //WUFF_DIALECTMANAGER_H
