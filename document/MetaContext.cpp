//
// Created by Michal Janecek on 30.01.2024.
//

#include "MetaContext.h"

#include <utility>


MetaContext::MetaContext(TSTree *tree, uint32_t lineOffset, uint32_t byteOffset, std::string parentType,
                         std::string parentName)
    : tree(tree), lineOffset(lineOffset), byteOffset(byteOffset), parentType(std::move(parentType)), parentName(std::move(parentName)) // Initializer list
{
}


const std::string MetaContext::metaFieldQueryString = R"(
(block_mapping_pair 
  key: (flow_node 
          [
            (double_quote_scalar) 
            (single_quote_scalar) 
            (plain_scalar)
          ] @key
       ) 
  value: (flow_node) @value
)
)";