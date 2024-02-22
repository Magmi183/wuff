//
// Created by Michal Janecek on 27.01.2024.
//

//#include <pybind11/pybind11.h>
#include <filesystem>
#include <string>
#include <utility>

#include "WooWooAnalyzer.h"
#include "dialect/DialectManager.h"
#include "document/DialectedWooWooDocument.h"

#include "components/Hoverer.h"
#include "components/Highlighter.h"
#include "components/Navigator.h"
#include "components/Completer.h"
#include "components/Linter.h"
#include "components/Folder.h"

#include "utils/utils.h"

WooWooAnalyzer::WooWooAnalyzer() : dialectManager(nullptr) {
    parser = new Parser();
    highlighter = new Highlighter(this);
    hoverer = new Hoverer(this);
    navigator = new Navigator(this);
    completer = new Completer(this);
    linter = new Linter(this);
    folder = new Folder(this);
}

WooWooAnalyzer::~WooWooAnalyzer() {
    delete parser;
    delete hoverer;

    for (auto &project: projects) {
        for (auto &docPair: project.second) {
            delete docPair.second;
        }
    }
}

void WooWooAnalyzer::setDialect(const std::string &dialectPath) {
    dialectManager = new DialectManager(dialectPath);
}

bool WooWooAnalyzer::loadWorkspace(const std::string &workspaceUri) {
    fs::path rootPath = utils::uriToPathString(workspaceUri);
    auto projectFolders = findProjectFolders(rootPath);

    for (const fs::path &projectFolderPath: projectFolders) {
        for (const auto &entry: fs::recursive_directory_iterator(projectFolderPath)) {
            if (entry.is_regular_file() && entry.path().extension() == ".woo") {
                loadDocument(projectFolderPath, entry.path());
            }
        }
    }

    // now find and load all .woo files without a project
    auto wooFiles = findAllWooFiles(rootPath);

    for (auto &wooFile: wooFiles) {
        if (!docToProject.contains(wooFile.string())) {
            loadDocument("", wooFile);
        }
    }

    return true;
}

std::vector<fs::path> WooWooAnalyzer::findAllWooFiles(const fs::path &rootPath) {
    std::vector<fs::path> wooFiles;

    if (fs::exists(rootPath) && fs::is_directory(rootPath)) {
        for (const auto &entry: fs::recursive_directory_iterator(rootPath)) {
            if (entry.is_regular_file() && entry.path().extension() == ".woo") {
                wooFiles.push_back(entry.path());
            }
        }
    }

    return wooFiles;
}

std::vector<fs::path> WooWooAnalyzer::findProjectFolders(const fs::path &rootPath) {

    std::vector<fs::path> projectFolders;
    for (const auto &entry: fs::recursive_directory_iterator(rootPath)) {
        if (entry.is_regular_file() && entry.path().filename() == "Woofile") {
            projectFolders.push_back(entry.path().parent_path());
        }
    }
    return projectFolders;
}

std::optional<fs::path> WooWooAnalyzer::findProjectFolder(const std::string &uri) {
    fs::path path = utils::uriToPathString(uri);
    // Start from the given URI and move up the directory hierarchy
    for (fs::path parent = path.parent_path(); parent!=parent.parent_path(); parent = parent.parent_path()) {
        fs::path woofilePath = parent / "Woofile";

        // Check if "Woofile" exists in this directory
        if (fs::exists(woofilePath)) {
            return parent; // Return the first parent directory containing "Woofile"
        }
        
    }

    return std::nullopt; // Return an empty optional if no project folder is found
}

void WooWooAnalyzer::loadDocument(const fs::path &projectPath, const fs::path &documentPath) {
    projects[projectPath.generic_string()][documentPath.generic_string()] = new DialectedWooWooDocument(documentPath, parser, dialectManager);
    docToProject[documentPath.generic_string()] = projectPath.generic_string();
}

DialectedWooWooDocument *WooWooAnalyzer::getDocumentByUri(const std::string &docUri) {
    auto path = utils::uriToPathString(docUri);
    return getDocument(path);
}

