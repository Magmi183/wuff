//
// Created by Michal Janecek on 28.01.2024.
//

#ifndef WUFF_HOVERER_H
#define WUFF_HOVERER_H

#include <string>
#include <vector>

#include "../WooWooAnalyzer.h"
#include "Component.h"

class Hoverer : Component {
public:
    explicit Hoverer(WooWooAnalyzer* analyzer);

    std::string hover(const std::string& docUir, uint32_t line, uint32_t character);

private:

    [[nodiscard]] const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>>& getQueryStringByName() const override;

    static const std::string hoverableNodesQuery;
    static const std::unordered_map<std::string, std::pair<TSLanguage*,std::string>> queryStringsByName;
};

#endif //WUFF_HOVERER_H
