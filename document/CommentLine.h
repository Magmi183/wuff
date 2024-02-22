//
// Created by Michal Janecek on 30.01.2024.
//

#ifndef WUFF_COMMENTLINE_H
#define WUFF_COMMENTLINE_H

#include <cstdint>

class CommentLine {
public:
    CommentLine(uint32_t lineNumber, uint32_t lineLength)
            : lineNumber(lineNumber), lineLength(lineLength) {}

    uint32_t lineNumber;
    uint32_t lineLength;
};


#endif //WUFF_COMMENTLINE_H
