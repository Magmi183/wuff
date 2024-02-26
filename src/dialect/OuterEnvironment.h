//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef OUTERENVIRONMENT_H
#define OUTERENVIRONMENT_H

#include <string>
#include "MetaBlock.h"
#include "IDescribable.h"
#include "yaml-cpp/yaml.h"

class OuterEnvironment : public IDescribable {
public:
    std::string name;
    std::string description;
    MetaBlock metaBlock;

    OuterEnvironment() = default;
    OuterEnvironment(std::string  name, std::string  description, MetaBlock  metaBlock = MetaBlock());
    void deserialize(const YAML::Node& node);

    std::string getDescription() const override {
        return description;
    }

    std::string getName() const override {
        return name;
    }
    
};

#endif // OUTERENVIRONMENT_H
