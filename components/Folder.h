//
// Created by Michal Janecek on 04.02.2024.
//

#ifndef WUFF_FOLDER_H
#define WUFF_FOLDER_H

#include "../WooWooAnalyzer.h"
#include "Component.h"

class Folder : Component {

public:

    explicit Folder(WooWooAnalyzer * analyzer);
    
    std::vector<FoldingRange> foldingRanges (const TextDocumentIdentifier & tdi);
    
private:
    
    [[nodiscard]] const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>>& getQueryStringByName() const override;
    static const std::unordered_map<std::string, std::pair<TSLanguage*,std::string>> queryStringsByName;
    
    static const std::string foldableTypesQuery;

};


#endif //WUFF_FOLDER_H
