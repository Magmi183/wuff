//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef SHORTHAND_H
#define SHORTHAND_H

#include <string>
#include <vector>
#include "Reference.h"  
#include "MetaBlock.h" 
#include "yaml-cpp/yaml.h"

class Shorthand {
public:
    std::string type;
    std::string description;
    std::vector<Reference> references;
    MetaBlock metaBlock;
    
    Shorthand() = default;
    Shorthand(std::string  type, std::string  description, const std::vector<Reference>& references = {}, MetaBlock  metaBlock = MetaBlock());
    void deserialize(const YAML::Node& node);

};

#endif // SHORTHAND_H
