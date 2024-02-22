//
// Created by Michal Janecek on 14.02.2024.
//

#ifndef WUFF_COMPONENT_H
#define WUFF_COMPONENT_H

#include "../WooWooAnalyzer.h"

class Component {
    
protected:
    Component(WooWooAnalyzer * analyzer);
    virtual ~Component();
    
    void prepareQueries();
    
    WooWooAnalyzer * analyzer;
    
    // pair of queryName, <lang, queryString>
    virtual const std::unordered_map<std::string, std::pair<TSLanguage*, std::string>>& getQueryStringByName() const = 0;
    // queryName, query
    std::unordered_map<std::string, TSQuery *> queries;
};


#endif //WUFF_COMPONENT_H
