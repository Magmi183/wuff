//
// Created by Michal Janecek on 16.06.2024.
//

#ifndef WUFF_WOOWOOPROJECT_H
#define WUFF_WOOWOOPROJECT_H
#include <string>
#include <filesystem>
namespace fs = std::filesystem;


class WooWooProject {

private:
    std::unordered_map<std::string, DialectedWooWooDocument*> documents;
    void loadDocument(const fs::path &documentPath);
public:
    
    WooWooProject(const fs::path & projectFolderPath);
    
};


#endif //WUFF_WOOWOOPROJECT_H
