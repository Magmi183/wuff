//
// Created by Michal Janecek on 27.01.2024.
//

#include "Reference.h"

Reference::Reference(const std::string& metaKey, const std::string& structureType, const std::string& structureName)
        : metaKey(metaKey), structureType(structureType), structureName(structureName) {
    if (metaKey.empty()) {
        throw std::invalid_argument("The 'meta_key' field is required.");
    }
}

bool Reference::operator==(const Reference& other) const {
    return metaKey == other.metaKey && structureType == other.structureType && structureName == other.structureName;
}


void Reference::deserialize(const YAML::Node& node) {
    if (!node["meta_key"]) {
        throw std::runtime_error("Reference YAML node is missing 'meta_key'");
    }
    metaKey = node["meta_key"].as<std::string>();

    // structureType and structureName are optional; only assign them if they exist
    if (node["structure_type"]) {
        structureType = node["structure_type"].as<std::string>();
    }

    if (node["structure_name"]) {
        structureName = node["structure_name"].as<std::string>();
    }
}

namespace std {
    size_t hash<Reference>::operator()(const Reference& ref) const noexcept {
        return hash<string>()(ref.metaKey) ^ hash<string>()(ref.structureType) ^ hash<string>()(ref.structureName);
    }
}
