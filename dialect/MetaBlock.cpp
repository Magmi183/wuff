//
// Created by Michal Janecek on 27.01.2024.
//

#include "MetaBlock.h"

MetaBlock::MetaBlock(const std::vector<Field>& requiredFields, const std::vector<Field>& optionalFields)
        : requiredFields(requiredFields), optionalFields(optionalFields) {
}


void MetaBlock::deserialize(const YAML::Node& node) {
    if (node["required_fields"]) {
        for (const auto& rfNode : node["required_fields"]) {
            Field rf;
            rf.deserialize(rfNode); 
            requiredFields.push_back(rf);
        }
    }

    if (node["optional_fields"]) {
        for (const auto& ofNode : node["optional_fields"]) {
            Field of;
            of.deserialize(ofNode); 
            optionalFields.push_back(of);
        }
    }
}
