//
// Created by Michal Janecek on 27.01.2024.
//

#include "InnerEnvironment.h"

#include <utility>


InnerEnvironment::InnerEnvironment(std::string  name, std::string  description, const std::vector<Reference>& references, MetaBlock  metaBlock)
        : name(std::move(name)), description(std::move(description)), references(references), metaBlock(std::move(metaBlock)) {
}

void InnerEnvironment::deserialize(const YAML::Node& node) {
    if (!node["name"] || !node["description"]) {
        throw std::runtime_error("InnerEnvironment YAML node is missing 'name' or 'description'");
    }

    name = node["name"].as<std::string>();
    description = node["description"].as<std::string>();

    // Deserialize 'references' if they exist
    if (node["references"]) {
        references.clear();  // Clear existing references before deserializing
        for (const auto& refNode : node["references"]) {
            Reference ref;
            ref.deserialize(refNode);
            references.push_back(ref);
        }
    }

    // Deserialize 'metaBlock' if it exists
    if (node["meta_block"]) {
        metaBlock.deserialize(node["meta_block"]);
    }
}