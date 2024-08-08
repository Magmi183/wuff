//
// Created by Michal Janecek on 16.06.2024.
//

#ifndef WUFF_WOOWOOPROJECT_H
#define WUFF_WOOWOOPROJECT_H
#include <string>
#include <unordered_map>
#include <filesystem>
#include "DialectedWooWooDocument.h"
#include "Woofile.h"

namespace fs = std::filesystem;


class WooWooProject {

private:
    std::unordered_map<std::string, std::shared_ptr<DialectedWooWooDocument>> documents;
public:
    Woofile * woofile;
    std::optional<fs::path> projectFolderPath;
    WooWooProject();
    WooWooProject(const fs::path & projectFolderPath);
    DialectedWooWooDocument * getDocument(const std::string & docPath);
    DialectedWooWooDocument * getDocument(const WooWooDocument * document);
    DialectedWooWooDocument * getDocumentByUri(const std::string &docUri);
    std::shared_ptr<DialectedWooWooDocument> getDocumentShared(WooWooDocument * doc);
    std::set<DialectedWooWooDocument *> getAllDocuments();  // New member function declaration
    void deleteDocumentByUri(const std::string &uri);
    void loadDocument(const fs::path &documentPath);
    void deleteDocument(const DialectedWooWooDocument * document);
    void addDocument(const std::shared_ptr<DialectedWooWooDocument>& document);
};


#endif //WUFF_WOOWOOPROJECT_H
