//
// Created by Michal Janecek on 31.01.2024.
//

#ifndef WUFF_NAVIGATOR_H
#define WUFF_NAVIGATOR_H

#include <string>
#include "../WooWooAnalyzer.h"
#include "Component.h"
#include "../lsp/LSPTypes.h"


class Navigator : Component {

public:
    explicit Navigator(WooWooAnalyzer * analyzer);

    Location goToDefinition(const DefinitionParams & params);

private:
    Location navigateToFile(const DefinitionParams &params, const std::string & relativeFilePath);
    Location resolveShortInnerEnvironmentReference(const DefinitionParams &params, TSNode node);
    Location resolveShorthandReference(const std::string& shorthandType, const DefinitionParams &params, TSNode node);
    Location resolveMetaBlockReference( const DefinitionParams &params, TSNode node);

    Location findReference(const DefinitionParams &params, const std::vector<Reference>& possibleReferences, const std::string& referencingValue);

    [[nodiscard]] const std::unordered_map<std::string, std::pair<TSLanguage *, std::string>>& getQueryStringByName() const override;

    static const std::string goToDefinitionQuery;
    static const std::string metaFieldQuery;
    static const std::unordered_map<std::string, std::pair<TSLanguage*,std::string>> queryStringsByName;
    

};


#endif //WUFF_NAVIGATOR_H
