//
// Created by Michal Janecek on 16.06.2024.
//

#include "WooWooProject.h"
#include "DialectedWooWooDocument.h"


WooWooProject::WooWooProject(const fs::path & projectFolderPath) {

    for (const auto &entry : fs::recursive_directory_iterator(projectFolderPath)) {
        if (entry.is_regular_file() && entry.path().extension() == ".woo") {
            loadDocument(entry.path());
        }
    }
    
}


void WooWooProject::loadDocument(const fs::path &documentPath) {
    documents[documentPath.generic_string()] = new DialectedWooWooDocument(documentPath, parser, dialectManager);

    docToProject[documentPath.generic_string()] = projectPath.generic_string();
}