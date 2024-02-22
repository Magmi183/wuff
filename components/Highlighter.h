//
// Created by Michal Janecek on 30.01.2024.
//

#ifndef WUFF_HIGHLIGHTER_H
#define WUFF_HIGHLIGHTER_H

#include <string>
#include <vector>

#include "../WooWooAnalyzer.h"
#include "Component.h"

struct NodeInfo {
    TSPoint startPoint;
    TSPoint endPoint;  
    std::string name;  

    NodeInfo(const TSPoint& start, const TSPoint& end, const std::string& captureName)
            : startPoint(start), endPoint(end), name(captureName) {}
};

struct pairHash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1,T2> &pair) const {
        auto hash1 = std::hash<T1>{}(pair.first);
        auto hash2 = std::hash<T2>{}(pair.second);
        return hash1 ^ (hash2 << 1);
    }
};


class Highlighter : Component {

public:
    Highlighter(WooWooAnalyzer * analyzer);
    
    std::vector<int> semanticTokens(const std::string& documentPath);
    
    void setTokenTypes(std::vector<std::string>);
    void setTokenModifiers (std::vector<std::string>);
    
    
private:
    std::vector<std::string> tokenTypes;
    std::vector<std::string> tokenModifiers;
    
    [[nodiscard]] const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>>& getQueryStringByName() const override;

    static const std::string woowooHighlightQuery;
    static const std::string yamlHighlightQuery;
    static const std::unordered_map<std::string, std::pair<TSLanguage*,std::string>> queryStringsByName;
    
    
    std::unordered_map<std::string, size_t> tokenTypeIndices;
    std::unordered_map<std::string, size_t> tokenModifierIndices;
    
    void addMetaBlocksNodes(WooWooDocument * document,  std::vector<NodeInfo> & nodes);
    void addCommentNodes(WooWooDocument * document,  std::vector<NodeInfo> & nodes);
};


#endif //WUFF_HIGHLIGHTER_H
