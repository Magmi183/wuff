cmake_minimum_required(VERSION 3.12)
project(wuff)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# - - - YAML-CPP
include(FetchContent)

FetchContent_Declare(
        yaml-cpp
        GIT_REPOSITORY https://github.com/jbeder/yaml-cpp.git
        GIT_TAG 0.8.0
)
FetchContent_GetProperties(yaml-cpp)

if (NOT yaml-cpp_POPULATED)
    message(STATUS "Fetching yaml-cpp...")
    FetchContent_Populate(yaml-cpp)
    add_subdirectory(${yaml-cpp_SOURCE_DIR} ${yaml-cpp_BINARY_DIR})
endif ()

# - - - Tree-sitter
FetchContent_Declare(
        tree_sitter
        GIT_REPOSITORY https://github.com/tree-sitter/tree-sitter.git
        GIT_TAG v0.20.9
)
FetchContent_GetProperties(tree_sitter)

if (NOT tree_sitter_POPULATED)
    message(STATUS "Fetching tree-sitter...")
    FetchContent_Populate(tree_sitter)
    # Since Tree-sitter does not use CMake, we manually add its source and include directories
    set(TREE_SITTER_SRC ${tree_sitter_SOURCE_DIR}/lib/src/lib.c)
    set(TREE_SITTER_INCLUDE_DIRS ${tree_sitter_SOURCE_DIR}/lib/include ${tree_sitter_SOURCE_DIR}/lib/src ${tree_sitter_SOURCE_DIR}/lib/src/unicode)
    message(STATUS "Include directories: ${TREE_SITTER_INCLUDE_DIRS}")
endif ()

# Tree-Sitter WooWoo
set(WOOWOO_PARSER_SRC tree-sitter/woowoo/parser.c)
set(WOOWOO_SCANNER_SRC tree-sitter/woowoo/scanner.cc)

# Tree-Sitter YAML
set(YAML_PARSER_SRC tree-sitter/yaml/parser.c)
set(YAML_SCANNER_SRC tree-sitter/yaml/scanner.cc)

# - - - - -

FetchContent_Declare(
        pybind11
        GIT_REPOSITORY https://github.com/pybind/pybind11.git
        GIT_TAG        v2.11.1
)

# Make pybind11 available for use
FetchContent_MakeAvailable(pybind11)
pybind11_add_module(${PROJECT_NAME} NO_EXTRAS
        ${TREE_SITTER_SRC} # Add Tree-sitter lib.c source
        ${WOOWOO_PARSER_SRC}
        ${WOOWOO_SCANNER_SRC}
        ${YAML_PARSER_SRC}
        ${YAML_SCANNER_SRC}
        Bindings.cpp
        WooWooAnalyzer.cpp
        document/WooWooDocument.cpp
        document/DialectedWooWooDocument.cpp
        document/MetaContext.cpp
        document/CommentLine.cpp
        document/UTF8toUTF16Mapping.cpp
        dialect/DialectManager.cpp
        dialect/DocumentPart.cpp
        dialect/Dialect.cpp
        dialect/MetaBlock.cpp
        dialect/Field.cpp
        dialect/Shorthand.cpp
        dialect/Reference.cpp
        dialect/InnerEnvironment.cpp
        dialect/OuterEnvironment.cpp
        dialect/Wobject.cpp
        components/Component.cpp
        components/Hoverer.cpp
        components/Highlighter.cpp
        components/Navigator.cpp
        components/Completer.cpp
        components/Linter.cpp
        components/Folder.cpp
        parser/Parser.cpp
        utils/utils.cpp
)
target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${TREE_SITTER_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PUBLIC yaml-cpp::yaml-cpp)

# - - - WooWooTest
if (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")
    add_executable(WooWooTest
            ${TREE_SITTER_SRC}
            ${WOOWOO_PARSER_SRC}
            ${WOOWOO_SCANNER_SRC}
            ${YAML_PARSER_SRC}
            ${YAML_SCANNER_SRC}
            main.cpp
            WooWooAnalyzer.cpp
            document/WooWooDocument.cpp
            document/DialectedWooWooDocument.cpp
            document/MetaContext.cpp
            document/CommentLine.cpp
            document/UTF8toUTF16Mapping.cpp
            dialect/DialectManager.cpp
            dialect/DocumentPart.cpp
            dialect/Dialect.cpp
            dialect/MetaBlock.cpp
            dialect/Field.cpp
            dialect/Shorthand.cpp
            dialect/Reference.cpp
            dialect/InnerEnvironment.cpp
            dialect/OuterEnvironment.cpp
            dialect/Wobject.cpp
            components/Component.cpp
            components/Hoverer.cpp
            components/Highlighter.cpp
            components/Navigator.cpp
            components/Completer.cpp
            components/Linter.cpp
            components/Folder.cpp
            parser/Parser.cpp
            utils/utils.cpp
    )
    target_include_directories(WooWooTest SYSTEM PRIVATE ${TREE_SITTER_INCLUDE_DIRS})
    target_link_libraries(WooWooTest PUBLIC yaml-cpp::yaml-cpp pybind11::embed)
endif ()