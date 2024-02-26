//
// Created by Michal Janecek on 28.01.2024.
//

#ifndef WUFF_UTF8TOUTF16MAPPING_H
#define WUFF_UTF8TOUTF16MAPPING_H


#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>

class UTF8toUTF16Mapping {
public:
    void buildMappings(const std::string& source);

    std::pair<uint32_t, uint32_t> utf8ToUtf16(uint32_t lineNum, uint32_t utf8Offset) const;

    std::pair<uint32_t, uint32_t> utf16ToUtf8(uint32_t lineNum, uint32_t utf16Offset) const;

private:
    std::vector<std::unordered_map<int, int>> utf8ToUtf16Mappings;
    std::vector<std::unordered_map<int, int>> utf16ToUtf8Mappings;
    std::unordered_map<int, int> lineUtf8ToUtf16Mapping(const std::string& line);
    static int utf8CharLen(unsigned char firstByte);
    static uint32_t utf8ToCodePoint(const std::string& utf8, int& offset, int length);
};

#endif //WUFF_UTF8TOUTF16MAPPING_H
