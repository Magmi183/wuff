//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef WUFF_REFERENCE_H
#define WUFF_REFERENCE_H

#include <string>
#include <functional>  // For std::hash
#include "yaml-cpp/yaml.h"


class Reference {
public:
    std::string metaKey;
    std::string structureType;
    std::string structureName;

    Reference() = default;
    Reference(const std::string& metaKey, const std::string& structureType = "", const std::string& structureName = "");
    void deserialize(const YAML::Node& node);

    bool operator==(const Reference& other) const;
};

namespace std {
    template <>
    struct hash<Reference> {
        std::size_t operator()(const Reference& ref) const noexcept;
    };
}

#endif 
