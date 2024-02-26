//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef WOBJECT_H
#define WOBJECT_H

#include <string>
#include "MetaBlock.h"
#include "IDescribable.h"
#include "yaml-cpp/yaml.h"


class Wobject : public IDescribable {
public:
    std::string name;
    std::string description;
    MetaBlock metaBlock;

    Wobject() = default;
    Wobject(std::string  name, std::string  description, MetaBlock  metaBlock = MetaBlock());
    void deserialize(const YAML::Node& node);

    [[nodiscard]] std::string getDescription() const override {
        return description;
    }

    [[nodiscard]] std::string getName() const override {
        return name;
    }

};

#endif // WOBJECT_H
