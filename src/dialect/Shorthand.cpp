//
// Created by Michal Janecek on 27.01.2024.
//

#include "Shorthand.h"

#include <utility>

Shorthand::Shorthand(std::string  type, std::string  description, const std::vector<Reference>& references, MetaBlock  metaBlock)
        : type(std::move(type)), description(std::move(description)), references(references), metaBlock(std::move(metaBlock)) {
}


void Shorthand::deserialize(const YAML::Node& node) {
    if (!node["description"]) {
        throw std::runtime_error("Shorthand YAML node is missing a 'description'");
    }

    description = node["description"].as<std::string>();

    // Deserialize References
    if (node["references"]) {
        references.clear();  // Clear existing references before deserializing
        for (const auto& refNode : node["references"]) {
            Reference ref;
            ref.deserialize(refNode); 
            references.push_back(ref);
        }
    }

    if (node["meta_block"]) {
        metaBlock.deserialize(node["meta_block"]);  
    }
}
