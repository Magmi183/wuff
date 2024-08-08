//
// Created by Michal Janecek on 08.08.2024.
//

#ifndef WUFF_WOOFILE_H
#define WUFF_WOOFILE_H

#include "yaml-cpp/yaml.h"
#include <filesystem>
namespace fs = std::filesystem;

class Woofile {
public:
    Woofile(const fs::path & projectFolderPath);
    
    fs::path bibtex;
    void deserialize(const YAML::Node& node);

};


#endif //WUFF_WOOFILE_H
