//
// Created by Michal Janecek on 08.08.2024.
//

#include "Woofile.h"

Woofile::Woofile(const fs::path &projectFolderPath) {
    YAML::Node yamlData = YAML::LoadFile(projectFolderPath / "Woofile");
    deserialize(yamlData);
}

void Woofile::deserialize(const YAML::Node &node) {
    if (node["builder"] && node["builder"]["bibtex"]) {
        bibtex = node["builder"]["bibtex"].as<std::string>();
    } else {
        bibtex.clear();
    }
}

