//
// Created by Michal Janecek on 27.01.2024.
//

#ifndef WUFF_WOOWOOANALYZER_H
#define WUFF_WOOWOOANALYZER_H


#include <filesystem>
#include <string>
#include <unordered_map>
#include <pybind11/pytypes.h>
#include "document/DialectedWooWooDocument.h"
#include "parser/Parser.h"
#include "dialect/DialectManager.h"
#include "lsp/LSPTypes.h"

class Hoverer;
class Highlighter;
class Navigator;
class Completer;
class Linter;
class Folder;


namespace fs = std::filesystem;
namespace py = pybind11;

class WooWooAnalyzer {
private:
    std::unordered_map<std::string, std::unordered_map<std::string, DialectedWooWooDocument*>> projects;
    std::unordered_map<std::string, std::string> docToProject;
    Parser* parser;
    Hoverer* hoverer;
    Highlighter* highlighter;
    Navigator * navigator;
    Completer * completer;
    Linter * linter;
    Folder * folder;

public:
    WooWooAnalyzer();
    ~WooWooAnalyzer(); 
    void setDialect(const std::string& dialectPath);
    bool loadWorkspace(const std::string& workspaceUri);
    DialectedWooWooDocument * getDocumentByUri(const std::string & docUri);
    DialectedWooWooDocument * getDocument(const std::string& pathToDoc);
    DialectManager* dialectManager;
    
    std::vector<DialectedWooWooDocument *> getDocumentsFromTheSameProject(WooWooDocument * document);
    
    // LSP-like functionalities
    std::string hover(const std::string& docUri, int line, int character);
    std::vector<int> semanticTokens(const std::string& docUri);
    Location goToDefinition(const DefinitionParams& params);
    std::vector<CompletionItem> complete(const CompletionParams & params);
    std::vector<Diagnostic> diagnose(const TextDocumentIdentifier & tdi); 
    std::vector<FoldingRange> foldingRanges(const TextDocumentIdentifier & tdi);
    
    // LSP support functions

    void setTokenTypes(std::vector<std::string> tokenTypes);
    void setTokenModifiers (std::vector<std::string> tokenModifiers);
    void documentDidChange(const TextDocumentIdentifier & tdi, std::string &source);
    void renameDocument(const std::string & oldUri, const std::string & newUri);
    void openDocument(const TextDocumentIdentifier & tdi);
    
private:

    static std::vector<fs::path> findProjectFolders(const fs::path& rootPath);
    static std::optional<fs::path> findProjectFolder(const std::string& uri);
    
    void loadDocument(const fs::path& projectPath, const fs::path& documentPath);
    void handleDocumentChange(const TextDocumentIdentifier & tdi, std::string & source);
    static bool endsWith(const std::string &str, const std::string &suffix) ;
    static std::vector<fs::path> findAllWooFiles(const fs::path  & rootPath);
};



#endif //WUFF_WOOWOOANALYZER_H
