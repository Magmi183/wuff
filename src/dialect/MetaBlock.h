//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef WUFF_METABLOCK_H
#define WUFF_METABLOCK_H

#include <vector>
#include "Field.h"
#include "yaml-cpp/yaml.h"

class MetaBlock {
public:
    std::vector<Field> requiredFields;
    std::vector<Field> optionalFields;

    explicit MetaBlock(const std::vector<Field>& requiredFields = {}, const std::vector<Field>& optionalFields = {});
    void deserialize(const YAML::Node& node);
};



#endif //WUFF_METABLOCK_H
