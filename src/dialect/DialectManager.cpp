//
// Created by Michal Janecek on 27.01.2024.
//

#include "DialectManager.h"
#include "yaml-cpp/yaml.h"


std::unique_ptr<DialectManager> DialectManager::instance;
std::once_flag DialectManager::initInstanceFlag;

DialectManager* DialectManager::getInstance() {
    std::call_once(initInstanceFlag, []() {
        instance.reset(new DialectManager());
    });
    return instance.get();
}


void DialectManager::loadDialect(const std::string &dialectFilePath) {
    YAML::Node yamlData = YAML::LoadFile(dialectFilePath);
    activeDialect = std::make_unique<Dialect>();
    activeDialect->deserialize(yamlData);
    processDialect();
}

void DialectManager::processDialect() {
    collectReferencesAndMetas();
    buildMaps();
}

void DialectManager::buildMaps() {
    // process all possible queries in advance, for fast live lookups

    // References by type name - start
    // note: if there are two different types with the same name, their references will get merged
    for (std::string &referencingTypeName: getReferencingTypeNames()) {
        auto &rbtn = referencesByTypeName[referencingTypeName]; // create the key
        for (const std::shared_ptr<Environment> &ie: activeDialect->environments) {
            if (ie->name == referencingTypeName) {
                rbtn.insert(rbtn.end(),
                            ie->references.begin(), ie->references.end());
            }
        }

        if (referencingTypeName == "@") {
            rbtn.insert(rbtn.end(),
                        activeDialect->shorthand_at->references.begin(),
                        activeDialect->shorthand_at->references.end());
        }

        if (referencingTypeName == "#") {
            rbtn.insert(rbtn.end(),
                        activeDialect->shorthand_hash->references.begin(),
                        activeDialect->shorthand_hash->references.end());
        }

        for (MetaBlock &mb: metaBlocks) {
            for (Field &of: mb.optionalFields) {
                if (of.name == referencingTypeName) {
                    rbtn.insert(rbtn.end(),
                                of.references.begin(), of.references.end());
                }
            }
            for (Field &rf: mb.requiredFields) {
                if (rf.name == referencingTypeName) {
                    rbtn.insert(rbtn.end(),
                                rf.references.begin(), rf.references.end());
                }
            }
        }
        // References by type name - end

    }

}

std::string DialectManager::getDescription(const std::string &type, const std::string &name) {
    std::string description;

    if (type == "outer_environment_type" || type == "short_inner_environment_type" ||
        type == "verbose_inner_environment_type") {
        description = scanForDescriptionByName(activeDialect->environments, name);
    } else if (type == "document_part_type") {
        description = scanForDescriptionByName(activeDialect->document_parts, name);
    } else if (type == "wobject_type") {
        description = scanForDescriptionByName(activeDialect->wobjects, name);
    }

    return description; // Return the description if found, or an empty string if not
}

template<typename T>
std::string DialectManager::scanForDescriptionByName(const std::vector<std::shared_ptr<T> > &describables,
                                                     const std::string &name) {
    static_assert(std::is_base_of<IDescribable, T>::value, "T must derive from IDescribable");

    for (const auto &describable: describables) {
        if (describable->getName() == name) {
            return describable->getDescription();
        }
    }
    return ""; // Return an empty string if no matching describable is found
}

void DialectManager::collectReferencesAndMetas() {
    for (const std::shared_ptr<Environment> &env: activeDialect->environments) {
        allReferences.insert(allReferences.end(), env->references.begin(), env->references.end());
        extractReferences(env->metaBlock, allReferences);
        metaBlocks.push_back(env->metaBlock);
    }


    for (const std::shared_ptr<DocumentPart> &dp: activeDialect->document_parts) {
        extractReferences(dp->metaBlock, allReferences);
        metaBlocks.push_back(dp->metaBlock);
    }

    for (const std::shared_ptr<Wobject> &w: activeDialect->wobjects) {
        extractReferences(w->metaBlock, allReferences);
        metaBlocks.push_back(w->metaBlock);
    }

    extractReferences(activeDialect->shorthand_at->metaBlock, allReferences);
    metaBlocks.push_back(activeDialect->shorthand_at->metaBlock);
    extractReferences(activeDialect->shorthand_hash->metaBlock, allReferences);
    metaBlocks.push_back(activeDialect->shorthand_hash->metaBlock);
}

void DialectManager::extractReferences(const MetaBlock &mb, std::vector<Reference> &target) {
    for (auto field: mb.optionalFields) {
        target.insert(target.end(), field.references.begin(), field.references.end());
    }
    for (auto field: mb.requiredFields) {
        target.insert(target.end(), field.references.begin(), field.references.end());
    }
}

std::vector<std::string> DialectManager::getReferencingTypeNames() {
    std::vector<std::string> names;

    for (const std::shared_ptr<Environment> &env: activeDialect->environments) {
        if (!env->references.empty()) {
            names.push_back(env->name);
        }
    }

    if (!activeDialect->shorthand_at->references.empty()) {
        names.emplace_back("@");
    }

    if (!activeDialect->shorthand_hash->references.empty()) {
        names.emplace_back("#");
    }

    extractReferencingMetaFieldNames(names);

    return names;
}


void DialectManager::extractReferencingMetaFieldNames(std::vector<std::string> &names) {
    // iterate over every metablock field, collect thosa that can reference something

    for (MetaBlock &mb: metaBlocks) {
        for (Field &of: mb.optionalFields) {
            if (!of.references.empty()) {
                // this field can reference something
                names.push_back(of.name);
            }
        }
        for (Field &rf: mb.requiredFields) {
            if (!rf.references.empty()) {
                // this field can reference something
                names.push_back(rf.name);
            }
        }
    }

}

std::vector<Reference> DialectManager::getPossibleReferencesByTypeName(const std::string &name) {

    if (referencesByTypeName.contains(name)) {
        return referencesByTypeName[name];
    }

    // unknown type to the dialect
    return {};
}
