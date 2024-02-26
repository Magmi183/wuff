//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef DOCUMENTPART_H
#define DOCUMENTPART_H

#include <string>
#include "MetaBlock.h"
#include "IDescribable.h"
#include "yaml-cpp/yaml.h"

class DocumentPart : public IDescribable {
public:
    std::string name;
    std::string description;
    MetaBlock metaBlock;

    DocumentPart() = default;
    DocumentPart(std::string  name, std::string  description, MetaBlock  metaBlock = MetaBlock());
    void deserialize(const YAML::Node& node);

    std::string getDescription() const override {
        return description;
    }

    std::string getName() const override {
        return name;
    }

};

#endif // DOCUMENTPART_H
