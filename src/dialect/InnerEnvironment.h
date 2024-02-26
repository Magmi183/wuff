//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef WUFF_INNERENVIRONMENT_H
#define WUFF_INNERENVIRONMENT_H


#include <string>
#include <vector>
#include "Reference.h"  
#include "MetaBlock.h"
#include "IDescribable.h"
#include "yaml-cpp/yaml.h"

class InnerEnvironment : public IDescribable {
public:
    std::string name;
    std::string description;
    std::vector<Reference> references; 
    MetaBlock metaBlock;
    InnerEnvironment() = default;
    InnerEnvironment(std::string  name, std::string  description, const std::vector<Reference>& references = {}, MetaBlock  metaBlock = MetaBlock());
    void deserialize(const YAML::Node& node);

    std::string getDescription() const override {
        return description;
    }
    
    std::string getName() const override {
        return name;
    }
    
};


#endif //WUFF_INNERENVIRONMENT_H
