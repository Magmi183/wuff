//
// Created by Michal Janecek on 27.01.2024.
//

#include "Dialect.h"

void Dialect::deserialize(const YAML::Node& node) {
    if (!node["name"] || !node["version_code"] || !node["version_name"] || !node["description"] || !node["implicit_outer_environment"]) {
        throw std::runtime_error("Template YAML node is missing one or more required fields.");
    }

    name = node["name"].as<std::string>();
    version_code = node["version_code"].as<std::string>();
    version_name = node["version_name"].as<std::string>();
    description = node["description"].as<std::string>();
    implicit_outer_environment = node["implicit_outer_environment"].as<std::string>();

    // Deserialize DocumentParts
    if (node["document_parts"]) {
        for (const auto& dpNode : node["document_parts"]) {
            auto dp = std::make_shared<DocumentPart>();
            dp->deserialize(dpNode);
            document_parts.push_back(std::move(dp));
        }
    }

    // Deserialize Wobjects
    if (node["wobjects"]) {
        for (const auto& woNode : node["wobjects"]) {
            auto wo = std::make_shared<Wobject>();
            wo->deserialize(woNode);
            wobjects.push_back(std::move(wo));
        }
    }

    // Deserialize Classic Outer Environments
    if (node["outer_environments"]["classic"]) {
        for (const auto& oeNode : node["outer_environments"]["classic"]) {
            auto oe = std::make_shared<OuterEnvironment>();
            oe->deserialize(oeNode);
            classic_outer_environments.push_back(std::move(oe));
        }
    }

    // Deserialize Fragile Outer Environments
    if (node["outer_environments"]["fragile"]) {
        for (const auto& oeNode : node["outer_environments"]["fragile"]) {
            auto oe = std::make_shared<OuterEnvironment>();
            oe->deserialize(oeNode);
            fragile_outer_environments.push_back(std::move(oe));
        }
    }

    // Deserialize Inner Environments
    if (node["inner_environments"]) {
        for (const auto& ieNode : node["inner_environments"]) {
            auto ie = std::make_shared<InnerEnvironment>();
            ie->deserialize(ieNode);
            inner_environments.push_back(std::move(ie));
        }
    }

    // Deserialize Shorthands
    if (node["shorthands"]["hash"]) {
        shorthand_hash = std::make_shared<Shorthand>();
        shorthand_hash->deserialize(node["shorthands"]["hash"]);
        shorthand_hash->type = "hash";
    }

    if (node["shorthands"]["at"]) {
        shorthand_at = std::make_shared<Shorthand>();
        shorthand_at->deserialize(node["shorthands"]["at"]);
        shorthand_at->type = "at";
    }
}