//
// Created by Michal Janecek on 28.01.2024.
//

// UTF8toUTF16Mapping.cpp
#include "UTF8toUTF16Mapping.h"
void UTF8toUTF16Mapping::buildMappings(const std::string& source) {
    utf8ToUtf16Mappings.clear();
    utf16ToUtf8Mappings.clear();
    std::istringstream stream(source);
    std::string line;
    while (std::getline(stream, line)) {
        utf8ToUtf16Mappings.push_back(lineUtf8ToUtf16Mapping(line));
    }

    // Build reverse mappings
    for (const auto& map : utf8ToUtf16Mappings) {
        std::unordered_map<int, int> reverseMap;
        for (const auto& pair : map) {
            reverseMap[pair.second] = pair.first;
        }
        utf16ToUtf8Mappings.push_back(reverseMap);
    }
}

std::unordered_map<int, int> UTF8toUTF16Mapping::lineUtf8ToUtf16Mapping(const std::string& line) {
    std::unordered_map<int, int> mapping;
    int utf8Offset = 0;
    int utf16Position = 0;

    while (utf8Offset < line.size()) {
        unsigned char c = line[utf8Offset];
        int charLen = utf8CharLen(c);
        if (charLen == 0) { // Error handling for invalid UTF-8 byte
            std::cerr << "Invalid UTF-8 byte encountered" << std::endl;
            break;
        }

        uint32_t codePoint = utf8ToCodePoint(line, utf8Offset, charLen);

        int utf16Len = (codePoint >= 0x10000) ? 2 : 1;

        for (int i = 0; i < charLen; ++i) {
            mapping[utf8Offset - charLen + i] = utf16Position; // Adjust the index for mapping
        }

        utf16Position += utf16Len;

        }

    return mapping;
}


int UTF8toUTF16Mapping::utf8CharLen(unsigned char firstByte) {
    if (firstByte < 0x80) {
        return 1;
    } else if ((firstByte & 0xE0) == 0xC0) {
        return 2;
    } else if ((firstByte & 0xF0) == 0xE0) {
        return 3;
    } else if ((firstByte & 0xF8) == 0xF0) {
        return 4;
    }
    return 0; // Error case
}

uint32_t UTF8toUTF16Mapping::utf8ToCodePoint(const std::string& utf8, int& offset, int length) {
    uint32_t codePoint = 0;
    if (length == 1) {
        codePoint = utf8[offset];
    } else if (length == 2) {
        codePoint = ((utf8[offset] & 0x1F) << 6) | (utf8[offset + 1] & 0x3F);
    } else if (length == 3) {
        codePoint = ((utf8[offset] & 0x0F) << 12) | ((utf8[offset + 1] & 0x3F) << 6) | (utf8[offset + 2] & 0x3F);
    } else if (length == 4) {
        codePoint = ((utf8[offset] & 0x07) << 18) | ((utf8[offset + 1] & 0x3F) << 12) | ((utf8[offset + 2] & 0x3F) << 6) | (utf8[offset + 3] & 0x3F);
    }
    offset += length;
    return codePoint;
}


std::pair<uint32_t, uint32_t> UTF8toUTF16Mapping::utf8ToUtf16(uint32_t lineNum, uint32_t utf8Offset) const {
    if (lineNum >= 0 && lineNum < utf8ToUtf16Mappings.size()) {
        const auto& mapping = utf8ToUtf16Mappings[lineNum];
        auto it = mapping.find(utf8Offset);
        if (it != mapping.end()) {
            return {lineNum, it->second};
        }
    }
    // Return the original offset if the line number or utf8Offset is out of range or not found
    return {lineNum, utf8Offset};
}

std::pair<uint32_t, uint32_t> UTF8toUTF16Mapping::utf16ToUtf8(uint32_t lineNum, uint32_t utf16Offset) const {
    if (lineNum >= 0 && lineNum < utf16ToUtf8Mappings.size()) {
        const auto& mapping = utf16ToUtf8Mappings[lineNum];
        auto it = mapping.find(utf16Offset);
        if (it != mapping.end()) {
            return {lineNum, it->second};
        }
    }
    // Return the original offset if the line number or utf16Offset is out of range or not found
    return {lineNum, utf16Offset};
}
