#include "tree_sitter/parser.h"

#include <vector>
#include <cstring> // Required for memcpy
#include <iostream>

using std::vector;
using std::memcpy;

// order must match the externals array in grammar, actual names do not matter
enum TokenType {
    TEXT_NO_SPACE_NO_DOT,
    TEXT,
    FRAGILE_OUTER_ENVIRONMENT_BODY,
    COMMENT,
    VERBOSE_INNER_ENV_META,
    INDENT,
    DEDENT,
    NEWLINE,
    EMPTY_LINE, // maybe should be named BLOCK_SEPARATOR
    MULTI_EMPTY_LINE,
    ERROR_SENTINEL // Marker of error correction mode
};


const int INDENT_LEN = 2;

struct State {

    int space_count = 0;
    bool space_count_changed_flag = false;

};

struct Scanner {

    int16_t indent_level;

    // the desired indentation level, -1 = nothing unprocessed
    // if the number is not -1, that means we must emit indent/dedent immediately
    int16_t unprocessed_indentation;

    State *state;

    Scanner() {
        deserialize(NULL, 0);
    }

    void advance(TSLexer *lexer) {
        uint32_t consumed = lexer->lookahead;
        lexer->advance(lexer, false);

        // if consuming newline, check if next line is a comment line, if so, consume it
        if (consumed == '\n') {
            consumeComment(lexer);
        }
    }

    // consume all consecutive comment lines
    bool consumeComment(TSLexer *lexer) {

        if (lexer->lookahead != '%' || get_column(lexer) != 0) {
            return false;
        }

        while (!onNewline(lexer) && !lexer->eof(lexer)) {
            lexer->advance(lexer, false);
        }

        advance(lexer);

        return true;
    }

    bool onNewline(TSLexer *lexer) {

        if (lexer->lookahead == '\r') {
            advance(lexer);
        }

        // we could be on a line containing only spaces - that line is technically not empty, but should be 
        // considered as such
        int spaces_consumed = 0;

        if (get_column(lexer) == 0) {
            while (lexer->lookahead == ' ') {
                advance(lexer);
                ++spaces_consumed;
            }
        }

        if (lexer->lookahead == '\n') {
            return true;
        } else {
            // we consumed spaces at the beginning of a line but it was NOT an empty line
            // a flag needs to be set as a sign that some spaces were scanned
            state->space_count += spaces_consumed;
            state->space_count_changed_flag = spaces_consumed != 0;
            return false;
        }

    }


    void mark_end(TSLexer *lexer) {
        lexer->mark_end(lexer);
    }