DialectedWooWooDocument *WooWooAnalyzer::getDocument(const std::string &pathToDoc) {
    return projects[docToProject[pathToDoc]][pathToDoc];
}

std::vector<DialectedWooWooDocument *> WooWooAnalyzer::getDocumentsFromTheSameProject(WooWooDocument *document) {
    std::vector<DialectedWooWooDocument *> documents;
    auto project = docToProject[document->documentPath.generic_string()];
    if (projects.find(project) != projects.end()) {
        std::unordered_map<std::string, DialectedWooWooDocument *> &pathDocMap = projects[project];

        for (const auto &pair: pathDocMap) {
            documents.emplace_back(pair.second);
        }
    } else {
        std::cerr << "Project with path '" << project << "' not found in projects map." << std::endl;
    }
    return documents;
}

void WooWooAnalyzer::handleDocumentChange(const TextDocumentIdentifier &tdi, std::string &source) {
    auto docPath = utils::uriToPathString(tdi.uri);
    auto document = getDocument(docPath);
    document->updateSource(source);
}

void WooWooAnalyzer::renameDocument(const std::string &oldUri, const std::string &newUri) {

    auto oldPath = utils::uriToPathString(oldUri);
    auto newPath = utils::uriToPathString(newUri);

    if (endsWith(newUri, ".woo")) {
        std::optional<fs::path> newProjectFolder = findProjectFolder(newUri);
        std::string oldProjectFolder = docToProject[oldPath];
        std::string newProjectFolderPathString = newProjectFolder.has_value() ? newProjectFolder.value().generic_string() : "";
        
        docToProject[newPath] = newProjectFolderPathString;
        docToProject.erase(oldPath);
        projects[newProjectFolderPathString][newPath] = projects[oldProjectFolder][oldPath];
        projects[oldProjectFolder].erase(oldPath);
        projects[newProjectFolderPathString][newPath]->documentPath = fs::path(newPath);

    } else {
        // the file is no longer a WooWoo document
        // TODO: Delete it.
    }

}



bool WooWooAnalyzer::endsWith(const std::string &str, const std::string &suffix) {
    if (str.length() >= suffix.length()) {
        return (str.rfind(suffix) == (str.length() - suffix.length()));
    } else {
        return false;
    }
}

// - LSP-like public interface - - -

std::string WooWooAnalyzer::hover(const std::string &docUri, int line, int character) {
    return hoverer->hover(docUri, line, character);
}

std::vector<int> WooWooAnalyzer::semanticTokens(const std::string &docUri) {
    return highlighter->semanticTokens(docUri);
}

Location WooWooAnalyzer::goToDefinition(const DefinitionParams& params) {
    return navigator->goToDefinition(params);
}

std::vector<CompletionItem> WooWooAnalyzer::complete(const CompletionParams &params) {
    return completer->complete(params);
}

std::vector<FoldingRange> WooWooAnalyzer::foldingRanges(const TextDocumentIdentifier &tdi) {
    return folder->foldingRanges(tdi);
}

void WooWooAnalyzer::documentDidChange(const TextDocumentIdentifier &tdi, std::string &source) {
    handleDocumentChange(tdi, source);
}

std::vector<Diagnostic> WooWooAnalyzer::diagnose(const TextDocumentIdentifier &tdi) {
    return linter->diagnose(tdi);
}

void WooWooAnalyzer::openDocument(const TextDocumentIdentifier &tdi) {
    auto docPath = utils::uriToPathString(tdi.uri);
    if (!docToProject.contains(docPath)) {
        // unknown document opened
        std::optional<fs::path> projectFolder = findProjectFolder(tdi.uri);
        std::string projectFolderPathString = projectFolder.has_value() ? projectFolder.value().generic_string() : "";
        loadDocument(projectFolderPathString, docPath);
    }
}


void WooWooAnalyzer::setTokenTypes(std::vector<std::string> tokenTypes) { return highlighter->setTokenTypes(std::move(tokenTypes)); }
void WooWooAnalyzer::setTokenModifiers (std::vector<std::string> tokenModifiers) { return highlighter->setTokenModifiers(std::move(tokenModifiers)); }

// - - - - - - - - - - - - - - - - -