    uint32_t get_column(TSLexer *lexer) {
        if (lexer->eof(lexer)) {
            return 0;
        }

        return lexer->get_column(lexer);

    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {

        // if there is unprocessed change in indentation, emit it immediately, no matter what
        bool tokenEmitted = handleUnprocessedIndentation(lexer, valid_symbols);
        if (tokenEmitted) {
            return true;
        }

        // consume all comments first
        bool commentFound = consumeComment(lexer);
        if (commentFound) {
            lexer->result_symbol = COMMENT;
            return commentFound;
        }

        // scanning starts on a newline
        bool starting_on_newline = get_column(lexer) == 0;

        // total newlines encountered during the scan
        int newline_count = 0;

        // multiple spaces can occur anywhere in the text, check if we can detect indent based on position
        bool could_be_indent = get_column(lexer) <= INDENT_LEN * indent_level;

        for (;;) {
            if (onNewline(lexer) && newline_count == 0) {
                ++newline_count;
                could_be_indent = true; // indent could be on the next line
                state->space_count = 0;
                advance(lexer);
                mark_end(lexer);

            } else if (state->space_count_changed_flag || lexer->lookahead == ' ') {
                if (!state->space_count_changed_flag) {
                    state->space_count++;
                    advance(lexer);
                } else {
                    // consumed spaces via newline detection
                    state->space_count_changed_flag = false;
                }
                if (state->space_count == indent_level * INDENT_LEN) {
                    // mark end of newline (start of next content, considering indentation)
                    // may be overriden by potential indentation
                    mark_end(lexer);

                }

                if (state->space_count == (indent_level + 1) * INDENT_LEN) {
                    // mark end of first new indent level (others may follow, but they will not be the part of this emition)
                    mark_end(lexer);
                }

            } else if (lexer->eof(lexer)) {
                state->space_count = 0;
                break;
            } else {
                break;
            }
        }


        // TODO: If there are for example 3 spaces, this division causes it to be treated like 2.
        // This needs to be solved, perhaps with some clever error recovery.

        uint16_t new_indent_level = state->space_count / INDENT_LEN;


        if (valid_symbols[INDENT] && new_indent_level > indent_level && could_be_indent) {
            // current line is indented more than our current level, INDENT has to be emitted
            return indent(lexer, new_indent_level, false);
        }

        if (!lexer->eof(lexer) && !newline_count) {
            bool tokenFound = scanText(lexer, valid_symbols);
            if (tokenFound) {
                return tokenFound;
            }
        }


        // TODO: This part can very likely be improved by a lot.
        if (newline_count || lexer->eof(lexer)) {

            if (valid_symbols[DEDENT] && new_indent_level < indent_level) {

                state->space_count = 0;
                if (valid_symbols[EMPTY_LINE] || valid_symbols[MULTI_EMPTY_LINE]) {
                    // we could just be on an empty line and the indentation level will continue on next line
                    // same for MULTI_EMPTY_LINE - in wobjects could be confused with dedent
                    // for example, if we are in the middle of a block (separated textblocks/envs), we must NOT interpret this as a dedent
                    mark_end(lexer);

                    // '\n' => after our suspected dedent, there is empty line
                    if (onNewline(lexer)) {

                        ++newline_count;
                        advance(lexer); // eat the newline

                        // check if it is MULTI_EMPTY_LINE
                        bool multi = false;
                        if (onNewline(lexer) && valid_symbols[MULTI_EMPTY_LINE]) {
                            while (onNewline(lexer)) {
                                ++newline_count;
                                advance(lexer);
                            }
                            multi = true;
                        }

                        state->space_count_changed_flag = false;
                        while (lexer->lookahead == ' ') {
                            // count spaces on the first next non-empty line
                            advance(lexer);
                            ++state->space_count;
                        }

                        new_indent_level = state->space_count / INDENT_LEN;

                        if (new_indent_level == indent_level) {
                            // it was just an empty line, indent is continuing on the same level, no DEDENT
                            // or even more indentation is occuring (implicit outer)
                            mark_end(lexer); // (mark all the way to the point where next content is starting)
                            if (!multi && !starting_on_newline) {
                                // if we started on newline, that means the first newline we scanned was on empty line
                                lexer->result_symbol = EMPTY_LINE;
                            } else {
                                lexer->result_symbol = MULTI_EMPTY_LINE;
                            }
                            return true;
                        }
                    }
                } else {
                    // Here we need to check the same, that we are not just on an empty line.
                    // Even when it is not expected - like in situation when exiting metablock/implicit outer.

                    mark_end(lexer);

                    state->space_count = 0;

                    // consume newlines + spaces to get to the nearest content line
                    while (onNewline(lexer)) {
                        ++newline_count;
                        advance(lexer);
                    }
                    state->space_count_changed_flag = false;

                    while (lexer->lookahead == ' ') {
                        advance(lexer);
                        ++state->space_count;
                    }


                    new_indent_level = state->space_count / INDENT_LEN;

                    if (new_indent_level >= indent_level) {
                        // expecting dedent, not a newline, but content is continuing on the same indent level the line below
                        // OR the next line is even more indented - this can occur when using implicit outer right after meta block.
                        // must be the end of metablock - we want to dedent just one level

                        new_indent_level = indent_level - 1;
                    }
                }
                // unless we discovered next line after the empty one is indented even more (implicit outer?), dedent
                if (new_indent_level < indent_level) {
                    return dedent(lexer, new_indent_level);
                }
            }


            if (valid_symbols[NEWLINE]) {
                // newline is valid and it was found, indent is OK (next line is not indented/dedented)
                lexer->result_symbol = NEWLINE;
                return true;
            } else {
                // newline is not valid, but '\n' was found
                // decide whether it could be single EMPTY_LINE or a start of MULTI_EMPTY_LINE
                if (valid_symbols[MULTI_EMPTY_LINE] || valid_symbols[EMPTY_LINE]) {

                    // continue scanning for whitespace
                    for (;;) {
                        if (onNewline(lexer)) {
                            ++newline_count;
                            state->space_count = 0;
                            advance(lexer);
                            mark_end(lexer);

                        } else if (state->space_count_changed_flag || lexer->lookahead == ' ') {
                            if (!state->space_count_changed_flag) {
                                advance(lexer);
                                ++state->space_count;
                            } else {
                                state->space_count_changed_flag = false;
                            }

                            if (state->space_count == INDENT_LEN * indent_level) {
                                mark_end(lexer);
                            }

                        } else {
                            break;
                        }
                    }

                    new_indent_level = state->space_count / INDENT_LEN;
                    if (newline_count >= 2) {
                        // more than two empty lines
                        lexer->result_symbol = MULTI_EMPTY_LINE;
                        return true;
                    } else if (!lexer->eof(lexer) && valid_symbols[EMPTY_LINE] &&
                               new_indent_level == indent_level) {
                        // no more empty lines beyond the first one
                        lexer->result_symbol = EMPTY_LINE;
                        return true;
                    } else {
                        // only MULTI_EMPTY_LINE is valid, but just single one was found
                        return false;
                    }

                }

            }

        }

        return false;
    }

    bool handleUnprocessedIndentation(TSLexer *lexer, const bool *valid_symbols) {

        if (valid_symbols[FRAGILE_OUTER_ENVIRONMENT_BODY]) {
            // FRAGILE_OUTER_ENVIRONMENT_BODY can begin with spaces, therefore do not consider them to be an indentation
            unprocessed_indentation = -1;
            return false;
        }

        if (unprocessed_indentation == -1) {
            return false;
        } else if (unprocessed_indentation > indent_level) {
            // unprocessed indents
            return indent(lexer, unprocessed_indentation, true);
        } else if (unprocessed_indentation < indent_level) {

            /**
             * Before emitting dedents, we need to check if it is still valid.
             * That is, no empty/multiempty line follows.
             * TODO: Encapsulate this logic and use it both here and in the scan function, right now there is a lot of duplication.
             */

            mark_end(lexer);
            if (valid_symbols[MULTI_EMPTY_LINE]) {
                uint32_t newline_count = 0;
                if (onNewline(lexer)) {
                    while (onNewline(lexer)) {
                        ++newline_count;
                        advance(lexer);
                    }
                }

                while (lexer->lookahead == ' ') {
                    // count spaces on the first next non-empty line
                    advance(lexer);
                    ++state->space_count;
                }

                uint32_t new_indent_level = state->space_count / INDENT_LEN;

                if (new_indent_level >= indent_level) {
                    mark_end(lexer); // (mark all the way to the point where next content is starting)
                    if (newline_count == 1 && valid_symbols[EMPTY_LINE]) {
                        lexer->result_symbol = EMPTY_LINE;
                        unprocessed_indentation = -1;
                        return true;
                    } else if (newline_count >= 2 && valid_symbols[MULTI_EMPTY_LINE]) {
                        lexer->result_symbol = MULTI_EMPTY_LINE;
                        unprocessed_indentation = -1;
                        return true;
                    }

                }
            }

            // unprocessed dedents
            return dedent(lexer, unprocessed_indentation);
        }

        return false;
    }

    /*
     * Handle dedent emition.
     */
    bool dedent(TSLexer *lexer, int indentation_level) {
        indent_level--;

        if (indent_level > indentation_level) {
            // we need to dedent more
            // this is done by setting unprocessed_indentation variable
            unprocessed_indentation = indentation_level;
        } else {
            // we dedented to the desired level
            unprocessed_indentation = -1;
        }

        lexer->result_symbol = DEDENT;
        return true;
    }

    bool indent(TSLexer *lexer, int indentation_level, bool consume) {

        if (consume) {
            for (int i = 0; i < INDENT_LEN; ++i) {
                advance(lexer);
            }
            mark_end(lexer);
        }

        indent_level++;

        if (indent_level < indentation_level) {
            // we need to indent more
            // this is done by setting unprocessed_indentation variable
            unprocessed_indentation = indentation_level;
        } else {
            // we indented to the desired level
            unprocessed_indentation = -1;
        }

        lexer->result_symbol = INDENT;
        return true;
    }


    // TODO: Detecting fragile outer, short inner and classic inner is almost identical.
    // Come up with a nice solution to merge it.
    bool scanText(TSLexer *lexer, const bool *valid_symbols) {

        if (lexer->lookahead == '.' && get_column(lexer) == 0) {
            // TODO: This has to be fixed, it was just a quick-fix solution. (see test-cases)
            return false;
        }

        if (!valid_symbols[ERROR_SENTINEL] && valid_symbols[FRAGILE_OUTER_ENVIRONMENT_BODY]) {
            return scanFragile(lexer, valid_symbols);
        }

        if (valid_symbols[TEXT] || valid_symbols[TEXT_NO_SPACE_NO_DOT] || valid_symbols[VERBOSE_INNER_ENV_META]) {
            int spaceDotCount = state->space_count;
            int consumed = spaceDotCount;
            bool startWithDot = false;

            while (!lexer->eof(lexer) && !onNewline(lexer) && lexer->lookahead != '"' && lexer->lookahead != '$') {

                if (!iswalnum(lexer->lookahead)) {
                    // non-alphanumeric character => could be ending of inner env. meta
                    if (startWithDot && spaceDotCount == 1 && consumed >= 2 &&
                        valid_symbols[VERBOSE_INNER_ENV_META]) {
                        // started with DOT, had at least one other character and we expect meta = VERBOSE_INNER_ENV_META
                        lexer->result_symbol = VERBOSE_INNER_ENV_META;
                        mark_end(lexer);
                        return true;
                    }
                }


                if (lexer->lookahead == '.' || lexer->lookahead == ' ') {

                    if (!spaceDotCount && valid_symbols[TEXT_NO_SPACE_NO_DOT] && consumed) {
                        // encountered text stopper for TEXT_NO_SPACE_NO_DOT and something (but no dots/space)
                        // was consumed - end of token
                        lexer->result_symbol = TEXT_NO_SPACE_NO_DOT;
                        return true;
                    } else if (lexer->lookahead == '.') {
                        // DOT is a very special character in WooWoo, it may, or it may not, mark a start for a lot of constructs
                        if (!consumed) {
                            startWithDot = true;
                        }

                        // WHEREVER in text we are, DOT means that an short inner env. could be beginning
                        mark_end(lexer); // remember end of current text
                        int consumed_before = consumed; // remember consumed len
                        if (isShortInnerEnv(lexer, consumed, spaceDotCount)) {
                            if (consumed_before) {
                                // inner env. is beginning, but we found some text, so return it
                                lexer->result_symbol = TEXT;
                                return true;
                            } else {
                                // we are at the beginning of inner env. and nothing was found before
                                return false;
                            }
                        } else {
                            // continue next iteration (to not advance again at the end of the cycle)
                            continue;
                        }
                    }
                } else if (lexer->lookahead == '!') {
                    // fragile outer could be beginning
                    mark_end(lexer); // remember end of current text
                    int consumed_before = consumed; // remember consumed len
                    if (isFragileOuter(lexer, consumed, spaceDotCount)) {
                        if (consumed_before) {
                            // inner env. is beginning, but we found some text, so return it
                            lexer->result_symbol = TEXT;
                            return true;
                        } else {
                            // we are at the beginning of frag. outer env. and nothing was found before
                            return false;
                        }
                    } else {
                        // continue next iteration (to not advance again at the end of the cycle)
                        continue;
                    }


                }


                if (lexer->lookahead == '.' || lexer->lookahead == ' ') {
                    ++spaceDotCount;
                }
                advance(lexer);
                consumed++;

            }

            if (consumed) {
                if (!spaceDotCount && valid_symbols[TEXT_NO_SPACE_NO_DOT]) {
                    lexer->result_symbol = TEXT_NO_SPACE_NO_DOT;
                } else if (startWithDot && spaceDotCount == 1 && consumed >= 2 &&
                           valid_symbols[VERBOSE_INNER_ENV_META]) {
                    lexer->result_symbol = VERBOSE_INNER_ENV_META;

                } else {
                    lexer->result_symbol = TEXT;
                }
                // mark-end to override previous marks
                mark_end(lexer);
                return true;
            }
        }

        return false;
    }

    bool scanFragile(TSLexer *lexer, const bool *valid_symbols) {
        bool prev_newline = false;

        while (!lexer->eof(lexer)) {

            if (onNewline(lexer)) {

                if (prev_newline) {
                    // this could be single empty line, which is allowed in fragile env. body

                    advance(lexer);

                    uint32_t space_count = 0;
                    while (lexer->lookahead == ' ') {
                        space_count++;
                        advance(lexer);
                    }

                    if (onNewline(lexer) || space_count < indent_level * INDENT_LEN) {
                        // it was not an empty line, because 1) another line follows
                        // or the content is dedented (must be same or more)
                        break;
                    } else {
                        // it was an empty line - continue scanning the rest of the body
                        prev_newline = false;

                    }

                } else {
                    // first new line
                    prev_newline = true;
                    mark_end(lexer);
                    advance(lexer);
                    continue;
                }

            } else {
                prev_newline = false;
            }
            mark_end(lexer);
            advance(lexer);
        }

        if(lexer->eof(lexer)){
            // if we are at the end of the file, consume everything
            // in other case we are stopping because of a newline, and we do not want to consume that
            mark_end(lexer);
        }

        lexer->result_symbol = FRAGILE_OUTER_ENVIRONMENT_BODY;
        return true;
    }

    /*
     * Return true if we are at the start of short inner environment.
     * Start = the starting dot.
     * This requires large lookahead. Arbitrarily large number of characters are consumed.
     *
     * WARNING: For now, this function does NOT check for characters after ':'.
     * For example, it returns true for this text: "Hello .bold:   hello", even though this is not valid short inner env.
     */
    bool isShortInnerEnv(TSLexer *lexer, int &consumed, int &spaceDotCount) {
        return isOperatorColonOp(lexer, consumed, spaceDotCount, '.');
    }


    bool isFragileOuter(TSLexer *lexer, int &consumed, int &spaceDotCount) {
        return isOperatorColonOp(lexer, consumed, spaceDotCount, '!');
    }

    bool isOperatorColonOp(TSLexer *lexer, int &consumed, int &spaceDotCount, char op) {
        // first character must be the operator (usually . or !)
        if (lexer->lookahead == op) {
            advance(lexer);
            consumed++;
            if (op == ' ' || op == '.')
                spaceDotCount++;
        } else {
            return false;
        }

        // after operator, a lowercase letter must follow
        if (lexer->lookahead < 256 && islower(lexer->lookahead)) {
            advance(lexer);
            consumed++;
        } else {
            return false;
        }

        // the rest of the type is a sequence of any-cased letters
        while (lexer->lookahead < 256 && isalpha(lexer->lookahead)) {
            advance(lexer);
            consumed++;
        }

        // the first non-alpha character after the type has to be ':'
        return lexer->lookahead == ':';
    }

    unsigned serialize(char *buffer) {
        size_t i = 0;
        buffer[i++] = indent_level;
        buffer[i++] = unprocessed_indentation;
        return i;
    }

    void deserialize(const char *buffer, unsigned length) {
        indent_level = 0;
        unprocessed_indentation = -1;
        state = new State();

        size_t i = 0;
        if (length > 0) {

            indent_level = buffer[i++];
            unprocessed_indentation = buffer[i++];

        }

    }

};


extern "C" {

void *tree_sitter_woowoo_external_scanner_create() {
    return new Scanner();
}

bool tree_sitter_woowoo_external_scanner_scan(
        void *payload,
        TSLexer *lexer,
        const bool *valid_symbols
) {
    Scanner *const scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_woowoo_external_scanner_serialize(void *payload, char *state) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(state);
}

void tree_sitter_woowoo_external_scanner_deserialize(
        void *const payload,
        const char *const buffer,
        unsigned const length
) {
    Scanner *const scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
}

void tree_sitter_woowoo_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
}

}
