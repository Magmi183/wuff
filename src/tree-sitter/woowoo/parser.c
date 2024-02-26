#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 306
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
    anon_sym_DOTinclude = 1,
    sym_filename = 2,
    anon_sym_DOT = 3,
    anon_sym_ = 4,
    sym__meta_block_content = 5,
    anon_sym_COLON = 6,
    anon_sym_DOLLAR = 7,
    aux_sym_math_environment_body_token1 = 8,
    aux_sym_short_inner_environment_type_token1 = 9,
    sym_short_inner_environment_body = 10,
    anon_sym_DQUOTE = 11,
    anon_sym_AT = 12,
    anon_sym_POUND = 13,
    aux_sym_verbose_inner_environment_hash_end_token1 = 14,
    anon_sym_BANG = 15,
    sym_outer_environment_type = 16,
    sym__letter = 17,
    sym__uppercase_letter = 18,
    sym__lowercase_letter = 19,
    anon_sym_LF = 20,
    anon_sym_CR_LF = 21,
    sym__inn_env_type_char = 22,
    sym__text_no_space_no_dot = 23,
    sym_text = 24,
    sym_fragile_outer_environment_body = 25,
    sym__comment = 26,
    sym_verbose_inner_environment_meta = 27,
    sym__ex_indent = 28,
    sym__ex_dedent = 29,
    sym__ex_newline = 30,
    sym__ex_empty_line = 31,
    sym__ex_multi_empty_line = 32,
    sym_error_sentinel = 33,
    sym_source_file = 34,
    sym_include = 35,
    sym_document_part = 36,
    sym_document_part_type = 37,
    sym_document_part_title = 38,
    sym_meta_block = 39,
    sym_document_part_body = 40,
    sym__document_part_content = 41,
    sym_wobject = 42,
    sym_wobject_type = 43,
    sym__wobject_body = 44,
    sym_block = 45,
    sym_text_block = 46,
    aux_sym__text_line = 47,
    sym_math_environment = 48,
    sym_math_environment_body = 49,
    sym__inner_environment = 50,
    sym_short_inner_environment = 51,
    sym_short_inner_environment_type = 52,
    sym_verbose_inner_environment_body = 53,
    sym_verbose_inner_environment = 54,
    sym_verbose_inner_environment_classic = 55,
    sym_verbose_inner_environment_at = 56,
    sym_verbose_inner_environment_hash = 57,
    sym__verbose_inner_environment_end = 58,
    sym_verbose_inner_environment_hash_end = 59,
    sym_verbose_inner_environment_at_end = 60,
    sym_verbose_inner_environment_type = 61,
    sym__outer_environment = 62,
    sym__explicit_outer_environment = 63,
    sym_fragile_outer_environment = 64,
    sym_classic_outer_environment = 65,
    sym_implicit_outer_environment = 66,
    sym__newline_char = 67,
    sym__document_part_type_char = 68,
    aux_sym_source_file_repeat1 = 69,
    aux_sym_source_file_repeat2 = 70,
    aux_sym_document_part_type_repeat1 = 71,
    aux_sym_meta_block_repeat1 = 72,
    aux_sym_document_part_body_repeat1 = 73,
    aux_sym_wobject_type_repeat1 = 74,
    aux_sym__wobject_body_repeat1 = 75,
    aux_sym_block_repeat1 = 76,
    aux_sym_text_block_repeat1 = 77,
    aux_sym_math_environment_body_repeat1 = 78,
    aux_sym__newline_char_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
        [ts_builtin_sym_end] = "end",
        [anon_sym_DOTinclude] = ".include ",
        [sym_filename] = "filename",
        [anon_sym_DOT] = ".",
        [anon_sym_] = " ",
        [sym__meta_block_content] = "_meta_block_content",
        [anon_sym_COLON] = ":",
        [anon_sym_DOLLAR] = "$",
        [aux_sym_math_environment_body_token1] = "math_environment_body_token1",
        [aux_sym_short_inner_environment_type_token1] = "short_inner_environment_type_token1",
        [sym_short_inner_environment_body] = "short_inner_environment_body",
        [anon_sym_DQUOTE] = "\"",
        [anon_sym_AT] = "@",
        [anon_sym_POUND] = "#",
        [aux_sym_verbose_inner_environment_hash_end_token1] = "verbose_inner_environment_hash_end_token1",
        [anon_sym_BANG] = "!",
        [sym_outer_environment_type] = "outer_environment_type",
        [sym__letter] = "_letter",
        [sym__uppercase_letter] = "_uppercase_letter",
        [sym__lowercase_letter] = "_lowercase_letter",
        [anon_sym_LF] = "\n",
        [anon_sym_CR_LF] = "\r\n",
        [sym__inn_env_type_char] = "_inn_env_type_char",
        [sym__text_no_space_no_dot] = "_text_no_space_no_dot",
        [sym_text] = "text",
        [sym_fragile_outer_environment_body] = "fragile_outer_environment_body",
        [sym__comment] = "_comment",
        [sym_verbose_inner_environment_meta] = "verbose_inner_environment_meta",
        [sym__ex_indent] = "_ex_indent",
        [sym__ex_dedent] = "_ex_dedent",
        [sym__ex_newline] = "_ex_newline",
        [sym__ex_empty_line] = "_ex_empty_line",
        [sym__ex_multi_empty_line] = "_ex_multi_empty_line",
        [sym_error_sentinel] = "error_sentinel",
        [sym_source_file] = "source_file",
        [sym_include] = "include",
        [sym_document_part] = "document_part",
        [sym_document_part_type] = "document_part_type",
        [sym_document_part_title] = "document_part_title",
        [sym_meta_block] = "meta_block",
        [sym_document_part_body] = "document_part_body",
        [sym__document_part_content] = "_document_part_content",
        [sym_wobject] = "wobject",
        [sym_wobject_type] = "wobject_type",
        [sym__wobject_body] = "_wobject_body",
        [sym_block] = "block",
        [sym_text_block] = "text_block",
        [aux_sym__text_line] = "_text_line",
        [sym_math_environment] = "math_environment",
        [sym_math_environment_body] = "math_environment_body",
        [sym__inner_environment] = "_inner_environment",
        [sym_short_inner_environment] = "short_inner_environment",
        [sym_short_inner_environment_type] = "short_inner_environment_type",
        [sym_verbose_inner_environment_body] = "verbose_inner_environment_body",
        [sym_verbose_inner_environment] = "verbose_inner_environment",
        [sym_verbose_inner_environment_classic] = "verbose_inner_environment_classic",
        [sym_verbose_inner_environment_at] = "verbose_inner_environment_at",
        [sym_verbose_inner_environment_hash] = "verbose_inner_environment_hash",
        [sym__verbose_inner_environment_end] = "_verbose_inner_environment_end",
        [sym_verbose_inner_environment_hash_end] = "verbose_inner_environment_hash_end",
        [sym_verbose_inner_environment_at_end] = "verbose_inner_environment_at_end",
        [sym_verbose_inner_environment_type] = "verbose_inner_environment_type",
        [sym__outer_environment] = "_outer_environment",
        [sym__explicit_outer_environment] = "_explicit_outer_environment",
        [sym_fragile_outer_environment] = "fragile_outer_environment",
        [sym_classic_outer_environment] = "classic_outer_environment",
        [sym_implicit_outer_environment] = "implicit_outer_environment",
        [sym__newline_char] = "_newline_char",
        [sym__document_part_type_char] = "_document_part_type_char",
        [aux_sym_source_file_repeat1] = "source_file_repeat1",
        [aux_sym_source_file_repeat2] = "source_file_repeat2",
        [aux_sym_document_part_type_repeat1] = "document_part_type_repeat1",
        [aux_sym_meta_block_repeat1] = "meta_block_repeat1",
        [aux_sym_document_part_body_repeat1] = "document_part_body_repeat1",
        [aux_sym_wobject_type_repeat1] = "wobject_type_repeat1",
        [aux_sym__wobject_body_repeat1] = "_wobject_body_repeat1",
        [aux_sym_block_repeat1] = "block_repeat1",
        [aux_sym_text_block_repeat1] = "text_block_repeat1",
        [aux_sym_math_environment_body_repeat1] = "math_environment_body_repeat1",
        [aux_sym__newline_char_repeat1] = "_newline_char_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
        [ts_builtin_sym_end] = ts_builtin_sym_end,
        [anon_sym_DOTinclude] = anon_sym_DOTinclude,
        [sym_filename] = sym_filename,
        [anon_sym_DOT] = anon_sym_DOT,
        [anon_sym_] = anon_sym_,
        [sym__meta_block_content] = sym__meta_block_content,
        [anon_sym_COLON] = anon_sym_COLON,
        [anon_sym_DOLLAR] = anon_sym_DOLLAR,
        [aux_sym_math_environment_body_token1] = aux_sym_math_environment_body_token1,
        [aux_sym_short_inner_environment_type_token1] = aux_sym_short_inner_environment_type_token1,
        [sym_short_inner_environment_body] = sym_short_inner_environment_body,
        [anon_sym_DQUOTE] = anon_sym_DQUOTE,
        [anon_sym_AT] = anon_sym_AT,
        [anon_sym_POUND] = anon_sym_POUND,
        [aux_sym_verbose_inner_environment_hash_end_token1] = aux_sym_verbose_inner_environment_hash_end_token1,
        [anon_sym_BANG] = anon_sym_BANG,
        [sym_outer_environment_type] = sym_outer_environment_type,
        [sym__letter] = sym__letter,
        [sym__uppercase_letter] = sym__uppercase_letter,
        [sym__lowercase_letter] = sym__lowercase_letter,
        [anon_sym_LF] = anon_sym_LF,
        [anon_sym_CR_LF] = anon_sym_CR_LF,
        [sym__inn_env_type_char] = sym__inn_env_type_char,
        [sym__text_no_space_no_dot] = sym__text_no_space_no_dot,
        [sym_text] = sym_text,
        [sym_fragile_outer_environment_body] = sym_fragile_outer_environment_body,
        [sym__comment] = sym__comment,
        [sym_verbose_inner_environment_meta] = sym_verbose_inner_environment_meta,
        [sym__ex_indent] = sym__ex_indent,
        [sym__ex_dedent] = sym__ex_dedent,
        [sym__ex_newline] = sym__ex_newline,
        [sym__ex_empty_line] = sym__ex_empty_line,
        [sym__ex_multi_empty_line] = sym__ex_multi_empty_line,
        [sym_error_sentinel] = sym_error_sentinel,
        [sym_source_file] = sym_source_file,
        [sym_include] = sym_include,
        [sym_document_part] = sym_document_part,
        [sym_document_part_type] = sym_document_part_type,
        [sym_document_part_title] = sym_document_part_title,
        [sym_meta_block] = sym_meta_block,
        [sym_document_part_body] = sym_document_part_body,
        [sym__document_part_content] = sym__document_part_content,
        [sym_wobject] = sym_wobject,
        [sym_wobject_type] = sym_wobject_type,
        [sym__wobject_body] = sym__wobject_body,
        [sym_block] = sym_block,
        [sym_text_block] = sym_text_block,
        [aux_sym__text_line] = aux_sym__text_line,
        [sym_math_environment] = sym_math_environment,
        [sym_math_environment_body] = sym_math_environment_body,
        [sym__inner_environment] = sym__inner_environment,
        [sym_short_inner_environment] = sym_short_inner_environment,
        [sym_short_inner_environment_type] = sym_short_inner_environment_type,
        [sym_verbose_inner_environment_body] = sym_verbose_inner_environment_body,
        [sym_verbose_inner_environment] = sym_verbose_inner_environment,
        [sym_verbose_inner_environment_classic] = sym_verbose_inner_environment_classic,
        [sym_verbose_inner_environment_at] = sym_verbose_inner_environment_at,
        [sym_verbose_inner_environment_hash] = sym_verbose_inner_environment_hash,
        [sym__verbose_inner_environment_end] = sym__verbose_inner_environment_end,
        [sym_verbose_inner_environment_hash_end] = sym_verbose_inner_environment_hash_end,
        [sym_verbose_inner_environment_at_end] = sym_verbose_inner_environment_at_end,
        [sym_verbose_inner_environment_type] = sym_verbose_inner_environment_type,
        [sym__outer_environment] = sym__outer_environment,
        [sym__explicit_outer_environment] = sym__explicit_outer_environment,
        [sym_fragile_outer_environment] = sym_fragile_outer_environment,
        [sym_classic_outer_environment] = sym_classic_outer_environment,
        [sym_implicit_outer_environment] = sym_implicit_outer_environment,
        [sym__newline_char] = sym__newline_char,
        [sym__document_part_type_char] = sym__document_part_type_char,
        [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
        [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
        [aux_sym_document_part_type_repeat1] = aux_sym_document_part_type_repeat1,
        [aux_sym_meta_block_repeat1] = aux_sym_meta_block_repeat1,
        [aux_sym_document_part_body_repeat1] = aux_sym_document_part_body_repeat1,
        [aux_sym_wobject_type_repeat1] = aux_sym_wobject_type_repeat1,
        [aux_sym__wobject_body_repeat1] = aux_sym__wobject_body_repeat1,
        [aux_sym_block_repeat1] = aux_sym_block_repeat1,
        [aux_sym_text_block_repeat1] = aux_sym_text_block_repeat1,
        [aux_sym_math_environment_body_repeat1] = aux_sym_math_environment_body_repeat1,
        [aux_sym__newline_char_repeat1] = aux_sym__newline_char_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
        [ts_builtin_sym_end] = {
                .visible = false,
                .named = true,
        },
        [anon_sym_DOTinclude] = {
                .visible = true,
                .named = false,
        },
        [sym_filename] = {
                .visible = true,
                .named = true,
        },
        [anon_sym_DOT] = {
                .visible = true,
                .named = false,
        },
        [anon_sym_] = {
                .visible = true,
                .named = false,
        },
        [sym__meta_block_content] = {
                .visible = false,
                .named = true,
        },
        [anon_sym_COLON] = {
                .visible = true,
                .named = false,
        },
        [anon_sym_DOLLAR] = {
                .visible = true,
                .named = false,
        },
        [aux_sym_math_environment_body_token1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_short_inner_environment_type_token1] = {
                .visible = false,
                .named = false,
        },
        [sym_short_inner_environment_body] = {
                .visible = true,
                .named = true,
        },
        [anon_sym_DQUOTE] = {
                .visible = true,
                .named = false,
        },
        [anon_sym_AT] = {
                .visible = true,
                .named = false,
        },
        [anon_sym_POUND] = {
                .visible = true,
                .named = false,
        },
        [aux_sym_verbose_inner_environment_hash_end_token1] = {
                .visible = false,
                .named = false,
        },
        [anon_sym_BANG] = {
                .visible = true,
                .named = false,
        },
        [sym_outer_environment_type] = {
                .visible = true,
                .named = true,
        },
        [sym__letter] = {
                .visible = false,
                .named = true,
        },
        [sym__uppercase_letter] = {
                .visible = false,
                .named = true,
        },
        [sym__lowercase_letter] = {
                .visible = false,
                .named = true,
        },
        [anon_sym_LF] = {
                .visible = true,
                .named = false,
        },
        [anon_sym_CR_LF] = {
                .visible = true,
                .named = false,
        },
        [sym__inn_env_type_char] = {
                .visible = false,
                .named = true,
        },
        [sym__text_no_space_no_dot] = {
                .visible = false,
                .named = true,
        },
        [sym_text] = {
                .visible = true,
                .named = true,
        },
        [sym_fragile_outer_environment_body] = {
                .visible = true,
                .named = true,
        },
        [sym__comment] = {
                .visible = false,
                .named = true,
        },
        [sym_verbose_inner_environment_meta] = {
                .visible = true,
                .named = true,
        },
        [sym__ex_indent] = {
                .visible = false,
                .named = true,
        },
        [sym__ex_dedent] = {
                .visible = false,
                .named = true,
        },
        [sym__ex_newline] = {
                .visible = false,
                .named = true,
        },
        [sym__ex_empty_line] = {
                .visible = false,
                .named = true,
        },
        [sym__ex_multi_empty_line] = {
                .visible = false,
                .named = true,
        },
        [sym_error_sentinel] = {
                .visible = true,
                .named = true,
        },
        [sym_source_file] = {
                .visible = true,
                .named = true,
        },
        [sym_include] = {
                .visible = true,
                .named = true,
        },
        [sym_document_part] = {
                .visible = true,
                .named = true,
        },
        [sym_document_part_type] = {
                .visible = true,
                .named = true,
        },
        [sym_document_part_title] = {
                .visible = true,
                .named = true,
        },
        [sym_meta_block] = {
                .visible = true,
                .named = true,
        },
        [sym_document_part_body] = {
                .visible = true,
                .named = true,
        },
        [sym__document_part_content] = {
                .visible = false,
                .named = true,
        },
        [sym_wobject] = {
                .visible = true,
                .named = true,
        },
        [sym_wobject_type] = {
                .visible = true,
                .named = true,
        },
        [sym__wobject_body] = {
                .visible = false,
                .named = true,
        },
        [sym_block] = {
                .visible = true,
                .named = true,
        },
        [sym_text_block] = {
                .visible = true,
                .named = true,
        },
        [aux_sym__text_line] = {
                .visible = false,
                .named = false,
        },
        [sym_math_environment] = {
                .visible = true,
                .named = true,
        },
        [sym_math_environment_body] = {
                .visible = true,
                .named = true,
        },
        [sym__inner_environment] = {
                .visible = false,
                .named = true,
        },
        [sym_short_inner_environment] = {
                .visible = true,
                .named = true,
        },
        [sym_short_inner_environment_type] = {
                .visible = true,
                .named = true,
        },
        [sym_verbose_inner_environment_body] = {
                .visible = true,
                .named = true,
        },
        [sym_verbose_inner_environment] = {
                .visible = true,
                .named = true,
        },
        [sym_verbose_inner_environment_classic] = {
                .visible = true,
                .named = true,
        },
        [sym_verbose_inner_environment_at] = {
                .visible = true,
                .named = true,
        },
        [sym_verbose_inner_environment_hash] = {
                .visible = true,
                .named = true,
        },
        [sym__verbose_inner_environment_end] = {
                .visible = false,
                .named = true,
        },
        [sym_verbose_inner_environment_hash_end] = {
                .visible = true,
                .named = true,
        },
        [sym_verbose_inner_environment_at_end] = {
                .visible = true,
                .named = true,
        },
        [sym_verbose_inner_environment_type] = {
                .visible = true,
                .named = true,
        },
        [sym__outer_environment] = {
                .visible = false,
                .named = true,
        },
        [sym__explicit_outer_environment] = {
                .visible = false,
                .named = true,
        },
        [sym_fragile_outer_environment] = {
                .visible = true,
                .named = true,
        },
        [sym_classic_outer_environment] = {
                .visible = true,
                .named = true,
        },
        [sym_implicit_outer_environment] = {
                .visible = true,
                .named = true,
        },
        [sym__newline_char] = {
                .visible = false,
                .named = true,
        },
        [sym__document_part_type_char] = {
                .visible = false,
                .named = true,
        },
        [aux_sym_source_file_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_source_file_repeat2] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_document_part_type_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_meta_block_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_document_part_body_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_wobject_type_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym__wobject_body_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_block_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_text_block_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym_math_environment_body_repeat1] = {
                .visible = false,
                .named = false,
        },
        [aux_sym__newline_char_repeat1] = {
                .visible = false,
                .named = false,
        },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
        [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
        0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
        [0] = 0,
        [1] = 1,
        [2] = 2,
        [3] = 3,
        [4] = 4,
        [5] = 5,
        [6] = 6,
        [7] = 7,
        [8] = 7,
        [9] = 6,
        [10] = 7,
        [11] = 6,
        [12] = 12,
        [13] = 13,
        [14] = 14,
        [15] = 15,
        [16] = 4,
        [17] = 14,
        [18] = 18,
        [19] = 19,
        [20] = 4,
        [21] = 13,
        [22] = 22,
        [23] = 14,
        [24] = 22,
        [25] = 22,
        [26] = 14,
        [27] = 19,
        [28] = 13,
        [29] = 15,
        [30] = 19,
        [31] = 15,
        [32] = 32,
        [33] = 14,
        [34] = 34,
        [35] = 13,
        [36] = 34,
        [37] = 34,
        [38] = 34,
        [39] = 39,
        [40] = 40,
        [41] = 34,
        [42] = 42,
        [43] = 43,
        [44] = 44,
        [45] = 39,
        [46] = 46,
        [47] = 47,
        [48] = 47,
        [49] = 49,
        [50] = 50,
        [51] = 40,
        [52] = 52,
        [53] = 53,
        [54] = 54,
        [55] = 47,
        [56] = 56,
        [57] = 47,
        [58] = 52,
        [59] = 44,
        [60] = 46,
        [61] = 50,
        [62] = 53,
        [63] = 56,
        [64] = 49,
        [65] = 54,
        [66] = 43,
        [67] = 40,
        [68] = 68,
        [69] = 39,
        [70] = 70,
        [71] = 71,
        [72] = 72,
        [73] = 73,
        [74] = 44,
        [75] = 52,
        [76] = 76,
        [77] = 77,
        [78] = 46,
        [79] = 39,
        [80] = 50,
        [81] = 43,
        [82] = 53,
        [83] = 83,
        [84] = 40,
        [85] = 56,
        [86] = 54,
        [87] = 49,
        [88] = 88,
        [89] = 89,
        [90] = 54,
        [91] = 56,
        [92] = 44,
        [93] = 52,
        [94] = 53,
        [95] = 46,
        [96] = 43,
        [97] = 49,
        [98] = 50,
        [99] = 99,
        [100] = 100,
        [101] = 101,
        [102] = 102,
        [103] = 100,
        [104] = 104,
        [105] = 105,
        [106] = 102,
        [107] = 107,
        [108] = 108,
        [109] = 109,
        [110] = 110,
        [111] = 72,
        [112] = 112,
        [113] = 100,
        [114] = 114,
        [115] = 115,
        [116] = 116,
        [117] = 102,
        [118] = 118,
        [119] = 119,
        [120] = 120,
        [121] = 121,
        [122] = 122,
        [123] = 123,
        [124] = 124,
        [125] = 77,
        [126] = 76,
        [127] = 112,
        [128] = 40,
        [129] = 129,
        [130] = 83,
        [131] = 131,
        [132] = 132,
        [133] = 88,
        [134] = 134,
        [135] = 135,
        [136] = 72,
        [137] = 39,
        [138] = 138,
        [139] = 77,
        [140] = 140,
        [141] = 43,
        [142] = 88,
        [143] = 52,
        [144] = 76,
        [145] = 46,
        [146] = 53,
        [147] = 44,
        [148] = 56,
        [149] = 149,
        [150] = 150,
        [151] = 50,
        [152] = 49,
        [153] = 83,
        [154] = 154,
        [155] = 54,
        [156] = 156,
        [157] = 107,
        [158] = 158,
        [159] = 159,
        [160] = 160,
        [161] = 161,
        [162] = 112,
        [163] = 163,
        [164] = 163,
        [165] = 158,
        [166] = 158,
        [167] = 158,
        [168] = 163,
        [169] = 158,
        [170] = 120,
        [171] = 105,
        [172] = 110,
        [173] = 173,
        [174] = 122,
        [175] = 129,
        [176] = 108,
        [177] = 177,
        [178] = 178,
        [179] = 110,
        [180] = 180,
        [181] = 181,
        [182] = 178,
        [183] = 183,
        [184] = 178,
        [185] = 185,
        [186] = 186,
        [187] = 187,
        [188] = 188,
        [189] = 108,
        [190] = 188,
        [191] = 112,
        [192] = 83,
        [193] = 178,
        [194] = 194,
        [195] = 178,
        [196] = 188,
        [197] = 197,
        [198] = 185,
        [199] = 199,
        [200] = 200,
        [201] = 188,
        [202] = 202,
        [203] = 105,
        [204] = 185,
        [205] = 205,
        [206] = 206,
        [207] = 207,
        [208] = 188,
        [209] = 209,
        [210] = 210,
        [211] = 107,
        [212] = 120,
        [213] = 122,
        [214] = 214,
        [215] = 215,
        [216] = 216,
        [217] = 217,
        [218] = 218,
        [219] = 219,
        [220] = 218,
        [221] = 218,
        [222] = 218,
        [223] = 223,
        [224] = 224,
        [225] = 218,
        [226] = 226,
        [227] = 226,
        [228] = 226,
        [229] = 226,
        [230] = 224,
        [231] = 214,
        [232] = 226,
        [233] = 223,
        [234] = 224,
        [235] = 223,
        [236] = 214,
        [237] = 224,
        [238] = 214,
        [239] = 239,
        [240] = 224,
        [241] = 214,
        [242] = 223,
        [243] = 223,
        [244] = 244,
        [245] = 245,
        [246] = 246,
        [247] = 247,
        [248] = 248,
        [249] = 249,
        [250] = 250,
        [251] = 250,
        [252] = 247,
        [253] = 253,
        [254] = 254,
        [255] = 253,
        [256] = 256,
        [257] = 253,
        [258] = 247,
        [259] = 250,
        [260] = 245,
        [261] = 261,
        [262] = 245,
        [263] = 129,
        [264] = 254,
        [265] = 265,
        [266] = 266,
        [267] = 267,
        [268] = 261,
        [269] = 245,
        [270] = 248,
        [271] = 271,
        [272] = 250,
        [273] = 266,
        [274] = 271,
        [275] = 112,
        [276] = 276,
        [277] = 249,
        [278] = 278,
        [279] = 261,
        [280] = 245,
        [281] = 250,
        [282] = 254,
        [283] = 261,
        [284] = 266,
        [285] = 244,
        [286] = 276,
        [287] = 253,
        [288] = 249,
        [289] = 289,
        [290] = 244,
        [291] = 276,
        [292] = 247,
        [293] = 248,
        [294] = 294,
        [295] = 295,
        [296] = 261,
        [297] = 297,
        [298] = 247,
        [299] = 299,
        [300] = 265,
        [301] = 253,
        [302] = 265,
        [303] = 271,
        [304] = 246,
        [305] = 246,
};

static inline bool sym_short_inner_environment_body_character_set_1(int32_t c) {
    return (c < 7736
            ? (c < 931
               ? (c < 425
                  ? (c < 330
                     ? (c < 290
                        ? (c < 270
                           ? (c < 260
                              ? (c < 256
                                 ? (c < 216
                                    ? (c >= 192 && c <= 214)
                                    : c <= 222)
                                 : (c <= 256 || c == 258))
                              : (c <= 260 || (c < 266
                                              ? (c < 264
                                                 ? c == 262
                                                 : c <= 264)
                                              : (c <= 266 || c == 268))))
                           : (c <= 270 || (c < 280
                                           ? (c < 276
                                              ? (c < 274
                                                 ? c == 272
                                                 : c <= 274)
                                              : (c <= 276 || c == 278))
                                           : (c <= 280 || (c < 286
                                                           ? (c < 284
                                                              ? c == 282
                                                              : c <= 284)
                                                           : (c <= 286 || c == 288))))))
                        : (c <= 290 || (c < 310
                                        ? (c < 300
                                           ? (c < 296
                                              ? (c < 294
                                                 ? c == 292
                                                 : c <= 294)
                                              : (c <= 296 || c == 298))
                                           : (c <= 300 || (c < 306
                                                           ? (c < 304
                                                              ? c == 302
                                                              : c <= 304)
                                                           : (c <= 306 || c == 308))))
                                        : (c <= 310 || (c < 321
                                                        ? (c < 317
                                                           ? (c < 315
                                                              ? c == 313
                                                              : c <= 315)
                                                           : (c <= 317 || c == 319))
                                                        : (c <= 321 || (c < 325
                                                                        ? c == 323
                                                                        : (c <= 325 || c == 327))))))))
                     : (c <= 330 || (c < 368
                                     ? (c < 350
                                        ? (c < 340
                                           ? (c < 336
                                              ? (c < 334
                                                 ? c == 332
                                                 : c <= 334)
                                              : (c <= 336 || c == 338))
                                           : (c <= 340 || (c < 346
                                                           ? (c < 344
                                                              ? c == 342
                                                              : c <= 344)
                                                           : (c <= 346 || c == 348))))
                                        : (c <= 350 || (c < 360
                                                        ? (c < 356
                                                           ? (c < 354
                                                              ? c == 352
                                                              : c <= 354)
                                                           : (c <= 356 || c == 358))
                                                        : (c <= 360 || (c < 364
                                                                        ? c == 362
                                                                        : (c <= 364 || c == 366))))))
                                     : (c <= 368 || (c < 393
                                                     ? (c < 379
                                                        ? (c < 374
                                                           ? (c < 372
                                                              ? c == 370
                                                              : c <= 372)
                                                           : (c <= 374 || (c >= 376 && c <= 377)))
                                                        : (c <= 379 || (c < 388
                                                                        ? (c < 385
                                                                           ? c == 381
                                                                           : c <= 386)
                                                                        : (c <= 388 || (c >= 390 && c <= 391)))))
                                                     : (c <= 395 || (c < 415
                                                                     ? (c < 406
                                                                        ? (c < 403
                                                                           ? (c >= 398 && c <= 401)
                                                                           : c <= 404)
                                                                        : (c <= 408 || (c >= 412 && c <= 413)))
                                                                     : (c <= 416 || (c < 420
                                                                                     ? c == 418
                                                                                     : (c <= 420 || (c >= 422 && c <= 423)))))))))))
                  : (c <= 425 || (c < 522
                                  ? (c < 480
                                     ? (c < 461
                                        ? (c < 439
                                           ? (c < 433
                                              ? (c < 430
                                                 ? c == 428
                                                 : c <= 431)
                                              : (c <= 435 || c == 437))
                                           : (c <= 440 || (c < 455
                                                           ? (c < 452
                                                              ? c == 444
                                                              : c <= 452)
                                                           : (c <= 455 || c == 458))))
                                        : (c <= 461 || (c < 471
                                                        ? (c < 467
                                                           ? (c < 465
                                                              ? c == 463
                                                              : c <= 465)
                                                           : (c <= 467 || c == 469))
                                                        : (c <= 471 || (c < 475
                                                                        ? c == 473
                                                                        : (c <= 475 || c == 478))))))
                                     : (c <= 480 || (c < 502
                                                     ? (c < 490
                                                        ? (c < 486
                                                           ? (c < 484
                                                              ? c == 482
                                                              : c <= 484)
                                                           : (c <= 486 || c == 488))
                                                        : (c <= 490 || (c < 497
                                                                        ? (c < 494
                                                                           ? c == 492
                                                                           : c <= 494)
                                                                        : (c <= 497 || c == 500))))
                                                     : (c <= 504 || (c < 514
                                                                     ? (c < 510
                                                                        ? (c < 508
                                                                           ? c == 506
                                                                           : c <= 508)
                                                                        : (c <= 510 || c == 512))
                                                                     : (c <= 514 || (c < 518
                                                                                     ? c == 516
                                                                                     : (c <= 518 || c == 520))))))))
                                  : (c <= 522 || (c < 560
                                                  ? (c < 542
                                                     ? (c < 532
                                                        ? (c < 528
                                                           ? (c < 526
                                                              ? c == 524
                                                              : c <= 526)
                                                           : (c <= 528 || c == 530))
                                                        : (c <= 532 || (c < 538
                                                                        ? (c < 536
                                                                           ? c == 534
                                                                           : c <= 536)
                                                                        : (c <= 538 || c == 540))))
                                                     : (c <= 542 || (c < 552
                                                                     ? (c < 548
                                                                        ? (c < 546
                                                                           ? c == 544
                                                                           : c <= 546)
                                                                        : (c <= 548 || c == 550))
                                                                     : (c <= 552 || (c < 556
                                                                                     ? c == 554
                                                                                     : (c <= 556 || c == 558))))))
                                                  : (c <= 560 || (c < 880
                                                                  ? (c < 579
                                                                     ? (c < 573
                                                                        ? (c < 570
                                                                           ? c == 562
                                                                           : c <= 571)
                                                                        : (c <= 574 || c == 577))
                                                                     : (c <= 582 || (c < 588
                                                                                     ? (c < 586
                                                                                        ? c == 584
                                                                                        : c <= 586)
                                                                                     : (c <= 588 || c == 590))))
                                                                  : (c <= 880 || (c < 904
                                                                                  ? (c < 895
                                                                                     ? (c < 886
                                                                                        ? c == 882
                                                                                        : c <= 886)
                                                                                     : (c <= 895 || c == 902))
                                                                                  : (c <= 906 || (c < 910
                                                                                                  ? c == 908
                                                                                                  : (c <= 911 || (c >= 913 && c <= 929)))))))))))))
               : (c <= 939 || (c < 1246
                               ? (c < 1168
                                  ? (c < 1122
                                     ? (c < 998
                                        ? (c < 988
                                           ? (c < 984
                                              ? (c < 978
                                                 ? c == 975
                                                 : c <= 980)
                                              : (c <= 984 || c == 986))
                                           : (c <= 988 || (c < 994
                                                           ? (c < 992
                                                              ? c == 990
                                                              : c <= 992)
                                                           : (c <= 994 || c == 996))))
                                        : (c <= 998 || (c < 1012
                                                        ? (c < 1004
                                                           ? (c < 1002
                                                              ? c == 1000
                                                              : c <= 1002)
                                                           : (c <= 1004 || c == 1006))
                                                        : (c <= 1012 || (c < 1021
                                                                         ? (c < 1017
                                                                            ? c == 1015
                                                                            : c <= 1018)
                                                                         : (c <= 1071 || c == 1120))))))
                                     : (c <= 1122 || (c < 1142
                                                      ? (c < 1132
                                                         ? (c < 1128
                                                            ? (c < 1126
                                                               ? c == 1124
                                                               : c <= 1126)
                                                            : (c <= 1128 || c == 1130))
                                                         : (c <= 1132 || (c < 1138
                                                                          ? (c < 1136
                                                                             ? c == 1134
                                                                             : c <= 1136)
                                                                          : (c <= 1138 || c == 1140))))
                                                      : (c <= 1142 || (c < 1152
                                                                       ? (c < 1148
                                                                          ? (c < 1146
                                                                             ? c == 1144
                                                                             : c <= 1146)
                                                                          : (c <= 1148 || c == 1150))
                                                                       : (c <= 1152 || (c < 1164
                                                                                        ? c == 1162
                                                                                        : (c <= 1164 || c == 1166))))))))
                                  : (c <= 1168 || (c < 1206
                                                   ? (c < 1188
                                                      ? (c < 1178
                                                         ? (c < 1174
                                                            ? (c < 1172
                                                               ? c == 1170
                                                               : c <= 1172)
                                                            : (c <= 1174 || c == 1176))
                                                         : (c <= 1178 || (c < 1184
                                                                          ? (c < 1182
                                                                             ? c == 1180
                                                                             : c <= 1182)
                                                                          : (c <= 1184 || c == 1186))))
                                                      : (c <= 1188 || (c < 1198
                                                                       ? (c < 1194
                                                                          ? (c < 1192
                                                                             ? c == 1190
                                                                             : c <= 1192)
                                                                          : (c <= 1194 || c == 1196))
                                                                       : (c <= 1198 || (c < 1202
                                                                                        ? c == 1200
                                                                                        : (c <= 1202 || c == 1204))))))
                                                   : (c <= 1206 || (c < 1227
                                                                    ? (c < 1216
                                                                       ? (c < 1212
                                                                          ? (c < 1210
                                                                             ? c == 1208
                                                                             : c <= 1210)
                                                                          : (c <= 1212 || c == 1214))
                                                                       : (c <= 1217 || (c < 1223
                                                                                        ? (c < 1221
                                                                                           ? c == 1219
                                                                                           : c <= 1221)
                                                                                        : (c <= 1223 || c == 1225))))
                                                                    : (c <= 1227 || (c < 1238
                                                                                     ? (c < 1234
                                                                                        ? (c < 1232
                                                                                           ? c == 1229
                                                                                           : c <= 1232)
                                                                                        : (c <= 1234 || c == 1236))
                                                                                     : (c <= 1238 || (c < 1242
                                                                                                      ? c == 1240
                                                                                                      : (c <= 1242 || c == 1244))))))))))
                               : (c <= 1246 || (c < 1322
                                                ? (c < 1284
                                                   ? (c < 1266
                                                      ? (c < 1256
                                                         ? (c < 1252
                                                            ? (c < 1250
                                                               ? c == 1248
                                                               : c <= 1250)
                                                            : (c <= 1252 || c == 1254))
                                                         : (c <= 1256 || (c < 1262
                                                                          ? (c < 1260
                                                                             ? c == 1258
                                                                             : c <= 1260)
                                                                          : (c <= 1262 || c == 1264))))
                                                      : (c <= 1266 || (c < 1276
                                                                       ? (c < 1272
                                                                          ? (c < 1270
                                                                             ? c == 1268
                                                                             : c <= 1270)
                                                                          : (c <= 1272 || c == 1274))
                                                                       : (c <= 1276 || (c < 1280
                                                                                        ? c == 1278
                                                                                        : (c <= 1280 || c == 1282))))))
                                                   : (c <= 1284 || (c < 1304
                                                                    ? (c < 1294
                                                                       ? (c < 1290
                                                                          ? (c < 1288
                                                                             ? c == 1286
                                                                             : c <= 1288)
                                                                          : (c <= 1290 || c == 1292))
                                                                       : (c <= 1294 || (c < 1300
                                                                                        ? (c < 1298
                                                                                           ? c == 1296
                                                                                           : c <= 1298)
                                                                                        : (c <= 1300 || c == 1302))))
                                                                    : (c <= 1304 || (c < 1314
                                                                                     ? (c < 1310
                                                                                        ? (c < 1308
                                                                                           ? c == 1306
                                                                                           : c <= 1308)
                                                                                        : (c <= 1310 || c == 1312))
                                                                                     : (c <= 1314 || (c < 1318
                                                                                                      ? c == 1316
                                                                                                      : (c <= 1318 || c == 1320))))))))
                                                : (c <= 1322 || (c < 7698
                                                                 ? (c < 7680
                                                                    ? (c < 4295
                                                                       ? (c < 1329
                                                                          ? (c < 1326
                                                                             ? c == 1324
                                                                             : c <= 1326)
                                                                          : (c <= 1366 || (c >= 4256 && c <= 4293)))
                                                                       : (c <= 4295 || (c < 7312
                                                                                        ? (c < 5024
                                                                                           ? c == 4301
                                                                                           : c <= 5109)
                                                                                        : (c <= 7354 || (c >= 7357 && c <= 7359)))))
                                                                    : (c <= 7680 || (c < 7690
                                                                                     ? (c < 7686
                                                                                        ? (c < 7684
                                                                                           ? c == 7682
                                                                                           : c <= 7684)
                                                                                        : (c <= 7686 || c == 7688))
                                                                                     : (c <= 7690 || (c < 7694
                                                                                                      ? c == 7692
                                                                                                      : (c <= 7694 || c == 7696))))))
                                                                 : (c <= 7698 || (c < 7718
                                                                                  ? (c < 7708
                                                                                     ? (c < 7704
                                                                                        ? (c < 7702
                                                                                           ? c == 7700
                                                                                           : c <= 7702)
                                                                                        : (c <= 7704 || c == 7706))
                                                                                     : (c <= 7708 || (c < 7714
                                                                                                      ? (c < 7712
                                                                                                         ? c == 7710
                                                                                                         : c <= 7712)
                                                                                                      : (c <= 7714 || c == 7716))))
                                                                                  : (c <= 7718 || (c < 7728
                                                                                                   ? (c < 7724
                                                                                                      ? (c < 7722
                                                                                                         ? c == 7720
                                                                                                         : c <= 7722)
                                                                                                      : (c <= 7724 || c == 7726))
                                                                                                   : (c <= 7728 || (c < 7732
                                                                                                                    ? c == 7730
                                                                                                                    : (c <= 7732 || c == 7734))))))))))))))
            : (c <= 7736 || (c < 11430
                             ? (c < 7898
                                ? (c < 7814
                                   ? (c < 7776
                                      ? (c < 7756
                                         ? (c < 7746
                                            ? (c < 7742
                                               ? (c < 7740
                                                  ? c == 7738
                                                  : c <= 7740)
                                               : (c <= 7742 || c == 7744))
                                            : (c <= 7746 || (c < 7752
                                                             ? (c < 7750
                                                                ? c == 7748
                                                                : c <= 7750)
                                                             : (c <= 7752 || c == 7754))))
                                         : (c <= 7756 || (c < 7766
                                                          ? (c < 7762
                                                             ? (c < 7760
                                                                ? c == 7758
                                                                : c <= 7760)
                                                             : (c <= 7762 || c == 7764))
                                                          : (c <= 7766 || (c < 7772
                                                                           ? (c < 7770
                                                                              ? c == 7768
                                                                              : c <= 7770)
                                                                           : (c <= 7772 || c == 7774))))))
                                      : (c <= 7776 || (c < 7796
                                                       ? (c < 7786
                                                          ? (c < 7782
                                                             ? (c < 7780
                                                                ? c == 7778
                                                                : c <= 7780)
                                                             : (c <= 7782 || c == 7784))
                                                          : (c <= 7786 || (c < 7792
                                                                           ? (c < 7790
                                                                              ? c == 7788
                                                                              : c <= 7790)
                                                                           : (c <= 7792 || c == 7794))))
                                                       : (c <= 7796 || (c < 7806
                                                                        ? (c < 7802
                                                                           ? (c < 7800
                                                                              ? c == 7798
                                                                              : c <= 7800)
                                                                           : (c <= 7802 || c == 7804))
                                                                        : (c <= 7806 || (c < 7810
                                                                                         ? c == 7808
                                                                                         : (c <= 7810 || c == 7812))))))))
                                   : (c <= 7814 || (c < 7860
                                                    ? (c < 7842
                                                       ? (c < 7824
                                                          ? (c < 7820
                                                             ? (c < 7818
                                                                ? c == 7816
                                                                : c <= 7818)
                                                             : (c <= 7820 || c == 7822))
                                                          : (c <= 7824 || (c < 7838
                                                                           ? (c < 7828
                                                                              ? c == 7826
                                                                              : c <= 7828)
                                                                           : (c <= 7838 || c == 7840))))
                                                       : (c <= 7842 || (c < 7852
                                                                        ? (c < 7848
                                                                           ? (c < 7846
                                                                              ? c == 7844
                                                                              : c <= 7846)
                                                                           : (c <= 7848 || c == 7850))
                                                                        : (c <= 7852 || (c < 7856
                                                                                         ? c == 7854
                                                                                         : (c <= 7856 || c == 7858))))))
                                                    : (c <= 7860 || (c < 7880
                                                                     ? (c < 7870
                                                                        ? (c < 7866
                                                                           ? (c < 7864
                                                                              ? c == 7862
                                                                              : c <= 7864)
                                                                           : (c <= 7866 || c == 7868))
                                                                        : (c <= 7870 || (c < 7876
                                                                                         ? (c < 7874
                                                                                            ? c == 7872
                                                                                            : c <= 7874)
                                                                                         : (c <= 7876 || c == 7878))))
                                                                     : (c <= 7880 || (c < 7890
                                                                                      ? (c < 7886
                                                                                         ? (c < 7884
                                                                                            ? c == 7882
                                                                                            : c <= 7884)
                                                                                         : (c <= 7886 || c == 7888))
                                                                                      : (c <= 7890 || (c < 7894
                                                                                                       ? c == 7892
                                                                                                       : (c <= 7894 || c == 7896))))))))))
                                : (c <= 7898 || (c < 8469
                                                 ? (c < 7944
                                                    ? (c < 7918
                                                       ? (c < 7908
                                                          ? (c < 7904
                                                             ? (c < 7902
                                                                ? c == 7900
                                                                : c <= 7902)
                                                             : (c <= 7904 || c == 7906))
                                                          : (c <= 7908 || (c < 7914
                                                                           ? (c < 7912
                                                                              ? c == 7910
                                                                              : c <= 7912)
                                                                           : (c <= 7914 || c == 7916))))
                                                       : (c <= 7918 || (c < 7928
                                                                        ? (c < 7924
                                                                           ? (c < 7922
                                                                              ? c == 7920
                                                                              : c <= 7922)
                                                                           : (c <= 7924 || c == 7926))
                                                                        : (c <= 7928 || (c < 7932
                                                                                         ? c == 7930
                                                                                         : (c <= 7932 || c == 7934))))))
                                                    : (c <= 7951 || (c < 8120
                                                                     ? (c < 8025
                                                                        ? (c < 7992
                                                                           ? (c < 7976
                                                                              ? (c >= 7960 && c <= 7965)
                                                                              : c <= 7983)
                                                                           : (c <= 7999 || (c >= 8008 && c <= 8013)))
                                                                        : (c <= 8025 || (c < 8031
                                                                                         ? (c < 8029
                                                                                            ? c == 8027
                                                                                            : c <= 8029)
                                                                                         : (c <= 8031 || (c >= 8040 && c <= 8047)))))
                                                                     : (c <= 8123 || (c < 8450
                                                                                      ? (c < 8168
                                                                                         ? (c < 8152
                                                                                            ? (c >= 8136 && c <= 8139)
                                                                                            : c <= 8155)
                                                                                         : (c <= 8172 || (c >= 8184 && c <= 8187)))
                                                                                      : (c <= 8450 || (c < 8459
                                                                                                       ? c == 8455
                                                                                                       : (c <= 8461 || (c >= 8464 && c <= 8466)))))))))
                                                 : (c <= 8469 || (c < 11390
                                                                  ? (c < 11264
                                                                     ? (c < 8490
                                                                        ? (c < 8486
                                                                           ? (c < 8484
                                                                              ? (c >= 8473 && c <= 8477)
                                                                              : c <= 8484)
                                                                           : (c <= 8486 || c == 8488))
                                                                        : (c <= 8493 || (c < 8517
                                                                                         ? (c < 8510
                                                                                            ? (c >= 8496 && c <= 8499)
                                                                                            : c <= 8511)
                                                                                         : (c <= 8517 || c == 8579))))
                                                                     : (c <= 11311 || (c < 11371
                                                                                       ? (c < 11367
                                                                                          ? (c < 11362
                                                                                             ? c == 11360
                                                                                             : c <= 11364)
                                                                                          : (c <= 11367 || c == 11369))
                                                                                       : (c <= 11371 || (c < 11378
                                                                                                         ? (c >= 11373 && c <= 11376)
                                                                                                         : (c <= 11378 || c == 11381))))))
                                                                  : (c <= 11392 || (c < 11412
                                                                                    ? (c < 11402
                                                                                       ? (c < 11398
                                                                                          ? (c < 11396
                                                                                             ? c == 11394
                                                                                             : c <= 11396)
                                                                                          : (c <= 11398 || c == 11400))
                                                                                       : (c <= 11402 || (c < 11408
                                                                                                         ? (c < 11406
                                                                                                            ? c == 11404
                                                                                                            : c <= 11406)
                                                                                                         : (c <= 11408 || c == 11410))))
                                                                                    : (c <= 11412 || (c < 11422
                                                                                                      ? (c < 11418
                                                                                                         ? (c < 11416
                                                                                                            ? c == 11414
                                                                                                            : c <= 11416)
                                                                                                         : (c <= 11418 || c == 11420))
                                                                                                      : (c <= 11422 || (c < 11426
                                                                                                                        ? c == 11424
                                                                                                                        : (c <= 11426 || c == 11428))))))))))))
                             : (c <= 11430 || (c < 42796
                                               ? (c < 42568
                                                  ? (c < 11468
                                                     ? (c < 11450
                                                        ? (c < 11440
                                                           ? (c < 11436
                                                              ? (c < 11434
                                                                 ? c == 11432
                                                                 : c <= 11434)
                                                              : (c <= 11436 || c == 11438))
                                                           : (c <= 11440 || (c < 11446
                                                                             ? (c < 11444
                                                                                ? c == 11442
                                                                                : c <= 11444)
                                                                             : (c <= 11446 || c == 11448))))
                                                        : (c <= 11450 || (c < 11460
                                                                          ? (c < 11456
                                                                             ? (c < 11454
                                                                                ? c == 11452
                                                                                : c <= 11454)
                                                                             : (c <= 11456 || c == 11458))
                                                                          : (c <= 11460 || (c < 11464
                                                                                            ? c == 11462
                                                                                            : (c <= 11464 || c == 11466))))))
                                                     : (c <= 11468 || (c < 11488
                                                                       ? (c < 11478
                                                                          ? (c < 11474
                                                                             ? (c < 11472
                                                                                ? c == 11470
                                                                                : c <= 11472)
                                                                             : (c <= 11474 || c == 11476))
                                                                          : (c <= 11478 || (c < 11484
                                                                                            ? (c < 11482
                                                                                               ? c == 11480
                                                                                               : c <= 11482)
                                                                                            : (c <= 11484 || c == 11486))))
                                                                       : (c <= 11488 || (c < 42560
                                                                                         ? (c < 11501
                                                                                            ? (c < 11499
                                                                                               ? c == 11490
                                                                                               : c <= 11499)
                                                                                            : (c <= 11501 || c == 11506))
                                                                                         : (c <= 42560 || (c < 42564
                                                                                                           ? c == 42562
                                                                                                           : (c <= 42564 || c == 42566))))))))
                                                  : (c <= 42568 || (c < 42624
                                                                    ? (c < 42588
                                                                       ? (c < 42578
                                                                          ? (c < 42574
                                                                             ? (c < 42572
                                                                                ? c == 42570
                                                                                : c <= 42572)
                                                                             : (c <= 42574 || c == 42576))
                                                                          : (c <= 42578 || (c < 42584
                                                                                            ? (c < 42582
                                                                                               ? c == 42580
                                                                                               : c <= 42582)
                                                                                            : (c <= 42584 || c == 42586))))
                                                                       : (c <= 42588 || (c < 42598
                                                                                         ? (c < 42594
                                                                                            ? (c < 42592
                                                                                               ? c == 42590
                                                                                               : c <= 42592)
                                                                                            : (c <= 42594 || c == 42596))
                                                                                         : (c <= 42598 || (c < 42602
                                                                                                           ? c == 42600
                                                                                                           : (c <= 42602 || c == 42604))))))
                                                                    : (c <= 42624 || (c < 42644
                                                                                      ? (c < 42634
                                                                                         ? (c < 42630
                                                                                            ? (c < 42628
                                                                                               ? c == 42626
                                                                                               : c <= 42628)
                                                                                            : (c <= 42630 || c == 42632))
                                                                                         : (c <= 42634 || (c < 42640
                                                                                                           ? (c < 42638
                                                                                                              ? c == 42636
                                                                                                              : c <= 42638)
                                                                                                           : (c <= 42640 || c == 42642))))
                                                                                      : (c <= 42644 || (c < 42788
                                                                                                        ? (c < 42650
                                                                                                           ? (c < 42648
                                                                                                              ? c == 42646
                                                                                                              : c <= 42648)
                                                                                                           : (c <= 42650 || c == 42786))
                                                                                                        : (c <= 42788 || (c < 42792
                                                                                                                          ? c == 42790
                                                                                                                          : (c <= 42792 || c == 42794))))))))))
                                               : (c <= 42796 || (c < 42884
                                                                 ? (c < 42836
                                                                    ? (c < 42818
                                                                       ? (c < 42808
                                                                          ? (c < 42804
                                                                             ? (c < 42802
                                                                                ? c == 42798
                                                                                : c <= 42802)
                                                                             : (c <= 42804 || c == 42806))
                                                                          : (c <= 42808 || (c < 42814
                                                                                            ? (c < 42812
                                                                                               ? c == 42810
                                                                                               : c <= 42812)
                                                                                            : (c <= 42814 || c == 42816))))
                                                                       : (c <= 42818 || (c < 42828
                                                                                         ? (c < 42824
                                                                                            ? (c < 42822
                                                                                               ? c == 42820
                                                                                               : c <= 42822)
                                                                                            : (c <= 42824 || c == 42826))
                                                                                         : (c <= 42828 || (c < 42832
                                                                                                           ? c == 42830
                                                                                                           : (c <= 42832 || c == 42834))))))
                                                                    : (c <= 42836 || (c < 42856
                                                                                      ? (c < 42846
                                                                                         ? (c < 42842
                                                                                            ? (c < 42840
                                                                                               ? c == 42838
                                                                                               : c <= 42840)
                                                                                            : (c <= 42842 || c == 42844))
                                                                                         : (c <= 42846 || (c < 42852
                                                                                                           ? (c < 42850
                                                                                                              ? c == 42848
                                                                                                              : c <= 42850)
                                                                                                           : (c <= 42852 || c == 42854))))
                                                                                      : (c <= 42856 || (c < 42875
                                                                                                        ? (c < 42862
                                                                                                           ? (c < 42860
                                                                                                              ? c == 42858
                                                                                                              : c <= 42860)
                                                                                                           : (c <= 42862 || c == 42873))
                                                                                                        : (c <= 42875 || (c < 42880
                                                                                                                          ? (c >= 42877 && c <= 42878)
                                                                                                                          : (c <= 42880 || c == 42882))))))))
                                                                 : (c <= 42884 || (c < 42936
                                                                                   ? (c < 42910
                                                                                      ? (c < 42898
                                                                                         ? (c < 42893
                                                                                            ? (c < 42891
                                                                                               ? c == 42886
                                                                                               : c <= 42891)
                                                                                            : (c <= 42893 || c == 42896))
                                                                                         : (c <= 42898 || (c < 42906
                                                                                                           ? (c < 42904
                                                                                                              ? c == 42902
                                                                                                              : c <= 42904)
                                                                                                           : (c <= 42906 || c == 42908))))
                                                                                      : (c <= 42910 || (c < 42920
                                                                                                        ? (c < 42916
                                                                                                           ? (c < 42914
                                                                                                              ? c == 42912
                                                                                                              : c <= 42914)
                                                                                                           : (c <= 42916 || c == 42918))
                                                                                                        : (c <= 42920 || (c < 42928
                                                                                                                          ? (c >= 42922 && c <= 42926)
                                                                                                                          : (c <= 42932 || c == 42934))))))
                                                                                   : (c <= 42936 || (c < 42968
                                                                                                     ? (c < 42946
                                                                                                        ? (c < 42942
                                                                                                           ? (c < 42940
                                                                                                              ? c == 42938
                                                                                                              : c <= 42940)
                                                                                                           : (c <= 42942 || c == 42944))
                                                                                                        : (c <= 42946 || (c < 42960
                                                                                                                          ? (c < 42953
                                                                                                                             ? (c >= 42948 && c <= 42951)
                                                                                                                             : c <= 42953)
                                                                                                                          : (c <= 42960 || c == 42966))))
                                                                                                     : (c <= 42968 || (c < 66928
                                                                                                                       ? (c < 66560
                                                                                                                          ? (c < 65313
                                                                                                                             ? c == 42997
                                                                                                                             : c <= 65338)
                                                                                                                          : (c <= 66599 || (c >= 66736 && c <= 66771)))
                                                                                                                       : (c <= 66938 || (c < 66956
                                                                                                                                         ? (c >= 66940 && c <= 66954)
                                                                                                                                         : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym_short_inner_environment_body_character_set_2(int32_t c) {
    return (c < 8178
            ? (c < 5112
               ? (c < 881
                  ? (c < 454
                     ? (c < 248
                        ? (c < 223
                           ? c == 181
                           : c <= 246)
                        : (c <= 442 || (c >= 445 && c <= 447)))
                     : (c <= 454 || (c < 499
                                     ? (c < 460
                                        ? c == 457
                                        : c <= 496)
                                     : (c <= 659 || (c >= 661 && c <= 687)))))
                  : (c <= 883 || (c < 1016
                                  ? (c < 912
                                     ? (c < 891
                                        ? c == 887
                                        : c <= 893)
                                     : (c <= 912 || (c >= 940 && c <= 1013)))
                                  : (c <= 1153 || (c < 4304
                                                   ? (c < 1376
                                                      ? (c >= 1163 && c <= 1327)
                                                      : c <= 1416)
                                                   : (c <= 4346 || (c >= 4349 && c <= 4351)))))))
               : (c <= 5117 || (c < 8080
                                ? (c < 7681
                                   ? (c < 7531
                                      ? (c < 7424
                                         ? (c >= 7296 && c <= 7304)
                                         : c <= 7467)
                                      : (c <= 7543 || (c >= 7545 && c <= 7578)))
                                   : (c <= 7957 || (c < 8032
                                                    ? (c < 8016
                                                       ? (c >= 7968 && c <= 8005)
                                                       : c <= 8023)
                                                    : (c <= 8061 || (c >= 8064 && c <= 8071)))))
                                : (c <= 8087 || (c < 8130
                                                 ? (c < 8118
                                                    ? (c < 8112
                                                       ? (c >= 8096 && c <= 8103)
                                                       : c <= 8116)
                                                    : (c <= 8119 || c == 8126))
                                                 : (c <= 8132 || (c < 8150
                                                                  ? (c < 8144
                                                                     ? (c >= 8134 && c <= 8135)
                                                                     : c <= 8147)
                                                                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))))))
            : (c <= 8180 || (c < 42892
                             ? (c < 11393
                                ? (c < 8508
                                   ? (c < 8495
                                      ? (c < 8458
                                         ? (c >= 8182 && c <= 8183)
                                         : c <= 8467)
                                      : (c <= 8500 || c == 8505))
                                   : (c <= 8509 || (c < 8580
                                                    ? (c < 8526
                                                       ? (c >= 8518 && c <= 8521)
                                                       : c <= 8526)
                                                    : (c <= 8580 || (c >= 11312 && c <= 11387)))))
                                : (c <= 11492 || (c < 11565
                                                  ? (c < 11520
                                                     ? (c < 11507
                                                        ? (c >= 11500 && c <= 11502)
                                                        : c <= 11507)
                                                     : (c <= 11557 || c == 11559))
                                                  : (c <= 11565 || (c < 42787
                                                                    ? (c < 42625
                                                                       ? (c >= 42561 && c <= 42605)
                                                                       : c <= 42651)
                                                                    : (c <= 42863 || (c >= 42865 && c <= 42887)))))))
                             : (c <= 42894 || (c < 64256
                                               ? (c < 42998
                                                  ? (c < 42963
                                                     ? (c < 42961
                                                        ? (c >= 42897 && c <= 42954)
                                                        : c <= 42961)
                                                     : (c <= 42963 || (c >= 42965 && c <= 42969)))
                                                  : (c <= 42998 || (c < 43872
                                                                    ? (c < 43824
                                                                       ? c == 43002
                                                                       : c <= 43866)
                                                                    : (c <= 43880 || (c >= 43888 && c <= 43967)))))
                                               : (c <= 64262 || (c < 66967
                                                                 ? (c < 66600
                                                                    ? (c < 65345
                                                                       ? (c >= 64275 && c <= 64279)
                                                                       : c <= 65370)
                                                                    : (c <= 66639 || (c >= 66776 && c <= 66811)))
                                                                 : (c <= 66977 || (c < 66995
                                                                                   ? (c >= 66979 && c <= 66993)
                                                                                   : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym_short_inner_environment_body_character_set_3(int32_t c) {
    return (c < 5984
            ? (c < 2972
               ? (c < 2474
                  ? (c < 1869
                     ? (c < 1519
                        ? (c < 748
                           ? (c < 443
                              ? (c < 186
                                 ? c == 170
                                 : c <= 186)
                              : (c <= 705 || (c < 736
                                              ? (c >= 710 && c <= 721)
                                              : c <= 740)))
                           : (c <= 748 || (c < 890
                                           ? (c < 884
                                              ? c == 750
                                              : c <= 884)
                                           : (c <= 890 || (c < 1488
                                                           ? c == 1369
                                                           : c <= 1514)))))
                        : (c <= 1522 || (c < 1774
                                         ? (c < 1649
                                            ? (c < 1646
                                               ? (c >= 1568 && c <= 1610)
                                               : c <= 1647)
                                            : (c <= 1747 || (c < 1765
                                                             ? c == 1749
                                                             : c <= 1766)))
                                         : (c <= 1775 || (c < 1808
                                                          ? (c < 1791
                                                             ? (c >= 1786 && c <= 1788)
                                                             : c <= 1791)
                                                          : (c <= 1808 || (c >= 1810 && c <= 1839)))))))
                     : (c <= 1957 || (c < 2160
                                      ? (c < 2074
                                         ? (c < 2036
                                            ? (c < 1994
                                               ? c == 1969
                                               : c <= 2026)
                                            : (c <= 2037 || (c < 2048
                                                             ? c == 2042
                                                             : c <= 2069)))
                                         : (c <= 2074 || (c < 2112
                                                          ? (c < 2088
                                                             ? c == 2084
                                                             : c <= 2088)
                                                          : (c <= 2136 || (c >= 2144 && c <= 2154)))))
                                      : (c <= 2183 || (c < 2392
                                                       ? (c < 2308
                                                          ? (c < 2208
                                                             ? (c >= 2185 && c <= 2190)
                                                             : c <= 2249)
                                                          : (c <= 2361 || (c < 2384
                                                                           ? c == 2365
                                                                           : c <= 2384)))
                                                       : (c <= 2401 || (c < 2447
                                                                        ? (c < 2437
                                                                           ? (c >= 2417 && c <= 2432)
                                                                           : c <= 2444)
                                                                        : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))
                  : (c <= 2480 || (c < 2730
                                   ? (c < 2579
                                      ? (c < 2527
                                         ? (c < 2493
                                            ? (c < 2486
                                               ? c == 2482
                                               : c <= 2489)
                                            : (c <= 2493 || (c < 2524
                                                             ? c == 2510
                                                             : c <= 2525)))
                                         : (c <= 2529 || (c < 2565
                                                          ? (c < 2556
                                                             ? (c >= 2544 && c <= 2545)
                                                             : c <= 2556)
                                                          : (c <= 2570 || (c >= 2575 && c <= 2576)))))
                                      : (c <= 2600 || (c < 2654
                                                       ? (c < 2613
                                                          ? (c < 2610
                                                             ? (c >= 2602 && c <= 2608)
                                                             : c <= 2611)
                                                          : (c <= 2614 || (c < 2649
                                                                           ? (c >= 2616 && c <= 2617)
                                                                           : c <= 2652)))
                                                       : (c <= 2654 || (c < 2703
                                                                        ? (c < 2693
                                                                           ? (c >= 2674 && c <= 2676)
                                                                           : c <= 2701)
                                                                        : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
                                   : (c <= 2736 || (c < 2866
                                                    ? (c < 2809
                                                       ? (c < 2749
                                                          ? (c < 2741
                                                             ? (c >= 2738 && c <= 2739)
                                                             : c <= 2745)
                                                          : (c <= 2749 || (c < 2784
                                                                           ? c == 2768
                                                                           : c <= 2785)))
                                                       : (c <= 2809 || (c < 2835
                                                                        ? (c < 2831
                                                                           ? (c >= 2821 && c <= 2828)
                                                                           : c <= 2832)
                                                                        : (c <= 2856 || (c >= 2858 && c <= 2864)))))
                                                    : (c <= 2867 || (c < 2947
                                                                     ? (c < 2908
                                                                        ? (c < 2877
                                                                           ? (c >= 2869 && c <= 2873)
                                                                           : c <= 2877)
                                                                        : (c <= 2909 || (c < 2929
                                                                                         ? (c >= 2911 && c <= 2913)
                                                                                         : c <= 2929)))
                                                                     : (c <= 2947 || (c < 2962
                                                                                      ? (c < 2958
                                                                                         ? (c >= 2949 && c <= 2954)
                                                                                         : c <= 2960)
                                                                                      : (c <= 2965 || (c >= 2969 && c <= 2970)))))))))))
               : (c <= 2972 || (c < 3751
                                ? (c < 3313
                                   ? (c < 3165
                                      ? (c < 3077
                                         ? (c < 2984
                                            ? (c < 2979
                                               ? (c >= 2974 && c <= 2975)
                                               : c <= 2980)
                                            : (c <= 2986 || (c < 3024
                                                             ? (c >= 2990 && c <= 3001)
                                                             : c <= 3024)))
                                         : (c <= 3084 || (c < 3114
                                                          ? (c < 3090
                                                             ? (c >= 3086 && c <= 3088)
                                                             : c <= 3112)
                                                          : (c <= 3129 || (c < 3160
                                                                           ? c == 3133
                                                                           : c <= 3162)))))
                                      : (c <= 3165 || (c < 3242
                                                       ? (c < 3205
                                                          ? (c < 3200
                                                             ? (c >= 3168 && c <= 3169)
                                                             : c <= 3200)
                                                          : (c <= 3212 || (c < 3218
                                                                           ? (c >= 3214 && c <= 3216)
                                                                           : c <= 3240)))
                                                       : (c <= 3251 || (c < 3293
                                                                        ? (c < 3261
                                                                           ? (c >= 3253 && c <= 3257)
                                                                           : c <= 3261)
                                                                        : (c <= 3294 || (c >= 3296 && c <= 3297)))))))
                                   : (c <= 3314 || (c < 3507
                                                    ? (c < 3412
                                                       ? (c < 3346
                                                          ? (c < 3342
                                                             ? (c >= 3332 && c <= 3340)
                                                             : c <= 3344)
                                                          : (c <= 3386 || (c < 3406
                                                                           ? c == 3389
                                                                           : c <= 3406)))
                                                       : (c <= 3414 || (c < 3461
                                                                        ? (c < 3450
                                                                           ? (c >= 3423 && c <= 3425)
                                                                           : c <= 3455)
                                                                        : (c <= 3478 || (c >= 3482 && c <= 3505)))))
                                                    : (c <= 3515 || (c < 3713
                                                                     ? (c < 3585
                                                                        ? (c < 3520
                                                                           ? c == 3517
                                                                           : c <= 3526)
                                                                        : (c <= 3632 || (c < 3648
                                                                                         ? (c >= 3634 && c <= 3635)
                                                                                         : c <= 3654)))
                                                                     : (c <= 3714 || (c < 3724
                                                                                      ? (c < 3718
                                                                                         ? c == 3716
                                                                                         : c <= 3722)
                                                                                      : (c <= 3747 || c == 3749))))))))
                                : (c <= 3760 || (c < 4696
                                                 ? (c < 4159
                                                    ? (c < 3840
                                                       ? (c < 3776
                                                          ? (c < 3773
                                                             ? (c >= 3762 && c <= 3763)
                                                             : c <= 3773)
                                                          : (c <= 3780 || (c < 3804
                                                                           ? c == 3782
                                                                           : c <= 3807)))
                                                       : (c <= 3840 || (c < 3976
                                                                        ? (c < 3913
                                                                           ? (c >= 3904 && c <= 3911)
                                                                           : c <= 3948)
                                                                        : (c <= 3980 || (c >= 4096 && c <= 4138)))))
                                                    : (c <= 4159 || (c < 4213
                                                                     ? (c < 4193
                                                                        ? (c < 4186
                                                                           ? (c >= 4176 && c <= 4181)
                                                                           : c <= 4189)
                                                                        : (c <= 4193 || (c < 4206
                                                                                         ? (c >= 4197 && c <= 4198)
                                                                                         : c <= 4208)))
                                                                     : (c <= 4225 || (c < 4682
                                                                                      ? (c < 4348
                                                                                         ? c == 4238
                                                                                         : c <= 4680)
                                                                                      : (c <= 4685 || (c >= 4688 && c <= 4694)))))))
                                                 : (c <= 4696 || (c < 4882
                                                                  ? (c < 4792
                                                                     ? (c < 4746
                                                                        ? (c < 4704
                                                                           ? (c >= 4698 && c <= 4701)
                                                                           : c <= 4744)
                                                                        : (c <= 4749 || (c < 4786
                                                                                         ? (c >= 4752 && c <= 4784)
                                                                                         : c <= 4789)))
                                                                     : (c <= 4798 || (c < 4808
                                                                                      ? (c < 4802
                                                                                         ? c == 4800
                                                                                         : c <= 4805)
                                                                                      : (c <= 4822 || (c >= 4824 && c <= 4880)))))
                                                                  : (c <= 4885 || (c < 5792
                                                                                   ? (c < 5121
                                                                                      ? (c < 4992
                                                                                         ? (c >= 4888 && c <= 4954)
                                                                                         : c <= 5007)
                                                                                      : (c <= 5740 || (c < 5761
                                                                                                       ? (c >= 5743 && c <= 5759)
                                                                                                       : c <= 5786)))
                                                                                   : (c <= 5866 || (c < 5919
                                                                                                    ? (c < 5888
                                                                                                       ? (c >= 5873 && c <= 5880)
                                                                                                       : c <= 5905)
                                                                                                    : (c <= 5937 || (c >= 5952 && c <= 5969)))))))))))))
            : (c <= 5996 || (c < 43396
                             ? (c < 11696
                                ? (c < 7168
                                   ? (c < 6512
                                      ? (c < 6272
                                         ? (c < 6103
                                            ? (c < 6016
                                               ? (c >= 5998 && c <= 6000)
                                               : c <= 6067)
                                            : (c <= 6103 || (c < 6176
                                                             ? c == 6108
                                                             : c <= 6264)))
                                         : (c <= 6276 || (c < 6320
                                                          ? (c < 6314
                                                             ? (c >= 6279 && c <= 6312)
                                                             : c <= 6314)
                                                          : (c <= 6389 || (c < 6480
                                                                           ? (c >= 6400 && c <= 6430)
                                                                           : c <= 6509)))))
                                      : (c <= 6516 || (c < 6917
                                                       ? (c < 6656
                                                          ? (c < 6576
                                                             ? (c >= 6528 && c <= 6571)
                                                             : c <= 6601)
                                                          : (c <= 6678 || (c < 6823
                                                                           ? (c >= 6688 && c <= 6740)
                                                                           : c <= 6823)))
                                                       : (c <= 6963 || (c < 7086
                                                                        ? (c < 7043
                                                                           ? (c >= 6981 && c <= 6988)
                                                                           : c <= 7072)
                                                                        : (c <= 7087 || (c >= 7098 && c <= 7141)))))))
                                   : (c <= 7203 || (c < 8188
                                                    ? (c < 7418
                                                       ? (c < 7401
                                                          ? (c < 7258
                                                             ? (c >= 7245 && c <= 7247)
                                                             : c <= 7293)
                                                          : (c <= 7404 || (c < 7413
                                                                           ? (c >= 7406 && c <= 7411)
                                                                           : c <= 7414)))
                                                       : (c <= 7418 || (c < 8124
                                                                        ? (c < 8072
                                                                           ? (c >= 7468 && c <= 7615)
                                                                           : c <= 8111)
                                                                        : (c <= 8124 || c == 8140))))
                                                    : (c <= 8188 || (c < 11568
                                                                     ? (c < 8336
                                                                        ? (c < 8319
                                                                           ? c == 8305
                                                                           : c <= 8319)
                                                                        : (c <= 8348 || (c < 11388
                                                                                         ? (c >= 8501 && c <= 8504)
                                                                                         : c <= 11389)))
                                                                     : (c <= 11623 || (c < 11680
                                                                                       ? (c < 11648
                                                                                          ? c == 11631
                                                                                          : c <= 11670)
                                                                                       : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
                                : (c <= 11702 || (c < 42192
                                                  ? (c < 12445
                                                     ? (c < 11823
                                                        ? (c < 11720
                                                           ? (c < 11712
                                                              ? (c >= 11704 && c <= 11710)
                                                              : c <= 11718)
                                                           : (c <= 11726 || (c < 11736
                                                                             ? (c >= 11728 && c <= 11734)
                                                                             : c <= 11742)))
                                                        : (c <= 11823 || (c < 12347
                                                                          ? (c < 12337
                                                                             ? (c >= 12293 && c <= 12294)
                                                                             : c <= 12341)
                                                                          : (c <= 12348 || (c >= 12353 && c <= 12438)))))
                                                     : (c <= 12447 || (c < 12784
                                                                       ? (c < 12549
                                                                          ? (c < 12540
                                                                             ? (c >= 12449 && c <= 12538)
                                                                             : c <= 12543)
                                                                          : (c <= 12591 || (c < 12704
                                                                                            ? (c >= 12593 && c <= 12686)
                                                                                            : c <= 12735)))
                                                                       : (c <= 12799 || (c < 19968
                                                                                         ? (c < 19903
                                                                                            ? c == 13312
                                                                                            : c <= 19903)
                                                                                         : (c <= 19968 || (c >= 40959 && c <= 42124)))))))
                                                  : (c <= 42237 || (c < 43011
                                                                    ? (c < 42656
                                                                       ? (c < 42538
                                                                          ? (c < 42512
                                                                             ? (c >= 42240 && c <= 42508)
                                                                             : c <= 42527)
                                                                          : (c <= 42539 || (c < 42623
                                                                                            ? c == 42606
                                                                                            : c <= 42653)))
                                                                       : (c <= 42725 || (c < 42895
                                                                                         ? (c < 42864
                                                                                            ? (c >= 42775 && c <= 42783)
                                                                                            : c <= 42888)
                                                                                         : (c <= 42895 || (c >= 42994 && c <= 43009)))))
                                                                    : (c <= 43013 || (c < 43259
                                                                                      ? (c < 43072
                                                                                         ? (c < 43020
                                                                                            ? (c >= 43015 && c <= 43018)
                                                                                            : c <= 43042)
                                                                                         : (c <= 43123 || (c < 43250
                                                                                                           ? (c >= 43138 && c <= 43187)
                                                                                                           : c <= 43255)))
                                                                                      : (c <= 43259 || (c < 43312
                                                                                                        ? (c < 43274
                                                                                                           ? (c >= 43261 && c <= 43262)
                                                                                                           : c <= 43301)
                                                                                                        : (c <= 43334 || (c >= 43360 && c <= 43388)))))))))))
                             : (c <= 43442 || (c < 65136
                                               ? (c < 43808
                                                  ? (c < 43697
                                                     ? (c < 43584
                                                        ? (c < 43494
                                                           ? (c < 43488
                                                              ? c == 43471
                                                              : c <= 43492)
                                                           : (c <= 43503 || (c < 43520
                                                                             ? (c >= 43514 && c <= 43518)
                                                                             : c <= 43560)))
                                                        : (c <= 43586 || (c < 43642
                                                                          ? (c < 43616
                                                                             ? (c >= 43588 && c <= 43595)
                                                                             : c <= 43638)
                                                                          : (c <= 43642 || (c >= 43646 && c <= 43695)))))
                                                     : (c <= 43697 || (c < 43744
                                                                       ? (c < 43712
                                                                          ? (c < 43705
                                                                             ? (c >= 43701 && c <= 43702)
                                                                             : c <= 43709)
                                                                          : (c <= 43712 || (c < 43739
                                                                                            ? c == 43714
                                                                                            : c <= 43741)))
                                                                       : (c <= 43754 || (c < 43785
                                                                                         ? (c < 43777
                                                                                            ? (c >= 43762 && c <= 43764)
                                                                                            : c <= 43782)
                                                                                         : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
                                                  : (c <= 43814 || (c < 64287
                                                                    ? (c < 55216
                                                                       ? (c < 43968
                                                                          ? (c < 43868
                                                                             ? (c >= 43816 && c <= 43822)
                                                                             : c <= 43881)
                                                                          : (c <= 44002 || (c < 55203
                                                                                            ? c == 44032
                                                                                            : c <= 55203)))
                                                                       : (c <= 55238 || (c < 64112
                                                                                         ? (c < 63744
                                                                                            ? (c >= 55243 && c <= 55291)
                                                                                            : c <= 64109)
                                                                                         : (c <= 64217 || c == 64285))))
                                                                    : (c <= 64296 || (c < 64326
                                                                                      ? (c < 64318
                                                                                         ? (c < 64312
                                                                                            ? (c >= 64298 && c <= 64310)
                                                                                            : c <= 64316)
                                                                                         : (c <= 64318 || (c < 64323
                                                                                                           ? (c >= 64320 && c <= 64321)
                                                                                                           : c <= 64324)))
                                                                                      : (c <= 64433 || (c < 64914
                                                                                                        ? (c < 64848
                                                                                                           ? (c >= 64467 && c <= 64829)
                                                                                                           : c <= 64911)
                                                                                                        : (c <= 64967 || (c >= 65008 && c <= 65019)))))))))
                                               : (c <= 65140 || (c < 66504
                                                                 ? (c < 65599
                                                                    ? (c < 65498
                                                                       ? (c < 65474
                                                                          ? (c < 65382
                                                                             ? (c >= 65142 && c <= 65276)
                                                                             : c <= 65470)
                                                                          : (c <= 65479 || (c < 65490
                                                                                            ? (c >= 65482 && c <= 65487)
                                                                                            : c <= 65495)))
                                                                       : (c <= 65500 || (c < 65576
                                                                                         ? (c < 65549
                                                                                            ? (c >= 65536 && c <= 65547)
                                                                                            : c <= 65574)
                                                                                         : (c <= 65594 || (c >= 65596 && c <= 65597)))))
                                                                    : (c <= 65613 || (c < 66349
                                                                                      ? (c < 66176
                                                                                         ? (c < 65664
                                                                                            ? (c >= 65616 && c <= 65629)
                                                                                            : c <= 65786)
                                                                                         : (c <= 66204 || (c < 66304
                                                                                                           ? (c >= 66208 && c <= 66256)
                                                                                                           : c <= 66335)))
                                                                                      : (c <= 66368 || (c < 66432
                                                                                                        ? (c < 66384
                                                                                                           ? (c >= 66370 && c <= 66377)
                                                                                                           : c <= 66421)
                                                                                                        : (c <= 66461 || (c >= 66464 && c <= 66499)))))))
                                                                 : (c <= 66511 || (c < 67592
                                                                                   ? (c < 67424
                                                                                      ? (c < 66864
                                                                                         ? (c < 66816
                                                                                            ? (c >= 66640 && c <= 66717)
                                                                                            : c <= 66855)
                                                                                         : (c <= 66915 || (c < 67392
                                                                                                           ? (c >= 67072 && c <= 67382)
                                                                                                           : c <= 67413)))
                                                                                      : (c <= 67431 || (c < 67506
                                                                                                        ? (c < 67463
                                                                                                           ? (c >= 67456 && c <= 67461)
                                                                                                           : c <= 67504)
                                                                                                        : (c <= 67514 || (c >= 67584 && c <= 67589)))))
                                                                                   : (c <= 67592 || (c < 67712
                                                                                                     ? (c < 67644
                                                                                                        ? (c < 67639
                                                                                                           ? (c >= 67594 && c <= 67637)
                                                                                                           : c <= 67640)
                                                                                                        : (c <= 67644 || (c < 67680
                                                                                                                          ? (c >= 67647 && c <= 67669)
                                                                                                                          : c <= 67702)))
                                                                                                     : (c <= 67742 || (c < 67840
                                                                                                                       ? (c < 67828
                                                                                                                          ? (c >= 67808 && c <= 67826)
                                                                                                                          : c <= 67829)
                                                                                                                       : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))));
}

static inline bool sym_short_inner_environment_body_character_set_4(int32_t c) {
    return (c < 6576
            ? (c < 2974
               ? (c < 2208
                  ? (c < 1369
                     ? (c < 748
                        ? (c < 181
                           ? (c < '_'
                              ? (c < '/'
                                 ? c == '-'
                                 : (c <= '9' || (c >= 'A' && c <= 'Z')))
                              : (c <= '_' || (c < 170
                                              ? (c >= 'a' && c <= 'z')
                                              : c <= 170)))
                           : (c <= 181 || (c < 248
                                           ? (c < 192
                                              ? c == 186
                                              : (c <= 214 || (c >= 216 && c <= 246)))
                                           : (c <= 705 || (c < 736
                                                           ? (c >= 710 && c <= 721)
                                                           : c <= 740)))))
                        : (c <= 748 || (c < 904
                                        ? (c < 890
                                           ? (c < 880
                                              ? c == 750
                                              : (c <= 884 || (c >= 886 && c <= 887)))
                                           : (c <= 893 || (c < 902
                                                           ? c == 895
                                                           : c <= 902)))
                                        : (c <= 906 || (c < 1015
                                                        ? (c < 910
                                                           ? c == 908
                                                           : (c <= 929 || (c >= 931 && c <= 1013)))
                                                        : (c <= 1153 || (c < 1329
                                                                         ? (c >= 1162 && c <= 1327)
                                                                         : c <= 1366)))))))
                     : (c <= 1369 || (c < 1869
                                      ? (c < 1749
                                         ? (c < 1568
                                            ? (c < 1488
                                               ? (c >= 1376 && c <= 1416)
                                               : (c <= 1514 || (c >= 1519 && c <= 1522)))
                                            : (c <= 1610 || (c < 1649
                                                             ? (c >= 1646 && c <= 1647)
                                                             : c <= 1747)))
                                         : (c <= 1749 || (c < 1791
                                                          ? (c < 1774
                                                             ? (c >= 1765 && c <= 1766)
                                                             : (c <= 1775 || (c >= 1786 && c <= 1788)))
                                                          : (c <= 1791 || (c < 1810
                                                                           ? c == 1808
                                                                           : c <= 1839)))))
                                      : (c <= 1957 || (c < 2084
                                                       ? (c < 2042
                                                          ? (c < 1994
                                                             ? c == 1969
                                                             : (c <= 2026 || (c >= 2036 && c <= 2037)))
                                                          : (c <= 2042 || (c < 2074
                                                                           ? (c >= 2048 && c <= 2069)
                                                                           : c <= 2074)))
                                                       : (c <= 2084 || (c < 2144
                                                                        ? (c < 2112
                                                                           ? c == 2088
                                                                           : c <= 2136)
                                                                        : (c <= 2154 || (c < 2185
                                                                                         ? (c >= 2160 && c <= 2183)
                                                                                         : c <= 2190)))))))))
                  : (c <= 2249 || (c < 2674
                                   ? (c < 2524
                                      ? (c < 2447
                                         ? (c < 2392
                                            ? (c < 2365
                                               ? (c >= 2308 && c <= 2361)
                                               : (c <= 2365 || c == 2384))
                                            : (c <= 2401 || (c < 2437
                                                             ? (c >= 2417 && c <= 2432)
                                                             : c <= 2444)))
                                         : (c <= 2448 || (c < 2486
                                                          ? (c < 2474
                                                             ? (c >= 2451 && c <= 2472)
                                                             : (c <= 2480 || c == 2482))
                                                          : (c <= 2489 || (c < 2510
                                                                           ? c == 2493
                                                                           : c <= 2510)))))
                                      : (c <= 2525 || (c < 2602
                                                       ? (c < 2565
                                                          ? (c < 2544
                                                             ? (c >= 2527 && c <= 2529)
                                                             : (c <= 2545 || c == 2556))
                                                          : (c <= 2570 || (c < 2579
                                                                           ? (c >= 2575 && c <= 2576)
                                                                           : c <= 2600)))
                                                       : (c <= 2608 || (c < 2616
                                                                        ? (c < 2613
                                                                           ? (c >= 2610 && c <= 2611)
                                                                           : c <= 2614)
                                                                        : (c <= 2617 || (c < 2654
                                                                                         ? (c >= 2649 && c <= 2652)
                                                                                         : c <= 2654)))))))
                                   : (c <= 2676 || (c < 2858
                                                    ? (c < 2749
                                                       ? (c < 2730
                                                          ? (c < 2703
                                                             ? (c >= 2693 && c <= 2701)
                                                             : (c <= 2705 || (c >= 2707 && c <= 2728)))
                                                          : (c <= 2736 || (c < 2741
                                                                           ? (c >= 2738 && c <= 2739)
                                                                           : c <= 2745)))
                                                       : (c <= 2749 || (c < 2821
                                                                        ? (c < 2784
                                                                           ? c == 2768
                                                                           : (c <= 2785 || c == 2809))
                                                                        : (c <= 2828 || (c < 2835
                                                                                         ? (c >= 2831 && c <= 2832)
                                                                                         : c <= 2856)))))
                                                    : (c <= 2864 || (c < 2947
                                                                     ? (c < 2908
                                                                        ? (c < 2869
                                                                           ? (c >= 2866 && c <= 2867)
                                                                           : (c <= 2873 || c == 2877))
                                                                        : (c <= 2909 || (c < 2929
                                                                                         ? (c >= 2911 && c <= 2913)
                                                                                         : c <= 2929)))
                                                                     : (c <= 2947 || (c < 2962
                                                                                      ? (c < 2958
                                                                                         ? (c >= 2949 && c <= 2954)
                                                                                         : c <= 2960)
                                                                                      : (c <= 2965 || (c < 2972
                                                                                                       ? (c >= 2969 && c <= 2970)
                                                                                                       : c <= 2972)))))))))))
               : (c <= 2975 || (c < 4096
                                ? (c < 3406
                                   ? (c < 3205
                                      ? (c < 3090
                                         ? (c < 3024
                                            ? (c < 2984
                                               ? (c >= 2979 && c <= 2980)
                                               : (c <= 2986 || (c >= 2990 && c <= 3001)))
                                            : (c <= 3024 || (c < 3086
                                                             ? (c >= 3077 && c <= 3084)
                                                             : c <= 3088)))
                                         : (c <= 3112 || (c < 3165
                                                          ? (c < 3133
                                                             ? (c >= 3114 && c <= 3129)
                                                             : (c <= 3133 || (c >= 3160 && c <= 3162)))
                                                          : (c <= 3165 || (c < 3200
                                                                           ? (c >= 3168 && c <= 3169)
                                                                           : c <= 3200)))))
                                      : (c <= 3212 || (c < 3296
                                                       ? (c < 3253
                                                          ? (c < 3218
                                                             ? (c >= 3214 && c <= 3216)
                                                             : (c <= 3240 || (c >= 3242 && c <= 3251)))
                                                          : (c <= 3257 || (c < 3293
                                                                           ? c == 3261
                                                                           : c <= 3294)))
                                                       : (c <= 3297 || (c < 3342
                                                                        ? (c < 3332
                                                                           ? (c >= 3313 && c <= 3314)
                                                                           : c <= 3340)
                                                                        : (c <= 3344 || (c < 3389
                                                                                         ? (c >= 3346 && c <= 3386)
                                                                                         : c <= 3389)))))))
                                   : (c <= 3406 || (c < 3718
                                                    ? (c < 3517
                                                       ? (c < 3461
                                                          ? (c < 3423
                                                             ? (c >= 3412 && c <= 3414)
                                                             : (c <= 3425 || (c >= 3450 && c <= 3455)))
                                                          : (c <= 3478 || (c < 3507
                                                                           ? (c >= 3482 && c <= 3505)
                                                                           : c <= 3515)))
                                                       : (c <= 3517 || (c < 3648
                                                                        ? (c < 3585
                                                                           ? (c >= 3520 && c <= 3526)
                                                                           : (c <= 3632 || (c >= 3634 && c <= 3635)))
                                                                        : (c <= 3654 || (c < 3716
                                                                                         ? (c >= 3713 && c <= 3714)
                                                                                         : c <= 3716)))))
                                                    : (c <= 3722 || (c < 3782
                                                                     ? (c < 3762
                                                                        ? (c < 3749
                                                                           ? (c >= 3724 && c <= 3747)
                                                                           : (c <= 3749 || (c >= 3751 && c <= 3760)))
                                                                        : (c <= 3763 || (c < 3776
                                                                                         ? c == 3773
                                                                                         : c <= 3780)))
                                                                     : (c <= 3782 || (c < 3904
                                                                                      ? (c < 3840
                                                                                         ? (c >= 3804 && c <= 3807)
                                                                                         : c <= 3840)
                                                                                      : (c <= 3911 || (c < 3976
                                                                                                       ? (c >= 3913 && c <= 3948)
                                                                                                       : c <= 3980)))))))))
                                : (c <= 4138 || (c < 4882
                                                 ? (c < 4682
                                                    ? (c < 4213
                                                       ? (c < 4193
                                                          ? (c < 4176
                                                             ? c == 4159
                                                             : (c <= 4181 || (c >= 4186 && c <= 4189)))
                                                          : (c <= 4193 || (c < 4206
                                                                           ? (c >= 4197 && c <= 4198)
                                                                           : c <= 4208)))
                                                       : (c <= 4225 || (c < 4301
                                                                        ? (c < 4256
                                                                           ? c == 4238
                                                                           : (c <= 4293 || c == 4295))
                                                                        : (c <= 4301 || (c < 4348
                                                                                         ? (c >= 4304 && c <= 4346)
                                                                                         : c <= 4680)))))
                                                    : (c <= 4685 || (c < 4786
                                                                     ? (c < 4704
                                                                        ? (c < 4696
                                                                           ? (c >= 4688 && c <= 4694)
                                                                           : (c <= 4696 || (c >= 4698 && c <= 4701)))
                                                                        : (c <= 4744 || (c < 4752
                                                                                         ? (c >= 4746 && c <= 4749)
                                                                                         : c <= 4784)))
                                                                     : (c <= 4789 || (c < 4802
                                                                                      ? (c < 4800
                                                                                         ? (c >= 4792 && c <= 4798)
                                                                                         : c <= 4800)
                                                                                      : (c <= 4805 || (c < 4824
                                                                                                       ? (c >= 4808 && c <= 4822)
                                                                                                       : c <= 4880)))))))
                                                 : (c <= 4885 || (c < 5998
                                                                  ? (c < 5761
                                                                     ? (c < 5112
                                                                        ? (c < 4992
                                                                           ? (c >= 4888 && c <= 4954)
                                                                           : (c <= 5007 || (c >= 5024 && c <= 5109)))
                                                                        : (c <= 5117 || (c < 5743
                                                                                         ? (c >= 5121 && c <= 5740)
                                                                                         : c <= 5759)))
                                                                     : (c <= 5786 || (c < 5919
                                                                                      ? (c < 5873
                                                                                         ? (c >= 5792 && c <= 5866)
                                                                                         : (c <= 5880 || (c >= 5888 && c <= 5905)))
                                                                                      : (c <= 5937 || (c < 5984
                                                                                                       ? (c >= 5952 && c <= 5969)
                                                                                                       : c <= 5996)))))
                                                                  : (c <= 6000 || (c < 6314
                                                                                   ? (c < 6176
                                                                                      ? (c < 6103
                                                                                         ? (c >= 6016 && c <= 6067)
                                                                                         : (c <= 6103 || c == 6108))
                                                                                      : (c <= 6264 || (c < 6279
                                                                                                       ? (c >= 6272 && c <= 6276)
                                                                                                       : c <= 6312)))
                                                                                   : (c <= 6314 || (c < 6480
                                                                                                    ? (c < 6400
                                                                                                       ? (c >= 6320 && c <= 6389)
                                                                                                       : c <= 6430)
                                                                                                    : (c <= 6509 || (c < 6528
                                                                                                                     ? (c >= 6512 && c <= 6516)
                                                                                                                     : c <= 6571)))))))))))))
            : (c <= 6601 || (c < 43259
                             ? (c < 8579
                                ? (c < 8031
                                   ? (c < 7357
                                      ? (c < 7086
                                         ? (c < 6917
                                            ? (c < 6688
                                               ? (c >= 6656 && c <= 6678)
                                               : (c <= 6740 || c == 6823))
                                            : (c <= 6963 || (c < 7043
                                                             ? (c >= 6981 && c <= 6988)
                                                             : c <= 7072)))
                                         : (c <= 7087 || (c < 7258
                                                          ? (c < 7168
                                                             ? (c >= 7098 && c <= 7141)
                                                             : (c <= 7203 || (c >= 7245 && c <= 7247)))
                                                          : (c <= 7293 || (c < 7312
                                                                           ? (c >= 7296 && c <= 7304)
                                                                           : c <= 7354)))))
                                      : (c <= 7359 || (c < 7960
                                                       ? (c < 7418
                                                          ? (c < 7406
                                                             ? (c >= 7401 && c <= 7404)
                                                             : (c <= 7411 || (c >= 7413 && c <= 7414)))
                                                          : (c <= 7418 || (c < 7680
                                                                           ? (c >= 7424 && c <= 7615)
                                                                           : c <= 7957)))
                                                       : (c <= 7965 || (c < 8025
                                                                        ? (c < 8008
                                                                           ? (c >= 7968 && c <= 8005)
                                                                           : (c <= 8013 || (c >= 8016 && c <= 8023)))
                                                                        : (c <= 8025 || (c < 8029
                                                                                         ? c == 8027
                                                                                         : c <= 8029)))))))
                                   : (c <= 8061 || (c < 8450
                                                    ? (c < 8150
                                                       ? (c < 8130
                                                          ? (c < 8118
                                                             ? (c >= 8064 && c <= 8116)
                                                             : (c <= 8124 || c == 8126))
                                                          : (c <= 8132 || (c < 8144
                                                                           ? (c >= 8134 && c <= 8140)
                                                                           : c <= 8147)))
                                                       : (c <= 8155 || (c < 8305
                                                                        ? (c < 8178
                                                                           ? (c >= 8160 && c <= 8172)
                                                                           : (c <= 8180 || (c >= 8182 && c <= 8188)))
                                                                        : (c <= 8305 || (c < 8336
                                                                                         ? c == 8319
                                                                                         : c <= 8348)))))
                                                    : (c <= 8450 || (c < 8488
                                                                     ? (c < 8473
                                                                        ? (c < 8458
                                                                           ? c == 8455
                                                                           : (c <= 8467 || c == 8469))
                                                                        : (c <= 8477 || (c < 8486
                                                                                         ? c == 8484
                                                                                         : c <= 8486)))
                                                                     : (c <= 8488 || (c < 8508
                                                                                      ? (c < 8495
                                                                                         ? (c >= 8490 && c <= 8493)
                                                                                         : c <= 8505)
                                                                                      : (c <= 8511 || (c < 8526
                                                                                                       ? (c >= 8517 && c <= 8521)
                                                                                                       : c <= 8526)))))))))
                                : (c <= 8580 || (c < 12593
                                                 ? (c < 11712
                                                    ? (c < 11568
                                                       ? (c < 11520
                                                          ? (c < 11499
                                                             ? (c >= 11264 && c <= 11492)
                                                             : (c <= 11502 || (c >= 11506 && c <= 11507)))
                                                          : (c <= 11557 || (c < 11565
                                                                            ? c == 11559
                                                                            : c <= 11565)))
                                                       : (c <= 11623 || (c < 11688
                                                                         ? (c < 11648
                                                                            ? c == 11631
                                                                            : (c <= 11670 || (c >= 11680 && c <= 11686)))
                                                                         : (c <= 11694 || (c < 11704
                                                                                           ? (c >= 11696 && c <= 11702)
                                                                                           : c <= 11710)))))
                                                    : (c <= 11718 || (c < 12347
                                                                      ? (c < 11823
                                                                         ? (c < 11728
                                                                            ? (c >= 11720 && c <= 11726)
                                                                            : (c <= 11734 || (c >= 11736 && c <= 11742)))
                                                                         : (c <= 11823 || (c < 12337
                                                                                           ? (c >= 12293 && c <= 12294)
                                                                                           : c <= 12341)))
                                                                      : (c <= 12348 || (c < 12449
                                                                                        ? (c < 12445
                                                                                           ? (c >= 12353 && c <= 12438)
                                                                                           : c <= 12447)
                                                                                        : (c <= 12538 || (c < 12549
                                                                                                          ? (c >= 12540 && c <= 12543)
                                                                                                          : c <= 12591)))))))
                                                 : (c <= 12686 || (c < 42775
                                                                   ? (c < 42192
                                                                      ? (c < 19903
                                                                         ? (c < 12784
                                                                            ? (c >= 12704 && c <= 12735)
                                                                            : (c <= 12799 || c == 13312))
                                                                         : (c <= 19903 || (c < 40959
                                                                                           ? c == 19968
                                                                                           : c <= 42124)))
                                                                      : (c <= 42237 || (c < 42560
                                                                                        ? (c < 42512
                                                                                           ? (c >= 42240 && c <= 42508)
                                                                                           : (c <= 42527 || (c >= 42538 && c <= 42539)))
                                                                                        : (c <= 42606 || (c < 42656
                                                                                                          ? (c >= 42623 && c <= 42653)
                                                                                                          : c <= 42725)))))
                                                                   : (c <= 42783 || (c < 43011
                                                                                     ? (c < 42963
                                                                                        ? (c < 42891
                                                                                           ? (c >= 42786 && c <= 42888)
                                                                                           : (c <= 42954 || (c >= 42960 && c <= 42961)))
                                                                                        : (c <= 42963 || (c < 42994
                                                                                                          ? (c >= 42965 && c <= 42969)
                                                                                                          : c <= 43009)))
                                                                                     : (c <= 43013 || (c < 43072
                                                                                                       ? (c < 43020
                                                                                                          ? (c >= 43015 && c <= 43018)
                                                                                                          : c <= 43042)
                                                                                                       : (c <= 43123 || (c < 43250
                                                                                                                         ? (c >= 43138 && c <= 43187)
                                                                                                                         : c <= 43255)))))))))))
                             : (c <= 43259 || (c < 65313
                                               ? (c < 43808
                                                  ? (c < 43642
                                                     ? (c < 43488
                                                        ? (c < 43360
                                                           ? (c < 43274
                                                              ? (c >= 43261 && c <= 43262)
                                                              : (c <= 43301 || (c >= 43312 && c <= 43334)))
                                                           : (c <= 43388 || (c < 43471
                                                                             ? (c >= 43396 && c <= 43442)
                                                                             : c <= 43471)))
                                                        : (c <= 43492 || (c < 43584
                                                                          ? (c < 43514
                                                                             ? (c >= 43494 && c <= 43503)
                                                                             : (c <= 43518 || (c >= 43520 && c <= 43560)))
                                                                          : (c <= 43586 || (c < 43616
                                                                                            ? (c >= 43588 && c <= 43595)
                                                                                            : c <= 43638)))))
                                                     : (c <= 43642 || (c < 43739
                                                                       ? (c < 43705
                                                                          ? (c < 43697
                                                                             ? (c >= 43646 && c <= 43695)
                                                                             : (c <= 43697 || (c >= 43701 && c <= 43702)))
                                                                          : (c <= 43709 || (c < 43714
                                                                                            ? c == 43712
                                                                                            : c <= 43714)))
                                                                       : (c <= 43741 || (c < 43777
                                                                                         ? (c < 43762
                                                                                            ? (c >= 43744 && c <= 43754)
                                                                                            : c <= 43764)
                                                                                         : (c <= 43782 || (c < 43793
                                                                                                           ? (c >= 43785 && c <= 43790)
                                                                                                           : c <= 43798)))))))
                                                  : (c <= 43814 || (c < 64287
                                                                    ? (c < 55216
                                                                       ? (c < 43888
                                                                          ? (c < 43824
                                                                             ? (c >= 43816 && c <= 43822)
                                                                             : (c <= 43866 || (c >= 43868 && c <= 43881)))
                                                                          : (c <= 44002 || (c < 55203
                                                                                            ? c == 44032
                                                                                            : c <= 55203)))
                                                                       : (c <= 55238 || (c < 64256
                                                                                         ? (c < 63744
                                                                                            ? (c >= 55243 && c <= 55291)
                                                                                            : (c <= 64109 || (c >= 64112 && c <= 64217)))
                                                                                         : (c <= 64262 || (c < 64285
                                                                                                           ? (c >= 64275 && c <= 64279)
                                                                                                           : c <= 64285)))))
                                                                    : (c <= 64296 || (c < 64467
                                                                                      ? (c < 64320
                                                                                         ? (c < 64312
                                                                                            ? (c >= 64298 && c <= 64310)
                                                                                            : (c <= 64316 || c == 64318))
                                                                                         : (c <= 64321 || (c < 64326
                                                                                                           ? (c >= 64323 && c <= 64324)
                                                                                                           : c <= 64433)))
                                                                                      : (c <= 64829 || (c < 65008
                                                                                                        ? (c < 64914
                                                                                                           ? (c >= 64848 && c <= 64911)
                                                                                                           : c <= 64967)
                                                                                                        : (c <= 65019 || (c < 65142
                                                                                                                          ? (c >= 65136 && c <= 65140)
                                                                                                                          : c <= 65276)))))))))
                                               : (c <= 65338 || (c < 66864
                                                                 ? (c < 66176
                                                                    ? (c < 65536
                                                                       ? (c < 65482
                                                                          ? (c < 65382
                                                                             ? (c >= 65345 && c <= 65370)
                                                                             : (c <= 65470 || (c >= 65474 && c <= 65479)))
                                                                          : (c <= 65487 || (c < 65498
                                                                                            ? (c >= 65490 && c <= 65495)
                                                                                            : c <= 65500)))
                                                                       : (c <= 65547 || (c < 65599
                                                                                         ? (c < 65576
                                                                                            ? (c >= 65549 && c <= 65574)
                                                                                            : (c <= 65594 || (c >= 65596 && c <= 65597)))
                                                                                         : (c <= 65613 || (c < 65664
                                                                                                           ? (c >= 65616 && c <= 65629)
                                                                                                           : c <= 65786)))))
                                                                    : (c <= 66204 || (c < 66464
                                                                                      ? (c < 66370
                                                                                         ? (c < 66304
                                                                                            ? (c >= 66208 && c <= 66256)
                                                                                            : (c <= 66335 || (c >= 66349 && c <= 66368)))
                                                                                         : (c <= 66377 || (c < 66432
                                                                                                           ? (c >= 66384 && c <= 66421)
                                                                                                           : c <= 66461)))
                                                                                      : (c <= 66499 || (c < 66736
                                                                                                        ? (c < 66560
                                                                                                           ? (c >= 66504 && c <= 66511)
                                                                                                           : c <= 66717)
                                                                                                        : (c <= 66771 || (c < 66816
                                                                                                                          ? (c >= 66776 && c <= 66811)
                                                                                                                          : c <= 66855)))))))
                                                                 : (c <= 66915 || (c < 67506
                                                                                   ? (c < 66995
                                                                                      ? (c < 66964
                                                                                         ? (c < 66940
                                                                                            ? (c >= 66928 && c <= 66938)
                                                                                            : (c <= 66954 || (c >= 66956 && c <= 66962)))
                                                                                         : (c <= 66965 || (c < 66979
                                                                                                           ? (c >= 66967 && c <= 66977)
                                                                                                           : c <= 66993)))
                                                                                      : (c <= 67001 || (c < 67424
                                                                                                        ? (c < 67072
                                                                                                           ? (c >= 67003 && c <= 67004)
                                                                                                           : (c <= 67382 || (c >= 67392 && c <= 67413)))
                                                                                                        : (c <= 67431 || (c < 67463
                                                                                                                          ? (c >= 67456 && c <= 67461)
                                                                                                                          : c <= 67504)))))
                                                                                   : (c <= 67514 || (c < 67680
                                                                                                     ? (c < 67639
                                                                                                        ? (c < 67592
                                                                                                           ? (c >= 67584 && c <= 67589)
                                                                                                           : (c <= 67592 || (c >= 67594 && c <= 67637)))
                                                                                                        : (c <= 67640 || (c < 67647
                                                                                                                          ? c == 67644
                                                                                                                          : c <= 67669)))
                                                                                                     : (c <= 67702 || (c < 67828
                                                                                                                       ? (c < 67808
                                                                                                                          ? (c >= 67712 && c <= 67742)
                                                                                                                          : c <= 67826)
                                                                                                                       : (c <= 67829 || (c < 67872
                                                                                                                                         ? (c >= 67840 && c <= 67861)
                                                                                                                                         : c <= 67883)))))))))))))));
}

static inline bool sym_short_inner_environment_body_character_set_5(int32_t c) {
    return (c < 6688
            ? (c < 2990
               ? (c < 2384
                  ? (c < 1519
                     ? (c < 890
                        ? (c < 248
                           ? (c < 186
                              ? (c < 170
                                 ? c == '/'
                                 : (c <= 170 || c == 181))
                              : (c <= 186 || (c < 216
                                              ? (c >= 192 && c <= 214)
                                              : c <= 246)))
                           : (c <= 705 || (c < 750
                                           ? (c < 736
                                              ? (c >= 710 && c <= 721)
                                              : (c <= 740 || c == 748))
                                           : (c <= 750 || (c < 886
                                                           ? (c >= 880 && c <= 884)
                                                           : c <= 887)))))
                        : (c <= 893 || (c < 1015
                                        ? (c < 908
                                           ? (c < 902
                                              ? c == 895
                                              : (c <= 902 || (c >= 904 && c <= 906)))
                                           : (c <= 908 || (c < 931
                                                           ? (c >= 910 && c <= 929)
                                                           : c <= 1013)))
                                        : (c <= 1153 || (c < 1369
                                                         ? (c < 1329
                                                            ? (c >= 1162 && c <= 1327)
                                                            : c <= 1366)
                                                         : (c <= 1369 || (c < 1488
                                                                          ? (c >= 1376 && c <= 1416)
                                                                          : c <= 1514)))))))
                     : (c <= 1522 || (c < 2036
                                      ? (c < 1786
                                         ? (c < 1749
                                            ? (c < 1646
                                               ? (c >= 1568 && c <= 1610)
                                               : (c <= 1647 || (c >= 1649 && c <= 1747)))
                                            : (c <= 1749 || (c < 1774
                                                             ? (c >= 1765 && c <= 1766)
                                                             : c <= 1775)))
                                         : (c <= 1788 || (c < 1869
                                                          ? (c < 1808
                                                             ? c == 1791
                                                             : (c <= 1808 || (c >= 1810 && c <= 1839)))
                                                          : (c <= 1957 || (c < 1994
                                                                           ? c == 1969
                                                                           : c <= 2026)))))
                                      : (c <= 2037 || (c < 2144
                                                       ? (c < 2084
                                                          ? (c < 2048
                                                             ? c == 2042
                                                             : (c <= 2069 || c == 2074))
                                                          : (c <= 2084 || (c < 2112
                                                                           ? c == 2088
                                                                           : c <= 2136)))
                                                       : (c <= 2154 || (c < 2208
                                                                        ? (c < 2185
                                                                           ? (c >= 2160 && c <= 2183)
                                                                           : c <= 2190)
                                                                        : (c <= 2249 || (c < 2365
                                                                                         ? (c >= 2308 && c <= 2361)
                                                                                         : c <= 2365)))))))))
                  : (c <= 2384 || (c < 2707
                                   ? (c < 2556
                                      ? (c < 2482
                                         ? (c < 2447
                                            ? (c < 2417
                                               ? (c >= 2392 && c <= 2401)
                                               : (c <= 2432 || (c >= 2437 && c <= 2444)))
                                            : (c <= 2448 || (c < 2474
                                                             ? (c >= 2451 && c <= 2472)
                                                             : c <= 2480)))
                                         : (c <= 2482 || (c < 2524
                                                          ? (c < 2493
                                                             ? (c >= 2486 && c <= 2489)
                                                             : (c <= 2493 || c == 2510))
                                                          : (c <= 2525 || (c < 2544
                                                                           ? (c >= 2527 && c <= 2529)
                                                                           : c <= 2545)))))
                                      : (c <= 2556 || (c < 2616
                                                       ? (c < 2602
                                                          ? (c < 2575
                                                             ? (c >= 2565 && c <= 2570)
                                                             : (c <= 2576 || (c >= 2579 && c <= 2600)))
                                                          : (c <= 2608 || (c < 2613
                                                                           ? (c >= 2610 && c <= 2611)
                                                                           : c <= 2614)))
                                                       : (c <= 2617 || (c < 2674
                                                                        ? (c < 2654
                                                                           ? (c >= 2649 && c <= 2652)
                                                                           : c <= 2654)
                                                                        : (c <= 2676 || (c < 2703
                                                                                         ? (c >= 2693 && c <= 2701)
                                                                                         : c <= 2705)))))))
                                   : (c <= 2728 || (c < 2877
                                                    ? (c < 2809
                                                       ? (c < 2749
                                                          ? (c < 2738
                                                             ? (c >= 2730 && c <= 2736)
                                                             : (c <= 2739 || (c >= 2741 && c <= 2745)))
                                                          : (c <= 2749 || (c < 2784
                                                                           ? c == 2768
                                                                           : c <= 2785)))
                                                       : (c <= 2809 || (c < 2858
                                                                        ? (c < 2831
                                                                           ? (c >= 2821 && c <= 2828)
                                                                           : (c <= 2832 || (c >= 2835 && c <= 2856)))
                                                                        : (c <= 2864 || (c < 2869
                                                                                         ? (c >= 2866 && c <= 2867)
                                                                                         : c <= 2873)))))
                                                    : (c <= 2877 || (c < 2962
                                                                     ? (c < 2947
                                                                        ? (c < 2911
                                                                           ? (c >= 2908 && c <= 2909)
                                                                           : (c <= 2913 || c == 2929))
                                                                        : (c <= 2947 || (c < 2958
                                                                                         ? (c >= 2949 && c <= 2954)
                                                                                         : c <= 2960)))
                                                                     : (c <= 2965 || (c < 2974
                                                                                      ? (c < 2972
                                                                                         ? (c >= 2969 && c <= 2970)
                                                                                         : c <= 2972)
                                                                                      : (c <= 2975 || (c < 2984
                                                                                                       ? (c >= 2979 && c <= 2980)
                                                                                                       : c <= 2986)))))))))))
               : (c <= 3001 || (c < 4186
                                ? (c < 3450
                                   ? (c < 3242
                                      ? (c < 3160
                                         ? (c < 3090
                                            ? (c < 3077
                                               ? c == 3024
                                               : (c <= 3084 || (c >= 3086 && c <= 3088)))
                                            : (c <= 3112 || (c < 3133
                                                             ? (c >= 3114 && c <= 3129)
                                                             : c <= 3133)))
                                         : (c <= 3162 || (c < 3205
                                                          ? (c < 3168
                                                             ? c == 3165
                                                             : (c <= 3169 || c == 3200))
                                                          : (c <= 3212 || (c < 3218
                                                                           ? (c >= 3214 && c <= 3216)
                                                                           : c <= 3240)))))
                                      : (c <= 3251 || (c < 3342
                                                       ? (c < 3296
                                                          ? (c < 3261
                                                             ? (c >= 3253 && c <= 3257)
                                                             : (c <= 3261 || (c >= 3293 && c <= 3294)))
                                                          : (c <= 3297 || (c < 3332
                                                                           ? (c >= 3313 && c <= 3314)
                                                                           : c <= 3340)))
                                                       : (c <= 3344 || (c < 3406
                                                                        ? (c < 3389
                                                                           ? (c >= 3346 && c <= 3386)
                                                                           : c <= 3389)
                                                                        : (c <= 3406 || (c < 3423
                                                                                         ? (c >= 3412 && c <= 3414)
                                                                                         : c <= 3425)))))))
                                   : (c <= 3455 || (c < 3751
                                                    ? (c < 3634
                                                       ? (c < 3517
                                                          ? (c < 3482
                                                             ? (c >= 3461 && c <= 3478)
                                                             : (c <= 3505 || (c >= 3507 && c <= 3515)))
                                                          : (c <= 3517 || (c < 3585
                                                                           ? (c >= 3520 && c <= 3526)
                                                                           : c <= 3632)))
                                                       : (c <= 3635 || (c < 3718
                                                                        ? (c < 3713
                                                                           ? (c >= 3648 && c <= 3654)
                                                                           : (c <= 3714 || c == 3716))
                                                                        : (c <= 3722 || (c < 3749
                                                                                         ? (c >= 3724 && c <= 3747)
                                                                                         : c <= 3749)))))
                                                    : (c <= 3760 || (c < 3904
                                                                     ? (c < 3782
                                                                        ? (c < 3773
                                                                           ? (c >= 3762 && c <= 3763)
                                                                           : (c <= 3773 || (c >= 3776 && c <= 3780)))
                                                                        : (c <= 3782 || (c < 3840
                                                                                         ? (c >= 3804 && c <= 3807)
                                                                                         : c <= 3840)))
                                                                     : (c <= 3911 || (c < 4096
                                                                                      ? (c < 3976
                                                                                         ? (c >= 3913 && c <= 3948)
                                                                                         : c <= 3980)
                                                                                      : (c <= 4138 || (c < 4176
                                                                                                       ? c == 4159
                                                                                                       : c <= 4181)))))))))
                                : (c <= 4189 || (c < 5024
                                                 ? (c < 4698
                                                    ? (c < 4295
                                                       ? (c < 4213
                                                          ? (c < 4197
                                                             ? c == 4193
                                                             : (c <= 4198 || (c >= 4206 && c <= 4208)))
                                                          : (c <= 4225 || (c < 4256
                                                                           ? c == 4238
                                                                           : c <= 4293)))
                                                       : (c <= 4295 || (c < 4682
                                                                        ? (c < 4304
                                                                           ? c == 4301
                                                                           : (c <= 4346 || (c >= 4348 && c <= 4680)))
                                                                        : (c <= 4685 || (c < 4696
                                                                                         ? (c >= 4688 && c <= 4694)
                                                                                         : c <= 4696)))))
                                                    : (c <= 4701 || (c < 4802
                                                                     ? (c < 4786
                                                                        ? (c < 4746
                                                                           ? (c >= 4704 && c <= 4744)
                                                                           : (c <= 4749 || (c >= 4752 && c <= 4784)))
                                                                        : (c <= 4789 || (c < 4800
                                                                                         ? (c >= 4792 && c <= 4798)
                                                                                         : c <= 4800)))
                                                                     : (c <= 4805 || (c < 4882
                                                                                      ? (c < 4824
                                                                                         ? (c >= 4808 && c <= 4822)
                                                                                         : c <= 4880)
                                                                                      : (c <= 4885 || (c < 4992
                                                                                                       ? (c >= 4888 && c <= 4954)
                                                                                                       : c <= 5007)))))))
                                                 : (c <= 5109 || (c < 6103
                                                                  ? (c < 5888
                                                                     ? (c < 5761
                                                                        ? (c < 5121
                                                                           ? (c >= 5112 && c <= 5117)
                                                                           : (c <= 5740 || (c >= 5743 && c <= 5759)))
                                                                        : (c <= 5786 || (c < 5873
                                                                                         ? (c >= 5792 && c <= 5866)
                                                                                         : c <= 5880)))
                                                                     : (c <= 5905 || (c < 5984
                                                                                      ? (c < 5952
                                                                                         ? (c >= 5919 && c <= 5937)
                                                                                         : c <= 5969)
                                                                                      : (c <= 5996 || (c < 6016
                                                                                                       ? (c >= 5998 && c <= 6000)
                                                                                                       : c <= 6067)))))
                                                                  : (c <= 6103 || (c < 6400
                                                                                   ? (c < 6279
                                                                                      ? (c < 6176
                                                                                         ? c == 6108
                                                                                         : (c <= 6264 || (c >= 6272 && c <= 6276)))
                                                                                      : (c <= 6312 || (c < 6320
                                                                                                       ? c == 6314
                                                                                                       : c <= 6389)))
                                                                                   : (c <= 6430 || (c < 6528
                                                                                                    ? (c < 6512
                                                                                                       ? (c >= 6480 && c <= 6509)
                                                                                                       : c <= 6516)
                                                                                                    : (c <= 6571 || (c < 6656
                                                                                                                     ? (c >= 6576 && c <= 6601)
                                                                                                                     : c <= 6678)))))))))))))
            : (c <= 6740 || (c < 43261
                             ? (c < 11264
                                ? (c < 8064
                                   ? (c < 7406
                                      ? (c < 7168
                                         ? (c < 7043
                                            ? (c < 6917
                                               ? c == 6823
                                               : (c <= 6963 || (c >= 6981 && c <= 6988)))
                                            : (c <= 7072 || (c < 7098
                                                             ? (c >= 7086 && c <= 7087)
                                                             : c <= 7141)))
                                         : (c <= 7203 || (c < 7312
                                                          ? (c < 7258
                                                             ? (c >= 7245 && c <= 7247)
                                                             : (c <= 7293 || (c >= 7296 && c <= 7304)))
                                                          : (c <= 7354 || (c < 7401
                                                                           ? (c >= 7357 && c <= 7359)
                                                                           : c <= 7404)))))
                                      : (c <= 7411 || (c < 8008
                                                       ? (c < 7680
                                                          ? (c < 7418
                                                             ? (c >= 7413 && c <= 7414)
                                                             : (c <= 7418 || (c >= 7424 && c <= 7615)))
                                                          : (c <= 7957 || (c < 7968
                                                                           ? (c >= 7960 && c <= 7965)
                                                                           : c <= 8005)))
                                                       : (c <= 8013 || (c < 8027
                                                                        ? (c < 8025
                                                                           ? (c >= 8016 && c <= 8023)
                                                                           : c <= 8025)
                                                                        : (c <= 8027 || (c < 8031
                                                                                         ? c == 8029
                                                                                         : c <= 8061)))))))
                                   : (c <= 8116 || (c < 8455
                                                    ? (c < 8160
                                                       ? (c < 8134
                                                          ? (c < 8126
                                                             ? (c >= 8118 && c <= 8124)
                                                             : (c <= 8126 || (c >= 8130 && c <= 8132)))
                                                          : (c <= 8140 || (c < 8150
                                                                           ? (c >= 8144 && c <= 8147)
                                                                           : c <= 8155)))
                                                       : (c <= 8172 || (c < 8319
                                                                        ? (c < 8182
                                                                           ? (c >= 8178 && c <= 8180)
                                                                           : (c <= 8188 || c == 8305))
                                                                        : (c <= 8319 || (c < 8450
                                                                                         ? (c >= 8336 && c <= 8348)
                                                                                         : c <= 8450)))))
                                                    : (c <= 8455 || (c < 8490
                                                                     ? (c < 8484
                                                                        ? (c < 8469
                                                                           ? (c >= 8458 && c <= 8467)
                                                                           : (c <= 8469 || (c >= 8473 && c <= 8477)))
                                                                        : (c <= 8484 || (c < 8488
                                                                                         ? c == 8486
                                                                                         : c <= 8488)))
                                                                     : (c <= 8493 || (c < 8517
                                                                                      ? (c < 8508
                                                                                         ? (c >= 8495 && c <= 8505)
                                                                                         : c <= 8511)
                                                                                      : (c <= 8521 || (c < 8579
                                                                                                       ? c == 8526
                                                                                                       : c <= 8580)))))))))
                                : (c <= 11492 || (c < 12704
                                                  ? (c < 11720
                                                     ? (c < 11631
                                                        ? (c < 11559
                                                           ? (c < 11506
                                                              ? (c >= 11499 && c <= 11502)
                                                              : (c <= 11507 || (c >= 11520 && c <= 11557)))
                                                           : (c <= 11559 || (c < 11568
                                                                             ? c == 11565
                                                                             : c <= 11623)))
                                                        : (c <= 11631 || (c < 11696
                                                                          ? (c < 11680
                                                                             ? (c >= 11648 && c <= 11670)
                                                                             : (c <= 11686 || (c >= 11688 && c <= 11694)))
                                                                          : (c <= 11702 || (c < 11712
                                                                                            ? (c >= 11704 && c <= 11710)
                                                                                            : c <= 11718)))))
                                                     : (c <= 11726 || (c < 12353
                                                                       ? (c < 12293
                                                                          ? (c < 11736
                                                                             ? (c >= 11728 && c <= 11734)
                                                                             : (c <= 11742 || c == 11823))
                                                                          : (c <= 12294 || (c < 12347
                                                                                            ? (c >= 12337 && c <= 12341)
                                                                                            : c <= 12348)))
                                                                       : (c <= 12438 || (c < 12540
                                                                                         ? (c < 12449
                                                                                            ? (c >= 12445 && c <= 12447)
                                                                                            : c <= 12538)
                                                                                         : (c <= 12543 || (c < 12593
                                                                                                           ? (c >= 12549 && c <= 12591)
                                                                                                           : c <= 12686)))))))
                                                  : (c <= 12735 || (c < 42786
                                                                    ? (c < 42240
                                                                       ? (c < 19968
                                                                          ? (c < 13312
                                                                             ? (c >= 12784 && c <= 12799)
                                                                             : (c <= 13312 || c == 19903))
                                                                          : (c <= 19968 || (c < 42192
                                                                                            ? (c >= 40959 && c <= 42124)
                                                                                            : c <= 42237)))
                                                                       : (c <= 42508 || (c < 42623
                                                                                         ? (c < 42538
                                                                                            ? (c >= 42512 && c <= 42527)
                                                                                            : (c <= 42539 || (c >= 42560 && c <= 42606)))
                                                                                         : (c <= 42653 || (c < 42775
                                                                                                           ? (c >= 42656 && c <= 42725)
                                                                                                           : c <= 42783)))))
                                                                    : (c <= 42888 || (c < 43015
                                                                                      ? (c < 42965
                                                                                         ? (c < 42960
                                                                                            ? (c >= 42891 && c <= 42954)
                                                                                            : (c <= 42961 || c == 42963))
                                                                                         : (c <= 42969 || (c < 43011
                                                                                                           ? (c >= 42994 && c <= 43009)
                                                                                                           : c <= 43013)))
                                                                                      : (c <= 43018 || (c < 43138
                                                                                                        ? (c < 43072
                                                                                                           ? (c >= 43020 && c <= 43042)
                                                                                                           : c <= 43123)
                                                                                                        : (c <= 43187 || (c < 43259
                                                                                                                          ? (c >= 43250 && c <= 43255)
                                                                                                                          : c <= 43259)))))))))))
                             : (c <= 43262 || (c < 65345
                                               ? (c < 43816
                                                  ? (c < 43646
                                                     ? (c < 43494
                                                        ? (c < 43396
                                                           ? (c < 43312
                                                              ? (c >= 43274 && c <= 43301)
                                                              : (c <= 43334 || (c >= 43360 && c <= 43388)))
                                                           : (c <= 43442 || (c < 43488
                                                                             ? c == 43471
                                                                             : c <= 43492)))
                                                        : (c <= 43503 || (c < 43588
                                                                          ? (c < 43520
                                                                             ? (c >= 43514 && c <= 43518)
                                                                             : (c <= 43560 || (c >= 43584 && c <= 43586)))
                                                                          : (c <= 43595 || (c < 43642
                                                                                            ? (c >= 43616 && c <= 43638)
                                                                                            : c <= 43642)))))
                                                     : (c <= 43695 || (c < 43744
                                                                       ? (c < 43712
                                                                          ? (c < 43701
                                                                             ? c == 43697
                                                                             : (c <= 43702 || (c >= 43705 && c <= 43709)))
                                                                          : (c <= 43712 || (c < 43739
                                                                                            ? c == 43714
                                                                                            : c <= 43741)))
                                                                       : (c <= 43754 || (c < 43785
                                                                                         ? (c < 43777
                                                                                            ? (c >= 43762 && c <= 43764)
                                                                                            : c <= 43782)
                                                                                         : (c <= 43790 || (c < 43808
                                                                                                           ? (c >= 43793 && c <= 43798)
                                                                                                           : c <= 43814)))))))
                                                  : (c <= 43822 || (c < 64298
                                                                    ? (c < 55243
                                                                       ? (c < 44032
                                                                          ? (c < 43868
                                                                             ? (c >= 43824 && c <= 43866)
                                                                             : (c <= 43881 || (c >= 43888 && c <= 44002)))
                                                                          : (c <= 44032 || (c < 55216
                                                                                            ? c == 55203
                                                                                            : c <= 55238)))
                                                                       : (c <= 55291 || (c < 64275
                                                                                         ? (c < 64112
                                                                                            ? (c >= 63744 && c <= 64109)
                                                                                            : (c <= 64217 || (c >= 64256 && c <= 64262)))
                                                                                         : (c <= 64279 || (c < 64287
                                                                                                           ? c == 64285
                                                                                                           : c <= 64296)))))
                                                                    : (c <= 64310 || (c < 64848
                                                                                      ? (c < 64323
                                                                                         ? (c < 64318
                                                                                            ? (c >= 64312 && c <= 64316)
                                                                                            : (c <= 64318 || (c >= 64320 && c <= 64321)))
                                                                                         : (c <= 64324 || (c < 64467
                                                                                                           ? (c >= 64326 && c <= 64433)
                                                                                                           : c <= 64829)))
                                                                                      : (c <= 64911 || (c < 65136
                                                                                                        ? (c < 65008
                                                                                                           ? (c >= 64914 && c <= 64967)
                                                                                                           : c <= 65019)
                                                                                                        : (c <= 65140 || (c < 65313
                                                                                                                          ? (c >= 65142 && c <= 65276)
                                                                                                                          : c <= 65338)))))))))
                                               : (c <= 65370 || (c < 66928
                                                                 ? (c < 66208
                                                                    ? (c < 65549
                                                                       ? (c < 65490
                                                                          ? (c < 65474
                                                                             ? (c >= 65382 && c <= 65470)
                                                                             : (c <= 65479 || (c >= 65482 && c <= 65487)))
                                                                          : (c <= 65495 || (c < 65536
                                                                                            ? (c >= 65498 && c <= 65500)
                                                                                            : c <= 65547)))
                                                                       : (c <= 65574 || (c < 65616
                                                                                         ? (c < 65596
                                                                                            ? (c >= 65576 && c <= 65594)
                                                                                            : (c <= 65597 || (c >= 65599 && c <= 65613)))
                                                                                         : (c <= 65629 || (c < 66176
                                                                                                           ? (c >= 65664 && c <= 65786)
                                                                                                           : c <= 66204)))))
                                                                    : (c <= 66256 || (c < 66504
                                                                                      ? (c < 66384
                                                                                         ? (c < 66349
                                                                                            ? (c >= 66304 && c <= 66335)
                                                                                            : (c <= 66368 || (c >= 66370 && c <= 66377)))
                                                                                         : (c <= 66421 || (c < 66464
                                                                                                           ? (c >= 66432 && c <= 66461)
                                                                                                           : c <= 66499)))
                                                                                      : (c <= 66511 || (c < 66776
                                                                                                        ? (c < 66736
                                                                                                           ? (c >= 66560 && c <= 66717)
                                                                                                           : c <= 66771)
                                                                                                        : (c <= 66811 || (c < 66864
                                                                                                                          ? (c >= 66816 && c <= 66855)
                                                                                                                          : c <= 66915)))))))
                                                                 : (c <= 66938 || (c < 67506
                                                                                   ? (c < 67003
                                                                                      ? (c < 66967
                                                                                         ? (c < 66956
                                                                                            ? (c >= 66940 && c <= 66954)
                                                                                            : (c <= 66962 || (c >= 66964 && c <= 66965)))
                                                                                         : (c <= 66977 || (c < 66995
                                                                                                           ? (c >= 66979 && c <= 66993)
                                                                                                           : c <= 67001)))
                                                                                      : (c <= 67004 || (c < 67424
                                                                                                        ? (c < 67392
                                                                                                           ? (c >= 67072 && c <= 67382)
                                                                                                           : c <= 67413)
                                                                                                        : (c <= 67431 || (c < 67463
                                                                                                                          ? (c >= 67456 && c <= 67461)
                                                                                                                          : c <= 67504)))))
                                                                                   : (c <= 67514 || (c < 67680
                                                                                                     ? (c < 67639
                                                                                                        ? (c < 67592
                                                                                                           ? (c >= 67584 && c <= 67589)
                                                                                                           : (c <= 67592 || (c >= 67594 && c <= 67637)))
                                                                                                        : (c <= 67640 || (c < 67647
                                                                                                                          ? c == 67644
                                                                                                                          : c <= 67669)))
                                                                                                     : (c <= 67702 || (c < 67828
                                                                                                                       ? (c < 67808
                                                                                                                          ? (c >= 67712 && c <= 67742)
                                                                                                                          : c <= 67826)
                                                                                                                       : (c <= 67829 || (c < 67872
                                                                                                                                         ? (c >= 67840 && c <= 67861)
                                                                                                                                         : c <= 67883)))))))))))))));
}

static inline bool sym__letter_character_set_1(int32_t c) {
    return (c < 6688
            ? (c < 2984
               ? (c < 2365
                  ? (c < 1488
                     ? (c < 886
                        ? (c < 216
                           ? (c < 181
                              ? (c < 'a'
                                 ? (c >= 'A' && c <= 'Z')
                                 : (c <= 'z' || c == 170))
                              : (c <= 181 || (c < 192
                                              ? c == 186
                                              : c <= 214)))
                           : (c <= 246 || (c < 748
                                           ? (c < 710
                                              ? (c >= 248 && c <= 705)
                                              : (c <= 721 || (c >= 736 && c <= 740)))
                                           : (c <= 748 || (c < 880
                                                           ? c == 750
                                                           : c <= 884)))))
                        : (c <= 887 || (c < 931
                                        ? (c < 904
                                           ? (c < 895
                                              ? (c >= 890 && c <= 893)
                                              : (c <= 895 || c == 902))
                                           : (c <= 906 || (c < 910
                                                           ? c == 908
                                                           : c <= 929)))
                                        : (c <= 1013 || (c < 1329
                                                         ? (c < 1162
                                                            ? (c >= 1015 && c <= 1153)
                                                            : c <= 1327)
                                                         : (c <= 1366 || (c < 1376
                                                                          ? c == 1369
                                                                          : c <= 1416)))))))
                     : (c <= 1514 || (c < 1994
                                      ? (c < 1774
                                         ? (c < 1649
                                            ? (c < 1568
                                               ? (c >= 1519 && c <= 1522)
                                               : (c <= 1610 || (c >= 1646 && c <= 1647)))
                                            : (c <= 1747 || (c < 1765
                                                             ? c == 1749
                                                             : c <= 1766)))
                                         : (c <= 1775 || (c < 1810
                                                          ? (c < 1791
                                                             ? (c >= 1786 && c <= 1788)
                                                             : (c <= 1791 || c == 1808))
                                                          : (c <= 1839 || (c < 1969
                                                                           ? (c >= 1869 && c <= 1957)
                                                                           : c <= 1969)))))
                                      : (c <= 2026 || (c < 2112
                                                       ? (c < 2074
                                                          ? (c < 2042
                                                             ? (c >= 2036 && c <= 2037)
                                                             : (c <= 2042 || (c >= 2048 && c <= 2069)))
                                                          : (c <= 2074 || (c < 2088
                                                                           ? c == 2084
                                                                           : c <= 2088)))
                                                       : (c <= 2136 || (c < 2185
                                                                        ? (c < 2160
                                                                           ? (c >= 2144 && c <= 2154)
                                                                           : c <= 2183)
                                                                        : (c <= 2190 || (c < 2308
                                                                                         ? (c >= 2208 && c <= 2249)
                                                                                         : c <= 2361)))))))))
                  : (c <= 2365 || (c < 2703
                                   ? (c < 2544
                                      ? (c < 2474
                                         ? (c < 2437
                                            ? (c < 2392
                                               ? c == 2384
                                               : (c <= 2401 || (c >= 2417 && c <= 2432)))
                                            : (c <= 2444 || (c < 2451
                                                             ? (c >= 2447 && c <= 2448)
                                                             : c <= 2472)))
                                         : (c <= 2480 || (c < 2510
                                                          ? (c < 2486
                                                             ? c == 2482
                                                             : (c <= 2489 || c == 2493))
                                                          : (c <= 2510 || (c < 2527
                                                                           ? (c >= 2524 && c <= 2525)
                                                                           : c <= 2529)))))
                                      : (c <= 2545 || (c < 2613
                                                       ? (c < 2579
                                                          ? (c < 2565
                                                             ? c == 2556
                                                             : (c <= 2570 || (c >= 2575 && c <= 2576)))
                                                          : (c <= 2600 || (c < 2610
                                                                           ? (c >= 2602 && c <= 2608)
                                                                           : c <= 2611)))
                                                       : (c <= 2614 || (c < 2654
                                                                        ? (c < 2649
                                                                           ? (c >= 2616 && c <= 2617)
                                                                           : c <= 2652)
                                                                        : (c <= 2654 || (c < 2693
                                                                                         ? (c >= 2674 && c <= 2676)
                                                                                         : c <= 2701)))))))
                                   : (c <= 2705 || (c < 2869
                                                    ? (c < 2784
                                                       ? (c < 2741
                                                          ? (c < 2730
                                                             ? (c >= 2707 && c <= 2728)
                                                             : (c <= 2736 || (c >= 2738 && c <= 2739)))
                                                          : (c <= 2745 || (c < 2768
                                                                           ? c == 2749
                                                                           : c <= 2768)))
                                                       : (c <= 2785 || (c < 2835
                                                                        ? (c < 2821
                                                                           ? c == 2809
                                                                           : (c <= 2828 || (c >= 2831 && c <= 2832)))
                                                                        : (c <= 2856 || (c < 2866
                                                                                         ? (c >= 2858 && c <= 2864)
                                                                                         : c <= 2867)))))
                                                    : (c <= 2873 || (c < 2958
                                                                     ? (c < 2929
                                                                        ? (c < 2908
                                                                           ? c == 2877
                                                                           : (c <= 2909 || (c >= 2911 && c <= 2913)))
                                                                        : (c <= 2929 || (c < 2949
                                                                                         ? c == 2947
                                                                                         : c <= 2954)))
                                                                     : (c <= 2960 || (c < 2972
                                                                                      ? (c < 2969
                                                                                         ? (c >= 2962 && c <= 2965)
                                                                                         : c <= 2970)
                                                                                      : (c <= 2972 || (c < 2979
                                                                                                       ? (c >= 2974 && c <= 2975)
                                                                                                       : c <= 2980)))))))))))
               : (c <= 2986 || (c < 4176
                                ? (c < 3423
                                   ? (c < 3218
                                      ? (c < 3133
                                         ? (c < 3086
                                            ? (c < 3024
                                               ? (c >= 2990 && c <= 3001)
                                               : (c <= 3024 || (c >= 3077 && c <= 3084)))
                                            : (c <= 3088 || (c < 3114
                                                             ? (c >= 3090 && c <= 3112)
                                                             : c <= 3129)))
                                         : (c <= 3133 || (c < 3200
                                                          ? (c < 3165
                                                             ? (c >= 3160 && c <= 3162)
                                                             : (c <= 3165 || (c >= 3168 && c <= 3169)))
                                                          : (c <= 3200 || (c < 3214
                                                                           ? (c >= 3205 && c <= 3212)
                                                                           : c <= 3216)))))
                                      : (c <= 3240 || (c < 3332
                                                       ? (c < 3293
                                                          ? (c < 3253
                                                             ? (c >= 3242 && c <= 3251)
                                                             : (c <= 3257 || c == 3261))
                                                          : (c <= 3294 || (c < 3313
                                                                           ? (c >= 3296 && c <= 3297)
                                                                           : c <= 3314)))
                                                       : (c <= 3340 || (c < 3389
                                                                        ? (c < 3346
                                                                           ? (c >= 3342 && c <= 3344)
                                                                           : c <= 3386)
                                                                        : (c <= 3389 || (c < 3412
                                                                                         ? c == 3406
                                                                                         : c <= 3414)))))))
                                   : (c <= 3425 || (c < 3749
                                                    ? (c < 3585
                                                       ? (c < 3507
                                                          ? (c < 3461
                                                             ? (c >= 3450 && c <= 3455)
                                                             : (c <= 3478 || (c >= 3482 && c <= 3505)))
                                                          : (c <= 3515 || (c < 3520
                                                                           ? c == 3517
                                                                           : c <= 3526)))
                                                       : (c <= 3632 || (c < 3716
                                                                        ? (c < 3648
                                                                           ? (c >= 3634 && c <= 3635)
                                                                           : (c <= 3654 || (c >= 3713 && c <= 3714)))
                                                                        : (c <= 3716 || (c < 3724
                                                                                         ? (c >= 3718 && c <= 3722)
                                                                                         : c <= 3747)))))
                                                    : (c <= 3749 || (c < 3840
                                                                     ? (c < 3776
                                                                        ? (c < 3762
                                                                           ? (c >= 3751 && c <= 3760)
                                                                           : (c <= 3763 || c == 3773))
                                                                        : (c <= 3780 || (c < 3804
                                                                                         ? c == 3782
                                                                                         : c <= 3807)))
                                                                     : (c <= 3840 || (c < 3976
                                                                                      ? (c < 3913
                                                                                         ? (c >= 3904 && c <= 3911)
                                                                                         : c <= 3948)
                                                                                      : (c <= 3980 || (c < 4159
                                                                                                       ? (c >= 4096 && c <= 4138)
                                                                                                       : c <= 4159)))))))))
                                : (c <= 4181 || (c < 4992
                                                 ? (c < 4696
                                                    ? (c < 4256
                                                       ? (c < 4206
                                                          ? (c < 4193
                                                             ? (c >= 4186 && c <= 4189)
                                                             : (c <= 4193 || (c >= 4197 && c <= 4198)))
                                                          : (c <= 4208 || (c < 4238
                                                                           ? (c >= 4213 && c <= 4225)
                                                                           : c <= 4238)))
                                                       : (c <= 4293 || (c < 4348
                                                                        ? (c < 4301
                                                                           ? c == 4295
                                                                           : (c <= 4301 || (c >= 4304 && c <= 4346)))
                                                                        : (c <= 4680 || (c < 4688
                                                                                         ? (c >= 4682 && c <= 4685)
                                                                                         : c <= 4694)))))
                                                    : (c <= 4696 || (c < 4800
                                                                     ? (c < 4752
                                                                        ? (c < 4704
                                                                           ? (c >= 4698 && c <= 4701)
                                                                           : (c <= 4744 || (c >= 4746 && c <= 4749)))
                                                                        : (c <= 4784 || (c < 4792
                                                                                         ? (c >= 4786 && c <= 4789)
                                                                                         : c <= 4798)))
                                                                     : (c <= 4800 || (c < 4824
                                                                                      ? (c < 4808
                                                                                         ? (c >= 4802 && c <= 4805)
                                                                                         : c <= 4822)
                                                                                      : (c <= 4880 || (c < 4888
                                                                                                       ? (c >= 4882 && c <= 4885)
                                                                                                       : c <= 4954)))))))
                                                 : (c <= 5007 || (c < 6103
                                                                  ? (c < 5873
                                                                     ? (c < 5743
                                                                        ? (c < 5112
                                                                           ? (c >= 5024 && c <= 5109)
                                                                           : (c <= 5117 || (c >= 5121 && c <= 5740)))
                                                                        : (c <= 5759 || (c < 5792
                                                                                         ? (c >= 5761 && c <= 5786)
                                                                                         : c <= 5866)))
                                                                     : (c <= 5880 || (c < 5984
                                                                                      ? (c < 5919
                                                                                         ? (c >= 5888 && c <= 5905)
                                                                                         : (c <= 5937 || (c >= 5952 && c <= 5969)))
                                                                                      : (c <= 5996 || (c < 6016
                                                                                                       ? (c >= 5998 && c <= 6000)
                                                                                                       : c <= 6067)))))
                                                                  : (c <= 6103 || (c < 6400
                                                                                   ? (c < 6279
                                                                                      ? (c < 6176
                                                                                         ? c == 6108
                                                                                         : (c <= 6264 || (c >= 6272 && c <= 6276)))
                                                                                      : (c <= 6312 || (c < 6320
                                                                                                       ? c == 6314
                                                                                                       : c <= 6389)))
                                                                                   : (c <= 6430 || (c < 6528
                                                                                                    ? (c < 6512
                                                                                                       ? (c >= 6480 && c <= 6509)
                                                                                                       : c <= 6516)
                                                                                                    : (c <= 6571 || (c < 6656
                                                                                                                     ? (c >= 6576 && c <= 6601)
                                                                                                                     : c <= 6678)))))))))))))
            : (c <= 6740 || (c < 43261
                             ? (c < 11264
                                ? (c < 8064
                                   ? (c < 7406
                                      ? (c < 7168
                                         ? (c < 7043
                                            ? (c < 6917
                                               ? c == 6823
                                               : (c <= 6963 || (c >= 6981 && c <= 6988)))
                                            : (c <= 7072 || (c < 7098
                                                             ? (c >= 7086 && c <= 7087)
                                                             : c <= 7141)))
                                         : (c <= 7203 || (c < 7312
                                                          ? (c < 7258
                                                             ? (c >= 7245 && c <= 7247)
                                                             : (c <= 7293 || (c >= 7296 && c <= 7304)))
                                                          : (c <= 7354 || (c < 7401
                                                                           ? (c >= 7357 && c <= 7359)
                                                                           : c <= 7404)))))
                                      : (c <= 7411 || (c < 8008
                                                       ? (c < 7680
                                                          ? (c < 7418
                                                             ? (c >= 7413 && c <= 7414)
                                                             : (c <= 7418 || (c >= 7424 && c <= 7615)))
                                                          : (c <= 7957 || (c < 7968
                                                                           ? (c >= 7960 && c <= 7965)
                                                                           : c <= 8005)))
                                                       : (c <= 8013 || (c < 8027
                                                                        ? (c < 8025
                                                                           ? (c >= 8016 && c <= 8023)
                                                                           : c <= 8025)
                                                                        : (c <= 8027 || (c < 8031
                                                                                         ? c == 8029
                                                                                         : c <= 8061)))))))
                                   : (c <= 8116 || (c < 8455
                                                    ? (c < 8160
                                                       ? (c < 8134
                                                          ? (c < 8126
                                                             ? (c >= 8118 && c <= 8124)
                                                             : (c <= 8126 || (c >= 8130 && c <= 8132)))
                                                          : (c <= 8140 || (c < 8150
                                                                           ? (c >= 8144 && c <= 8147)
                                                                           : c <= 8155)))
                                                       : (c <= 8172 || (c < 8319
                                                                        ? (c < 8182
                                                                           ? (c >= 8178 && c <= 8180)
                                                                           : (c <= 8188 || c == 8305))
                                                                        : (c <= 8319 || (c < 8450
                                                                                         ? (c >= 8336 && c <= 8348)
                                                                                         : c <= 8450)))))
                                                    : (c <= 8455 || (c < 8490
                                                                     ? (c < 8484
                                                                        ? (c < 8469
                                                                           ? (c >= 8458 && c <= 8467)
                                                                           : (c <= 8469 || (c >= 8473 && c <= 8477)))
                                                                        : (c <= 8484 || (c < 8488
                                                                                         ? c == 8486
                                                                                         : c <= 8488)))
                                                                     : (c <= 8493 || (c < 8517
                                                                                      ? (c < 8508
                                                                                         ? (c >= 8495 && c <= 8505)
                                                                                         : c <= 8511)
                                                                                      : (c <= 8521 || (c < 8579
                                                                                                       ? c == 8526
                                                                                                       : c <= 8580)))))))))
                                : (c <= 11492 || (c < 12704
                                                  ? (c < 11720
                                                     ? (c < 11631
                                                        ? (c < 11559
                                                           ? (c < 11506
                                                              ? (c >= 11499 && c <= 11502)
                                                              : (c <= 11507 || (c >= 11520 && c <= 11557)))
                                                           : (c <= 11559 || (c < 11568
                                                                             ? c == 11565
                                                                             : c <= 11623)))
                                                        : (c <= 11631 || (c < 11696
                                                                          ? (c < 11680
                                                                             ? (c >= 11648 && c <= 11670)
                                                                             : (c <= 11686 || (c >= 11688 && c <= 11694)))
                                                                          : (c <= 11702 || (c < 11712
                                                                                            ? (c >= 11704 && c <= 11710)
                                                                                            : c <= 11718)))))
                                                     : (c <= 11726 || (c < 12353
                                                                       ? (c < 12293
                                                                          ? (c < 11736
                                                                             ? (c >= 11728 && c <= 11734)
                                                                             : (c <= 11742 || c == 11823))
                                                                          : (c <= 12294 || (c < 12347
                                                                                            ? (c >= 12337 && c <= 12341)
                                                                                            : c <= 12348)))
                                                                       : (c <= 12438 || (c < 12540
                                                                                         ? (c < 12449
                                                                                            ? (c >= 12445 && c <= 12447)
                                                                                            : c <= 12538)
                                                                                         : (c <= 12543 || (c < 12593
                                                                                                           ? (c >= 12549 && c <= 12591)
                                                                                                           : c <= 12686)))))))
                                                  : (c <= 12735 || (c < 42786
                                                                    ? (c < 42240
                                                                       ? (c < 19968
                                                                          ? (c < 13312
                                                                             ? (c >= 12784 && c <= 12799)
                                                                             : (c <= 13312 || c == 19903))
                                                                          : (c <= 19968 || (c < 42192
                                                                                            ? (c >= 40959 && c <= 42124)
                                                                                            : c <= 42237)))
                                                                       : (c <= 42508 || (c < 42623
                                                                                         ? (c < 42538
                                                                                            ? (c >= 42512 && c <= 42527)
                                                                                            : (c <= 42539 || (c >= 42560 && c <= 42606)))
                                                                                         : (c <= 42653 || (c < 42775
                                                                                                           ? (c >= 42656 && c <= 42725)
                                                                                                           : c <= 42783)))))
                                                                    : (c <= 42888 || (c < 43015
                                                                                      ? (c < 42965
                                                                                         ? (c < 42960
                                                                                            ? (c >= 42891 && c <= 42954)
                                                                                            : (c <= 42961 || c == 42963))
                                                                                         : (c <= 42969 || (c < 43011
                                                                                                           ? (c >= 42994 && c <= 43009)
                                                                                                           : c <= 43013)))
                                                                                      : (c <= 43018 || (c < 43138
                                                                                                        ? (c < 43072
                                                                                                           ? (c >= 43020 && c <= 43042)
                                                                                                           : c <= 43123)
                                                                                                        : (c <= 43187 || (c < 43259
                                                                                                                          ? (c >= 43250 && c <= 43255)
                                                                                                                          : c <= 43259)))))))))))
                             : (c <= 43262 || (c < 65345
                                               ? (c < 43816
                                                  ? (c < 43646
                                                     ? (c < 43494
                                                        ? (c < 43396
                                                           ? (c < 43312
                                                              ? (c >= 43274 && c <= 43301)
                                                              : (c <= 43334 || (c >= 43360 && c <= 43388)))
                                                           : (c <= 43442 || (c < 43488
                                                                             ? c == 43471
                                                                             : c <= 43492)))
                                                        : (c <= 43503 || (c < 43588
                                                                          ? (c < 43520
                                                                             ? (c >= 43514 && c <= 43518)
                                                                             : (c <= 43560 || (c >= 43584 && c <= 43586)))
                                                                          : (c <= 43595 || (c < 43642
                                                                                            ? (c >= 43616 && c <= 43638)
                                                                                            : c <= 43642)))))
                                                     : (c <= 43695 || (c < 43744
                                                                       ? (c < 43712
                                                                          ? (c < 43701
                                                                             ? c == 43697
                                                                             : (c <= 43702 || (c >= 43705 && c <= 43709)))
                                                                          : (c <= 43712 || (c < 43739
                                                                                            ? c == 43714
                                                                                            : c <= 43741)))
                                                                       : (c <= 43754 || (c < 43785
                                                                                         ? (c < 43777
                                                                                            ? (c >= 43762 && c <= 43764)
                                                                                            : c <= 43782)
                                                                                         : (c <= 43790 || (c < 43808
                                                                                                           ? (c >= 43793 && c <= 43798)
                                                                                                           : c <= 43814)))))))
                                                  : (c <= 43822 || (c < 64298
                                                                    ? (c < 55243
                                                                       ? (c < 44032
                                                                          ? (c < 43868
                                                                             ? (c >= 43824 && c <= 43866)
                                                                             : (c <= 43881 || (c >= 43888 && c <= 44002)))
                                                                          : (c <= 44032 || (c < 55216
                                                                                            ? c == 55203
                                                                                            : c <= 55238)))
                                                                       : (c <= 55291 || (c < 64275
                                                                                         ? (c < 64112
                                                                                            ? (c >= 63744 && c <= 64109)
                                                                                            : (c <= 64217 || (c >= 64256 && c <= 64262)))
                                                                                         : (c <= 64279 || (c < 64287
                                                                                                           ? c == 64285
                                                                                                           : c <= 64296)))))
                                                                    : (c <= 64310 || (c < 64848
                                                                                      ? (c < 64323
                                                                                         ? (c < 64318
                                                                                            ? (c >= 64312 && c <= 64316)
                                                                                            : (c <= 64318 || (c >= 64320 && c <= 64321)))
                                                                                         : (c <= 64324 || (c < 64467
                                                                                                           ? (c >= 64326 && c <= 64433)
                                                                                                           : c <= 64829)))
                                                                                      : (c <= 64911 || (c < 65136
                                                                                                        ? (c < 65008
                                                                                                           ? (c >= 64914 && c <= 64967)
                                                                                                           : c <= 65019)
                                                                                                        : (c <= 65140 || (c < 65313
                                                                                                                          ? (c >= 65142 && c <= 65276)
                                                                                                                          : c <= 65338)))))))))
                                               : (c <= 65370 || (c < 66928
                                                                 ? (c < 66208
                                                                    ? (c < 65549
                                                                       ? (c < 65490
                                                                          ? (c < 65474
                                                                             ? (c >= 65382 && c <= 65470)
                                                                             : (c <= 65479 || (c >= 65482 && c <= 65487)))
                                                                          : (c <= 65495 || (c < 65536
                                                                                            ? (c >= 65498 && c <= 65500)
                                                                                            : c <= 65547)))
                                                                       : (c <= 65574 || (c < 65616
                                                                                         ? (c < 65596
                                                                                            ? (c >= 65576 && c <= 65594)
                                                                                            : (c <= 65597 || (c >= 65599 && c <= 65613)))
                                                                                         : (c <= 65629 || (c < 66176
                                                                                                           ? (c >= 65664 && c <= 65786)
                                                                                                           : c <= 66204)))))
                                                                    : (c <= 66256 || (c < 66504
                                                                                      ? (c < 66384
                                                                                         ? (c < 66349
                                                                                            ? (c >= 66304 && c <= 66335)
                                                                                            : (c <= 66368 || (c >= 66370 && c <= 66377)))
                                                                                         : (c <= 66421 || (c < 66464
                                                                                                           ? (c >= 66432 && c <= 66461)
                                                                                                           : c <= 66499)))
                                                                                      : (c <= 66511 || (c < 66776
                                                                                                        ? (c < 66736
                                                                                                           ? (c >= 66560 && c <= 66717)
                                                                                                           : c <= 66771)
                                                                                                        : (c <= 66811 || (c < 66864
                                                                                                                          ? (c >= 66816 && c <= 66855)
                                                                                                                          : c <= 66915)))))))
                                                                 : (c <= 66938 || (c < 67506
                                                                                   ? (c < 67003
                                                                                      ? (c < 66967
                                                                                         ? (c < 66956
                                                                                            ? (c >= 66940 && c <= 66954)
                                                                                            : (c <= 66962 || (c >= 66964 && c <= 66965)))
                                                                                         : (c <= 66977 || (c < 66995
                                                                                                           ? (c >= 66979 && c <= 66993)
                                                                                                           : c <= 67001)))
                                                                                      : (c <= 67004 || (c < 67424
                                                                                                        ? (c < 67392
                                                                                                           ? (c >= 67072 && c <= 67382)
                                                                                                           : c <= 67413)
                                                                                                        : (c <= 67431 || (c < 67463
                                                                                                                          ? (c >= 67456 && c <= 67461)
                                                                                                                          : c <= 67504)))))
                                                                                   : (c <= 67514 || (c < 67680
                                                                                                     ? (c < 67639
                                                                                                        ? (c < 67592
                                                                                                           ? (c >= 67584 && c <= 67589)
                                                                                                           : (c <= 67592 || (c >= 67594 && c <= 67637)))
                                                                                                        : (c <= 67640 || (c < 67647
                                                                                                                          ? c == 67644
                                                                                                                          : c <= 67669)))
                                                                                                     : (c <= 67702 || (c < 67828
                                                                                                                       ? (c < 67808
                                                                                                                          ? (c >= 67712 && c <= 67742)
                                                                                                                          : c <= 67826)
                                                                                                                       : (c <= 67829 || (c < 67872
                                                                                                                                         ? (c >= 67840 && c <= 67861)
                                                                                                                                         : c <= 67883)))))))))))))));
}

static inline bool sym__uppercase_letter_character_set_1(int32_t c) {
    return (c < 7734
            ? (c < 913
               ? (c < 422
                  ? (c < 327
                     ? (c < 288
                        ? (c < 268
                           ? (c < 258
                              ? (c < 216
                                 ? (c < 192
                                    ? (c >= 'A' && c <= 'Z')
                                    : c <= 214)
                                 : (c <= 222 || c == 256))
                              : (c <= 258 || (c < 264
                                              ? (c < 262
                                                 ? c == 260
                                                 : c <= 262)
                                              : (c <= 264 || c == 266))))
                           : (c <= 268 || (c < 278
                                           ? (c < 274
                                              ? (c < 272
                                                 ? c == 270
                                                 : c <= 272)
                                              : (c <= 274 || c == 276))
                                           : (c <= 278 || (c < 284
                                                           ? (c < 282
                                                              ? c == 280
                                                              : c <= 282)
                                                           : (c <= 284 || c == 286))))))
                        : (c <= 288 || (c < 308
                                        ? (c < 298
                                           ? (c < 294
                                              ? (c < 292
                                                 ? c == 290
                                                 : c <= 292)
                                              : (c <= 294 || c == 296))
                                           : (c <= 298 || (c < 304
                                                           ? (c < 302
                                                              ? c == 300
                                                              : c <= 302)
                                                           : (c <= 304 || c == 306))))
                                        : (c <= 308 || (c < 319
                                                        ? (c < 315
                                                           ? (c < 313
                                                              ? c == 310
                                                              : c <= 313)
                                                           : (c <= 315 || c == 317))
                                                        : (c <= 319 || (c < 323
                                                                        ? c == 321
                                                                        : (c <= 323 || c == 325))))))))
                     : (c <= 327 || (c < 366
                                     ? (c < 348
                                        ? (c < 338
                                           ? (c < 334
                                              ? (c < 332
                                                 ? c == 330
                                                 : c <= 332)
                                              : (c <= 334 || c == 336))
                                           : (c <= 338 || (c < 344
                                                           ? (c < 342
                                                              ? c == 340
                                                              : c <= 342)
                                                           : (c <= 344 || c == 346))))
                                        : (c <= 348 || (c < 358
                                                        ? (c < 354
                                                           ? (c < 352
                                                              ? c == 350
                                                              : c <= 352)
                                                           : (c <= 354 || c == 356))
                                                        : (c <= 358 || (c < 362
                                                                        ? c == 360
                                                                        : (c <= 362 || c == 364))))))
                                     : (c <= 366 || (c < 390
                                                     ? (c < 376
                                                        ? (c < 372
                                                           ? (c < 370
                                                              ? c == 368
                                                              : c <= 370)
                                                           : (c <= 372 || c == 374))
                                                        : (c <= 377 || (c < 385
                                                                        ? (c < 381
                                                                           ? c == 379
                                                                           : c <= 381)
                                                                        : (c <= 386 || c == 388))))
                                                     : (c <= 391 || (c < 412
                                                                     ? (c < 403
                                                                        ? (c < 398
                                                                           ? (c >= 393 && c <= 395)
                                                                           : c <= 401)
                                                                        : (c <= 404 || (c >= 406 && c <= 408)))
                                                                     : (c <= 413 || (c < 418
                                                                                     ? (c >= 415 && c <= 416)
                                                                                     : (c <= 418 || c == 420))))))))))
                  : (c <= 423 || (c < 520
                                  ? (c < 478
                                     ? (c < 458
                                        ? (c < 437
                                           ? (c < 430
                                              ? (c < 428
                                                 ? c == 425
                                                 : c <= 428)
                                              : (c <= 431 || (c >= 433 && c <= 435)))
                                           : (c <= 437 || (c < 452
                                                           ? (c < 444
                                                              ? (c >= 439 && c <= 440)
                                                              : c <= 444)
                                                           : (c <= 452 || c == 455))))
                                        : (c <= 458 || (c < 469
                                                        ? (c < 465
                                                           ? (c < 463
                                                              ? c == 461
                                                              : c <= 463)
                                                           : (c <= 465 || c == 467))
                                                        : (c <= 469 || (c < 473
                                                                        ? c == 471
                                                                        : (c <= 473 || c == 475))))))
                                     : (c <= 478 || (c < 500
                                                     ? (c < 488
                                                        ? (c < 484
                                                           ? (c < 482
                                                              ? c == 480
                                                              : c <= 482)
                                                           : (c <= 484 || c == 486))
                                                        : (c <= 488 || (c < 494
                                                                        ? (c < 492
                                                                           ? c == 490
                                                                           : c <= 492)
                                                                        : (c <= 494 || c == 497))))
                                                     : (c <= 500 || (c < 512
                                                                     ? (c < 508
                                                                        ? (c < 506
                                                                           ? (c >= 502 && c <= 504)
                                                                           : c <= 506)
                                                                        : (c <= 508 || c == 510))
                                                                     : (c <= 512 || (c < 516
                                                                                     ? c == 514
                                                                                     : (c <= 516 || c == 518))))))))
                                  : (c <= 520 || (c < 558
                                                  ? (c < 540
                                                     ? (c < 530
                                                        ? (c < 526
                                                           ? (c < 524
                                                              ? c == 522
                                                              : c <= 524)
                                                           : (c <= 526 || c == 528))
                                                        : (c <= 530 || (c < 536
                                                                        ? (c < 534
                                                                           ? c == 532
                                                                           : c <= 534)
                                                                        : (c <= 536 || c == 538))))
                                                     : (c <= 540 || (c < 550
                                                                     ? (c < 546
                                                                        ? (c < 544
                                                                           ? c == 542
                                                                           : c <= 544)
                                                                        : (c <= 546 || c == 548))
                                                                     : (c <= 550 || (c < 554
                                                                                     ? c == 552
                                                                                     : (c <= 554 || c == 556))))))
                                                  : (c <= 558 || (c < 590
                                                                  ? (c < 577
                                                                     ? (c < 570
                                                                        ? (c < 562
                                                                           ? c == 560
                                                                           : c <= 562)
                                                                        : (c <= 571 || (c >= 573 && c <= 574)))
                                                                     : (c <= 577 || (c < 586
                                                                                     ? (c < 584
                                                                                        ? (c >= 579 && c <= 582)
                                                                                        : c <= 584)
                                                                                     : (c <= 586 || c == 588))))
                                                                  : (c <= 590 || (c < 902
                                                                                  ? (c < 886
                                                                                     ? (c < 882
                                                                                        ? c == 880
                                                                                        : c <= 882)
                                                                                     : (c <= 886 || c == 895))
                                                                                  : (c <= 902 || (c < 908
                                                                                                  ? (c >= 904 && c <= 906)
                                                                                                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
               : (c <= 929 || (c < 1244
                               ? (c < 1166
                                  ? (c < 1120
                                     ? (c < 996
                                        ? (c < 986
                                           ? (c < 978
                                              ? (c < 975
                                                 ? (c >= 931 && c <= 939)
                                                 : c <= 975)
                                              : (c <= 980 || c == 984))
                                           : (c <= 986 || (c < 992
                                                           ? (c < 990
                                                              ? c == 988
                                                              : c <= 990)
                                                           : (c <= 992 || c == 994))))
                                        : (c <= 996 || (c < 1006
                                                        ? (c < 1002
                                                           ? (c < 1000
                                                              ? c == 998
                                                              : c <= 1000)
                                                           : (c <= 1002 || c == 1004))
                                                        : (c <= 1006 || (c < 1017
                                                                         ? (c < 1015
                                                                            ? c == 1012
                                                                            : c <= 1015)
                                                                         : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
                                     : (c <= 1120 || (c < 1140
                                                      ? (c < 1130
                                                         ? (c < 1126
                                                            ? (c < 1124
                                                               ? c == 1122
                                                               : c <= 1124)
                                                            : (c <= 1126 || c == 1128))
                                                         : (c <= 1130 || (c < 1136
                                                                          ? (c < 1134
                                                                             ? c == 1132
                                                                             : c <= 1134)
                                                                          : (c <= 1136 || c == 1138))))
                                                      : (c <= 1140 || (c < 1150
                                                                       ? (c < 1146
                                                                          ? (c < 1144
                                                                             ? c == 1142
                                                                             : c <= 1144)
                                                                          : (c <= 1146 || c == 1148))
                                                                       : (c <= 1150 || (c < 1162
                                                                                        ? c == 1152
                                                                                        : (c <= 1162 || c == 1164))))))))
                                  : (c <= 1166 || (c < 1204
                                                   ? (c < 1186
                                                      ? (c < 1176
                                                         ? (c < 1172
                                                            ? (c < 1170
                                                               ? c == 1168
                                                               : c <= 1170)
                                                            : (c <= 1172 || c == 1174))
                                                         : (c <= 1176 || (c < 1182
                                                                          ? (c < 1180
                                                                             ? c == 1178
                                                                             : c <= 1180)
                                                                          : (c <= 1182 || c == 1184))))
                                                      : (c <= 1186 || (c < 1196
                                                                       ? (c < 1192
                                                                          ? (c < 1190
                                                                             ? c == 1188
                                                                             : c <= 1190)
                                                                          : (c <= 1192 || c == 1194))
                                                                       : (c <= 1196 || (c < 1200
                                                                                        ? c == 1198
                                                                                        : (c <= 1200 || c == 1202))))))
                                                   : (c <= 1204 || (c < 1225
                                                                    ? (c < 1214
                                                                       ? (c < 1210
                                                                          ? (c < 1208
                                                                             ? c == 1206
                                                                             : c <= 1208)
                                                                          : (c <= 1210 || c == 1212))
                                                                       : (c <= 1214 || (c < 1221
                                                                                        ? (c < 1219
                                                                                           ? (c >= 1216 && c <= 1217)
                                                                                           : c <= 1219)
                                                                                        : (c <= 1221 || c == 1223))))
                                                                    : (c <= 1225 || (c < 1236
                                                                                     ? (c < 1232
                                                                                        ? (c < 1229
                                                                                           ? c == 1227
                                                                                           : c <= 1229)
                                                                                        : (c <= 1232 || c == 1234))
                                                                                     : (c <= 1236 || (c < 1240
                                                                                                      ? c == 1238
                                                                                                      : (c <= 1240 || c == 1242))))))))))
                               : (c <= 1244 || (c < 1320
                                                ? (c < 1282
                                                   ? (c < 1264
                                                      ? (c < 1254
                                                         ? (c < 1250
                                                            ? (c < 1248
                                                               ? c == 1246
                                                               : c <= 1248)
                                                            : (c <= 1250 || c == 1252))
                                                         : (c <= 1254 || (c < 1260
                                                                          ? (c < 1258
                                                                             ? c == 1256
                                                                             : c <= 1258)
                                                                          : (c <= 1260 || c == 1262))))
                                                      : (c <= 1264 || (c < 1274
                                                                       ? (c < 1270
                                                                          ? (c < 1268
                                                                             ? c == 1266
                                                                             : c <= 1268)
                                                                          : (c <= 1270 || c == 1272))
                                                                       : (c <= 1274 || (c < 1278
                                                                                        ? c == 1276
                                                                                        : (c <= 1278 || c == 1280))))))
                                                   : (c <= 1282 || (c < 1302
                                                                    ? (c < 1292
                                                                       ? (c < 1288
                                                                          ? (c < 1286
                                                                             ? c == 1284
                                                                             : c <= 1286)
                                                                          : (c <= 1288 || c == 1290))
                                                                       : (c <= 1292 || (c < 1298
                                                                                        ? (c < 1296
                                                                                           ? c == 1294
                                                                                           : c <= 1296)
                                                                                        : (c <= 1298 || c == 1300))))
                                                                    : (c <= 1302 || (c < 1312
                                                                                     ? (c < 1308
                                                                                        ? (c < 1306
                                                                                           ? c == 1304
                                                                                           : c <= 1306)
                                                                                        : (c <= 1308 || c == 1310))
                                                                                     : (c <= 1312 || (c < 1316
                                                                                                      ? c == 1314
                                                                                                      : (c <= 1316 || c == 1318))))))))
                                                : (c <= 1320 || (c < 7696
                                                                 ? (c < 7357
                                                                    ? (c < 4256
                                                                       ? (c < 1326
                                                                          ? (c < 1324
                                                                             ? c == 1322
                                                                             : c <= 1324)
                                                                          : (c <= 1326 || (c >= 1329 && c <= 1366)))
                                                                       : (c <= 4293 || (c < 5024
                                                                                        ? (c < 4301
                                                                                           ? c == 4295
                                                                                           : c <= 4301)
                                                                                        : (c <= 5109 || (c >= 7312 && c <= 7354)))))
                                                                    : (c <= 7359 || (c < 7688
                                                                                     ? (c < 7684
                                                                                        ? (c < 7682
                                                                                           ? c == 7680
                                                                                           : c <= 7682)
                                                                                        : (c <= 7684 || c == 7686))
                                                                                     : (c <= 7688 || (c < 7692
                                                                                                      ? c == 7690
                                                                                                      : (c <= 7692 || c == 7694))))))
                                                                 : (c <= 7696 || (c < 7716
                                                                                  ? (c < 7706
                                                                                     ? (c < 7702
                                                                                        ? (c < 7700
                                                                                           ? c == 7698
                                                                                           : c <= 7700)
                                                                                        : (c <= 7702 || c == 7704))
                                                                                     : (c <= 7706 || (c < 7712
                                                                                                      ? (c < 7710
                                                                                                         ? c == 7708
                                                                                                         : c <= 7710)
                                                                                                      : (c <= 7712 || c == 7714))))
                                                                                  : (c <= 7716 || (c < 7726
                                                                                                   ? (c < 7722
                                                                                                      ? (c < 7720
                                                                                                         ? c == 7718
                                                                                                         : c <= 7720)
                                                                                                      : (c <= 7722 || c == 7724))
                                                                                                   : (c <= 7726 || (c < 7730
                                                                                                                    ? c == 7728
                                                                                                                    : (c <= 7730 || c == 7732))))))))))))))
            : (c <= 7734 || (c < 11428
                             ? (c < 7896
                                ? (c < 7812
                                   ? (c < 7774
                                      ? (c < 7754
                                         ? (c < 7744
                                            ? (c < 7740
                                               ? (c < 7738
                                                  ? c == 7736
                                                  : c <= 7738)
                                               : (c <= 7740 || c == 7742))
                                            : (c <= 7744 || (c < 7750
                                                             ? (c < 7748
                                                                ? c == 7746
                                                                : c <= 7748)
                                                             : (c <= 7750 || c == 7752))))
                                         : (c <= 7754 || (c < 7764
                                                          ? (c < 7760
                                                             ? (c < 7758
                                                                ? c == 7756
                                                                : c <= 7758)
                                                             : (c <= 7760 || c == 7762))
                                                          : (c <= 7764 || (c < 7770
                                                                           ? (c < 7768
                                                                              ? c == 7766
                                                                              : c <= 7768)
                                                                           : (c <= 7770 || c == 7772))))))
                                      : (c <= 7774 || (c < 7794
                                                       ? (c < 7784
                                                          ? (c < 7780
                                                             ? (c < 7778
                                                                ? c == 7776
                                                                : c <= 7778)
                                                             : (c <= 7780 || c == 7782))
                                                          : (c <= 7784 || (c < 7790
                                                                           ? (c < 7788
                                                                              ? c == 7786
                                                                              : c <= 7788)
                                                                           : (c <= 7790 || c == 7792))))
                                                       : (c <= 7794 || (c < 7804
                                                                        ? (c < 7800
                                                                           ? (c < 7798
                                                                              ? c == 7796
                                                                              : c <= 7798)
                                                                           : (c <= 7800 || c == 7802))
                                                                        : (c <= 7804 || (c < 7808
                                                                                         ? c == 7806
                                                                                         : (c <= 7808 || c == 7810))))))))
                                   : (c <= 7812 || (c < 7858
                                                    ? (c < 7840
                                                       ? (c < 7822
                                                          ? (c < 7818
                                                             ? (c < 7816
                                                                ? c == 7814
                                                                : c <= 7816)
                                                             : (c <= 7818 || c == 7820))
                                                          : (c <= 7822 || (c < 7828
                                                                           ? (c < 7826
                                                                              ? c == 7824
                                                                              : c <= 7826)
                                                                           : (c <= 7828 || c == 7838))))
                                                       : (c <= 7840 || (c < 7850
                                                                        ? (c < 7846
                                                                           ? (c < 7844
                                                                              ? c == 7842
                                                                              : c <= 7844)
                                                                           : (c <= 7846 || c == 7848))
                                                                        : (c <= 7850 || (c < 7854
                                                                                         ? c == 7852
                                                                                         : (c <= 7854 || c == 7856))))))
                                                    : (c <= 7858 || (c < 7878
                                                                     ? (c < 7868
                                                                        ? (c < 7864
                                                                           ? (c < 7862
                                                                              ? c == 7860
                                                                              : c <= 7862)
                                                                           : (c <= 7864 || c == 7866))
                                                                        : (c <= 7868 || (c < 7874
                                                                                         ? (c < 7872
                                                                                            ? c == 7870
                                                                                            : c <= 7872)
                                                                                         : (c <= 7874 || c == 7876))))
                                                                     : (c <= 7878 || (c < 7888
                                                                                      ? (c < 7884
                                                                                         ? (c < 7882
                                                                                            ? c == 7880
                                                                                            : c <= 7882)
                                                                                         : (c <= 7884 || c == 7886))
                                                                                      : (c <= 7888 || (c < 7892
                                                                                                       ? c == 7890
                                                                                                       : (c <= 7892 || c == 7894))))))))))
                                : (c <= 7896 || (c < 8464
                                                 ? (c < 7934
                                                    ? (c < 7916
                                                       ? (c < 7906
                                                          ? (c < 7902
                                                             ? (c < 7900
                                                                ? c == 7898
                                                                : c <= 7900)
                                                             : (c <= 7902 || c == 7904))
                                                          : (c <= 7906 || (c < 7912
                                                                           ? (c < 7910
                                                                              ? c == 7908
                                                                              : c <= 7910)
                                                                           : (c <= 7912 || c == 7914))))
                                                       : (c <= 7916 || (c < 7926
                                                                        ? (c < 7922
                                                                           ? (c < 7920
                                                                              ? c == 7918
                                                                              : c <= 7920)
                                                                           : (c <= 7922 || c == 7924))
                                                                        : (c <= 7926 || (c < 7930
                                                                                         ? c == 7928
                                                                                         : (c <= 7930 || c == 7932))))))
                                                    : (c <= 7934 || (c < 8040
                                                                     ? (c < 8008
                                                                        ? (c < 7976
                                                                           ? (c < 7960
                                                                              ? (c >= 7944 && c <= 7951)
                                                                              : c <= 7965)
                                                                           : (c <= 7983 || (c >= 7992 && c <= 7999)))
                                                                        : (c <= 8013 || (c < 8029
                                                                                         ? (c < 8027
                                                                                            ? c == 8025
                                                                                            : c <= 8027)
                                                                                         : (c <= 8029 || c == 8031))))
                                                                     : (c <= 8047 || (c < 8184
                                                                                      ? (c < 8152
                                                                                         ? (c < 8136
                                                                                            ? (c >= 8120 && c <= 8123)
                                                                                            : c <= 8139)
                                                                                         : (c <= 8155 || (c >= 8168 && c <= 8172)))
                                                                                      : (c <= 8187 || (c < 8455
                                                                                                       ? c == 8450
                                                                                                       : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
                                                 : (c <= 8466 || (c < 11381
                                                                  ? (c < 8579
                                                                     ? (c < 8488
                                                                        ? (c < 8484
                                                                           ? (c < 8473
                                                                              ? c == 8469
                                                                              : c <= 8477)
                                                                           : (c <= 8484 || c == 8486))
                                                                        : (c <= 8488 || (c < 8510
                                                                                         ? (c < 8496
                                                                                            ? (c >= 8490 && c <= 8493)
                                                                                            : c <= 8499)
                                                                                         : (c <= 8511 || c == 8517))))
                                                                     : (c <= 8579 || (c < 11369
                                                                                      ? (c < 11362
                                                                                         ? (c < 11360
                                                                                            ? (c >= 11264 && c <= 11311)
                                                                                            : c <= 11360)
                                                                                         : (c <= 11364 || c == 11367))
                                                                                      : (c <= 11369 || (c < 11373
                                                                                                        ? c == 11371
                                                                                                        : (c <= 11376 || c == 11378))))))
                                                                  : (c <= 11381 || (c < 11410
                                                                                    ? (c < 11400
                                                                                       ? (c < 11396
                                                                                          ? (c < 11394
                                                                                             ? (c >= 11390 && c <= 11392)
                                                                                             : c <= 11394)
                                                                                          : (c <= 11396 || c == 11398))
                                                                                       : (c <= 11400 || (c < 11406
                                                                                                         ? (c < 11404
                                                                                                            ? c == 11402
                                                                                                            : c <= 11404)
                                                                                                         : (c <= 11406 || c == 11408))))
                                                                                    : (c <= 11410 || (c < 11420
                                                                                                      ? (c < 11416
                                                                                                         ? (c < 11414
                                                                                                            ? c == 11412
                                                                                                            : c <= 11414)
                                                                                                         : (c <= 11416 || c == 11418))
                                                                                                      : (c <= 11420 || (c < 11424
                                                                                                                        ? c == 11422
                                                                                                                        : (c <= 11424 || c == 11426))))))))))))
                             : (c <= 11428 || (c < 42796
                                               ? (c < 42568
                                                  ? (c < 11468
                                                     ? (c < 11448
                                                        ? (c < 11438
                                                           ? (c < 11434
                                                              ? (c < 11432
                                                                 ? c == 11430
                                                                 : c <= 11432)
                                                              : (c <= 11434 || c == 11436))
                                                           : (c <= 11438 || (c < 11444
                                                                             ? (c < 11442
                                                                                ? c == 11440
                                                                                : c <= 11442)
                                                                             : (c <= 11444 || c == 11446))))
                                                        : (c <= 11448 || (c < 11458
                                                                          ? (c < 11454
                                                                             ? (c < 11452
                                                                                ? c == 11450
                                                                                : c <= 11452)
                                                                             : (c <= 11454 || c == 11456))
                                                                          : (c <= 11458 || (c < 11464
                                                                                            ? (c < 11462
                                                                                               ? c == 11460
                                                                                               : c <= 11462)
                                                                                            : (c <= 11464 || c == 11466))))))
                                                     : (c <= 11468 || (c < 11488
                                                                       ? (c < 11478
                                                                          ? (c < 11474
                                                                             ? (c < 11472
                                                                                ? c == 11470
                                                                                : c <= 11472)
                                                                             : (c <= 11474 || c == 11476))
                                                                          : (c <= 11478 || (c < 11484
                                                                                            ? (c < 11482
                                                                                               ? c == 11480
                                                                                               : c <= 11482)
                                                                                            : (c <= 11484 || c == 11486))))
                                                                       : (c <= 11488 || (c < 42560
                                                                                         ? (c < 11501
                                                                                            ? (c < 11499
                                                                                               ? c == 11490
                                                                                               : c <= 11499)
                                                                                            : (c <= 11501 || c == 11506))
                                                                                         : (c <= 42560 || (c < 42564
                                                                                                           ? c == 42562
                                                                                                           : (c <= 42564 || c == 42566))))))))
                                                  : (c <= 42568 || (c < 42624
                                                                    ? (c < 42588
                                                                       ? (c < 42578
                                                                          ? (c < 42574
                                                                             ? (c < 42572
                                                                                ? c == 42570
                                                                                : c <= 42572)
                                                                             : (c <= 42574 || c == 42576))
                                                                          : (c <= 42578 || (c < 42584
                                                                                            ? (c < 42582
                                                                                               ? c == 42580
                                                                                               : c <= 42582)
                                                                                            : (c <= 42584 || c == 42586))))
                                                                       : (c <= 42588 || (c < 42598
                                                                                         ? (c < 42594
                                                                                            ? (c < 42592
                                                                                               ? c == 42590
                                                                                               : c <= 42592)
                                                                                            : (c <= 42594 || c == 42596))
                                                                                         : (c <= 42598 || (c < 42602
                                                                                                           ? c == 42600
                                                                                                           : (c <= 42602 || c == 42604))))))
                                                                    : (c <= 42624 || (c < 42644
                                                                                      ? (c < 42634
                                                                                         ? (c < 42630
                                                                                            ? (c < 42628
                                                                                               ? c == 42626
                                                                                               : c <= 42628)
                                                                                            : (c <= 42630 || c == 42632))
                                                                                         : (c <= 42634 || (c < 42640
                                                                                                           ? (c < 42638
                                                                                                              ? c == 42636
                                                                                                              : c <= 42638)
                                                                                                           : (c <= 42640 || c == 42642))))
                                                                                      : (c <= 42644 || (c < 42788
                                                                                                        ? (c < 42650
                                                                                                           ? (c < 42648
                                                                                                              ? c == 42646
                                                                                                              : c <= 42648)
                                                                                                           : (c <= 42650 || c == 42786))
                                                                                                        : (c <= 42788 || (c < 42792
                                                                                                                          ? c == 42790
                                                                                                                          : (c <= 42792 || c == 42794))))))))))
                                               : (c <= 42796 || (c < 42884
                                                                 ? (c < 42836
                                                                    ? (c < 42818
                                                                       ? (c < 42808
                                                                          ? (c < 42804
                                                                             ? (c < 42802
                                                                                ? c == 42798
                                                                                : c <= 42802)
                                                                             : (c <= 42804 || c == 42806))
                                                                          : (c <= 42808 || (c < 42814
                                                                                            ? (c < 42812
                                                                                               ? c == 42810
                                                                                               : c <= 42812)
                                                                                            : (c <= 42814 || c == 42816))))
                                                                       : (c <= 42818 || (c < 42828
                                                                                         ? (c < 42824
                                                                                            ? (c < 42822
                                                                                               ? c == 42820
                                                                                               : c <= 42822)
                                                                                            : (c <= 42824 || c == 42826))
                                                                                         : (c <= 42828 || (c < 42832
                                                                                                           ? c == 42830
                                                                                                           : (c <= 42832 || c == 42834))))))
                                                                    : (c <= 42836 || (c < 42856
                                                                                      ? (c < 42846
                                                                                         ? (c < 42842
                                                                                            ? (c < 42840
                                                                                               ? c == 42838
                                                                                               : c <= 42840)
                                                                                            : (c <= 42842 || c == 42844))
                                                                                         : (c <= 42846 || (c < 42852
                                                                                                           ? (c < 42850
                                                                                                              ? c == 42848
                                                                                                              : c <= 42850)
                                                                                                           : (c <= 42852 || c == 42854))))
                                                                                      : (c <= 42856 || (c < 42875
                                                                                                        ? (c < 42862
                                                                                                           ? (c < 42860
                                                                                                              ? c == 42858
                                                                                                              : c <= 42860)
                                                                                                           : (c <= 42862 || c == 42873))
                                                                                                        : (c <= 42875 || (c < 42880
                                                                                                                          ? (c >= 42877 && c <= 42878)
                                                                                                                          : (c <= 42880 || c == 42882))))))))
                                                                 : (c <= 42884 || (c < 42936
                                                                                   ? (c < 42910
                                                                                      ? (c < 42898
                                                                                         ? (c < 42893
                                                                                            ? (c < 42891
                                                                                               ? c == 42886
                                                                                               : c <= 42891)
                                                                                            : (c <= 42893 || c == 42896))
                                                                                         : (c <= 42898 || (c < 42906
                                                                                                           ? (c < 42904
                                                                                                              ? c == 42902
                                                                                                              : c <= 42904)
                                                                                                           : (c <= 42906 || c == 42908))))
                                                                                      : (c <= 42910 || (c < 42920
                                                                                                        ? (c < 42916
                                                                                                           ? (c < 42914
                                                                                                              ? c == 42912
                                                                                                              : c <= 42914)
                                                                                                           : (c <= 42916 || c == 42918))
                                                                                                        : (c <= 42920 || (c < 42928
                                                                                                                          ? (c >= 42922 && c <= 42926)
                                                                                                                          : (c <= 42932 || c == 42934))))))
                                                                                   : (c <= 42936 || (c < 42968
                                                                                                     ? (c < 42946
                                                                                                        ? (c < 42942
                                                                                                           ? (c < 42940
                                                                                                              ? c == 42938
                                                                                                              : c <= 42940)
                                                                                                           : (c <= 42942 || c == 42944))
                                                                                                        : (c <= 42946 || (c < 42960
                                                                                                                          ? (c < 42953
                                                                                                                             ? (c >= 42948 && c <= 42951)
                                                                                                                             : c <= 42953)
                                                                                                                          : (c <= 42960 || c == 42966))))
                                                                                                     : (c <= 42968 || (c < 66928
                                                                                                                       ? (c < 66560
                                                                                                                          ? (c < 65313
                                                                                                                             ? c == 42997
                                                                                                                             : c <= 65338)
                                                                                                                          : (c <= 66599 || (c >= 66736 && c <= 66771)))
                                                                                                                       : (c <= 66938 || (c < 66956
                                                                                                                                         ? (c >= 66940 && c <= 66954)
                                                                                                                                         : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym__lowercase_letter_character_set_1(int32_t c) {
    return (c < 7749
            ? (c < 987
               ? (c < 424
                  ? (c < 326
                     ? (c < 287
                        ? (c < 267
                           ? (c < 257
                              ? (c < 223
                                 ? (c < 181
                                    ? (c >= 'a' && c <= 'z')
                                    : c <= 181)
                                 : (c <= 246 || (c >= 248 && c <= 255)))
                              : (c <= 257 || (c < 263
                                              ? (c < 261
                                                 ? c == 259
                                                 : c <= 261)
                                              : (c <= 263 || c == 265))))
                           : (c <= 267 || (c < 277
                                           ? (c < 273
                                              ? (c < 271
                                                 ? c == 269
                                                 : c <= 271)
                                              : (c <= 273 || c == 275))
                                           : (c <= 277 || (c < 283
                                                           ? (c < 281
                                                              ? c == 279
                                                              : c <= 281)
                                                           : (c <= 283 || c == 285))))))
                        : (c <= 287 || (c < 307
                                        ? (c < 297
                                           ? (c < 293
                                              ? (c < 291
                                                 ? c == 289
                                                 : c <= 291)
                                              : (c <= 293 || c == 295))
                                           : (c <= 297 || (c < 303
                                                           ? (c < 301
                                                              ? c == 299
                                                              : c <= 301)
                                                           : (c <= 303 || c == 305))))
                                        : (c <= 307 || (c < 318
                                                        ? (c < 314
                                                           ? (c < 311
                                                              ? c == 309
                                                              : c <= 312)
                                                           : (c <= 314 || c == 316))
                                                        : (c <= 318 || (c < 322
                                                                        ? c == 320
                                                                        : (c <= 322 || c == 324))))))))
                     : (c <= 326 || (c < 367
                                     ? (c < 347
                                        ? (c < 337
                                           ? (c < 333
                                              ? (c < 331
                                                 ? (c >= 328 && c <= 329)
                                                 : c <= 331)
                                              : (c <= 333 || c == 335))
                                           : (c <= 337 || (c < 343
                                                           ? (c < 341
                                                              ? c == 339
                                                              : c <= 341)
                                                           : (c <= 343 || c == 345))))
                                        : (c <= 347 || (c < 357
                                                        ? (c < 353
                                                           ? (c < 351
                                                              ? c == 349
                                                              : c <= 351)
                                                           : (c <= 353 || c == 355))
                                                        : (c <= 357 || (c < 363
                                                                        ? (c < 361
                                                                           ? c == 359
                                                                           : c <= 361)
                                                                        : (c <= 363 || c == 365))))))
                                     : (c <= 367 || (c < 392
                                                     ? (c < 378
                                                        ? (c < 373
                                                           ? (c < 371
                                                              ? c == 369
                                                              : c <= 371)
                                                           : (c <= 373 || c == 375))
                                                        : (c <= 378 || (c < 387
                                                                        ? (c < 382
                                                                           ? c == 380
                                                                           : c <= 384)
                                                                        : (c <= 387 || c == 389))))
                                                     : (c <= 392 || (c < 414
                                                                     ? (c < 405
                                                                        ? (c < 402
                                                                           ? (c >= 396 && c <= 397)
                                                                           : c <= 402)
                                                                        : (c <= 405 || (c >= 409 && c <= 411)))
                                                                     : (c <= 414 || (c < 419
                                                                                     ? c == 417
                                                                                     : (c <= 419 || c == 421))))))))))
                  : (c <= 424 || (c < 523
                                  ? (c < 481
                                     ? (c < 460
                                        ? (c < 438
                                           ? (c < 432
                                              ? (c < 429
                                                 ? (c >= 426 && c <= 427)
                                                 : c <= 429)
                                              : (c <= 432 || c == 436))
                                           : (c <= 438 || (c < 454
                                                           ? (c < 445
                                                              ? (c >= 441 && c <= 442)
                                                              : c <= 447)
                                                           : (c <= 454 || c == 457))))
                                        : (c <= 460 || (c < 470
                                                        ? (c < 466
                                                           ? (c < 464
                                                              ? c == 462
                                                              : c <= 464)
                                                           : (c <= 466 || c == 468))
                                                        : (c <= 470 || (c < 476
                                                                        ? (c < 474
                                                                           ? c == 472
                                                                           : c <= 474)
                                                                        : (c <= 477 || c == 479))))))
                                     : (c <= 481 || (c < 505
                                                     ? (c < 491
                                                        ? (c < 487
                                                           ? (c < 485
                                                              ? c == 483
                                                              : c <= 485)
                                                           : (c <= 487 || c == 489))
                                                        : (c <= 491 || (c < 499
                                                                        ? (c < 495
                                                                           ? c == 493
                                                                           : c <= 496)
                                                                        : (c <= 499 || c == 501))))
                                                     : (c <= 505 || (c < 515
                                                                     ? (c < 511
                                                                        ? (c < 509
                                                                           ? c == 507
                                                                           : c <= 509)
                                                                        : (c <= 511 || c == 513))
                                                                     : (c <= 515 || (c < 519
                                                                                     ? c == 517
                                                                                     : (c <= 519 || c == 521))))))))
                                  : (c <= 523 || (c < 563
                                                  ? (c < 543
                                                     ? (c < 533
                                                        ? (c < 529
                                                           ? (c < 527
                                                              ? c == 525
                                                              : c <= 527)
                                                           : (c <= 529 || c == 531))
                                                        : (c <= 533 || (c < 539
                                                                        ? (c < 537
                                                                           ? c == 535
                                                                           : c <= 537)
                                                                        : (c <= 539 || c == 541))))
                                                     : (c <= 543 || (c < 553
                                                                     ? (c < 549
                                                                        ? (c < 547
                                                                           ? c == 545
                                                                           : c <= 547)
                                                                        : (c <= 549 || c == 551))
                                                                     : (c <= 553 || (c < 559
                                                                                     ? (c < 557
                                                                                        ? c == 555
                                                                                        : c <= 557)
                                                                                     : (c <= 559 || c == 561))))))
                                                  : (c <= 569 || (c < 881
                                                                  ? (c < 585
                                                                     ? (c < 578
                                                                        ? (c < 575
                                                                           ? c == 572
                                                                           : c <= 576)
                                                                        : (c <= 578 || c == 583))
                                                                     : (c <= 585 || (c < 591
                                                                                     ? (c < 589
                                                                                        ? c == 587
                                                                                        : c <= 589)
                                                                                     : (c <= 659 || (c >= 661 && c <= 687)))))
                                                                  : (c <= 881 || (c < 940
                                                                                  ? (c < 891
                                                                                     ? (c < 887
                                                                                        ? c == 883
                                                                                        : c <= 887)
                                                                                     : (c <= 893 || c == 912))
                                                                                  : (c <= 974 || (c < 981
                                                                                                  ? (c >= 976 && c <= 977)
                                                                                                  : (c <= 983 || c == 985))))))))))))
               : (c <= 987 || (c < 1257
                               ? (c < 1177
                                  ? (c < 1131
                                     ? (c < 1007
                                        ? (c < 997
                                           ? (c < 993
                                              ? (c < 991
                                                 ? c == 989
                                                 : c <= 991)
                                              : (c <= 993 || c == 995))
                                           : (c <= 997 || (c < 1003
                                                           ? (c < 1001
                                                              ? c == 999
                                                              : c <= 1001)
                                                           : (c <= 1003 || c == 1005))))
                                        : (c <= 1011 || (c < 1121
                                                         ? (c < 1019
                                                            ? (c < 1016
                                                               ? c == 1013
                                                               : c <= 1016)
                                                            : (c <= 1020 || (c >= 1072 && c <= 1119)))
                                                         : (c <= 1121 || (c < 1127
                                                                          ? (c < 1125
                                                                             ? c == 1123
                                                                             : c <= 1125)
                                                                          : (c <= 1127 || c == 1129))))))
                                     : (c <= 1131 || (c < 1151
                                                      ? (c < 1141
                                                         ? (c < 1137
                                                            ? (c < 1135
                                                               ? c == 1133
                                                               : c <= 1135)
                                                            : (c <= 1137 || c == 1139))
                                                         : (c <= 1141 || (c < 1147
                                                                          ? (c < 1145
                                                                             ? c == 1143
                                                                             : c <= 1145)
                                                                          : (c <= 1147 || c == 1149))))
                                                      : (c <= 1151 || (c < 1169
                                                                       ? (c < 1165
                                                                          ? (c < 1163
                                                                             ? c == 1153
                                                                             : c <= 1163)
                                                                          : (c <= 1165 || c == 1167))
                                                                       : (c <= 1169 || (c < 1173
                                                                                        ? c == 1171
                                                                                        : (c <= 1173 || c == 1175))))))))
                                  : (c <= 1177 || (c < 1218
                                                   ? (c < 1197
                                                      ? (c < 1187
                                                         ? (c < 1183
                                                            ? (c < 1181
                                                               ? c == 1179
                                                               : c <= 1181)
                                                            : (c <= 1183 || c == 1185))
                                                         : (c <= 1187 || (c < 1193
                                                                          ? (c < 1191
                                                                             ? c == 1189
                                                                             : c <= 1191)
                                                                          : (c <= 1193 || c == 1195))))
                                                      : (c <= 1197 || (c < 1207
                                                                       ? (c < 1203
                                                                          ? (c < 1201
                                                                             ? c == 1199
                                                                             : c <= 1201)
                                                                          : (c <= 1203 || c == 1205))
                                                                       : (c <= 1207 || (c < 1213
                                                                                        ? (c < 1211
                                                                                           ? c == 1209
                                                                                           : c <= 1211)
                                                                                        : (c <= 1213 || c == 1215))))))
                                                   : (c <= 1218 || (c < 1239
                                                                    ? (c < 1228
                                                                       ? (c < 1224
                                                                          ? (c < 1222
                                                                             ? c == 1220
                                                                             : c <= 1222)
                                                                          : (c <= 1224 || c == 1226))
                                                                       : (c <= 1228 || (c < 1235
                                                                                        ? (c < 1233
                                                                                           ? (c >= 1230 && c <= 1231)
                                                                                           : c <= 1233)
                                                                                        : (c <= 1235 || c == 1237))))
                                                                    : (c <= 1239 || (c < 1249
                                                                                     ? (c < 1245
                                                                                        ? (c < 1243
                                                                                           ? c == 1241
                                                                                           : c <= 1243)
                                                                                        : (c <= 1245 || c == 1247))
                                                                                     : (c <= 1249 || (c < 1253
                                                                                                      ? c == 1251
                                                                                                      : (c <= 1253 || c == 1255))))))))))
                               : (c <= 1257 || (c < 5112
                                                ? (c < 1297
                                                   ? (c < 1277
                                                      ? (c < 1267
                                                         ? (c < 1263
                                                            ? (c < 1261
                                                               ? c == 1259
                                                               : c <= 1261)
                                                            : (c <= 1263 || c == 1265))
                                                         : (c <= 1267 || (c < 1273
                                                                          ? (c < 1271
                                                                             ? c == 1269
                                                                             : c <= 1271)
                                                                          : (c <= 1273 || c == 1275))))
                                                      : (c <= 1277 || (c < 1287
                                                                       ? (c < 1283
                                                                          ? (c < 1281
                                                                             ? c == 1279
                                                                             : c <= 1281)
                                                                          : (c <= 1283 || c == 1285))
                                                                       : (c <= 1287 || (c < 1293
                                                                                        ? (c < 1291
                                                                                           ? c == 1289
                                                                                           : c <= 1291)
                                                                                        : (c <= 1293 || c == 1295))))))
                                                   : (c <= 1297 || (c < 1317
                                                                    ? (c < 1307
                                                                       ? (c < 1303
                                                                          ? (c < 1301
                                                                             ? c == 1299
                                                                             : c <= 1301)
                                                                          : (c <= 1303 || c == 1305))
                                                                       : (c <= 1307 || (c < 1313
                                                                                        ? (c < 1311
                                                                                           ? c == 1309
                                                                                           : c <= 1311)
                                                                                        : (c <= 1313 || c == 1315))))
                                                                    : (c <= 1317 || (c < 1327
                                                                                     ? (c < 1323
                                                                                        ? (c < 1321
                                                                                           ? c == 1319
                                                                                           : c <= 1321)
                                                                                        : (c <= 1323 || c == 1325))
                                                                                     : (c <= 1327 || (c < 4304
                                                                                                      ? (c >= 1376 && c <= 1416)
                                                                                                      : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
                                                : (c <= 5117 || (c < 7711
                                                                 ? (c < 7691
                                                                    ? (c < 7681
                                                                       ? (c < 7531
                                                                          ? (c < 7424
                                                                             ? (c >= 7296 && c <= 7304)
                                                                             : c <= 7467)
                                                                          : (c <= 7543 || (c >= 7545 && c <= 7578)))
                                                                       : (c <= 7681 || (c < 7687
                                                                                        ? (c < 7685
                                                                                           ? c == 7683
                                                                                           : c <= 7685)
                                                                                        : (c <= 7687 || c == 7689))))
                                                                    : (c <= 7691 || (c < 7701
                                                                                     ? (c < 7697
                                                                                        ? (c < 7695
                                                                                           ? c == 7693
                                                                                           : c <= 7695)
                                                                                        : (c <= 7697 || c == 7699))
                                                                                     : (c <= 7701 || (c < 7707
                                                                                                      ? (c < 7705
                                                                                                         ? c == 7703
                                                                                                         : c <= 7705)
                                                                                                      : (c <= 7707 || c == 7709))))))
                                                                 : (c <= 7711 || (c < 7731
                                                                                  ? (c < 7721
                                                                                     ? (c < 7717
                                                                                        ? (c < 7715
                                                                                           ? c == 7713
                                                                                           : c <= 7715)
                                                                                        : (c <= 7717 || c == 7719))
                                                                                     : (c <= 7721 || (c < 7727
                                                                                                      ? (c < 7725
                                                                                                         ? c == 7723
                                                                                                         : c <= 7725)
                                                                                                      : (c <= 7727 || c == 7729))))
                                                                                  : (c <= 7731 || (c < 7741
                                                                                                   ? (c < 7737
                                                                                                      ? (c < 7735
                                                                                                         ? c == 7733
                                                                                                         : c <= 7735)
                                                                                                      : (c <= 7737 || c == 7739))
                                                                                                   : (c <= 7741 || (c < 7745
                                                                                                                    ? c == 7743
                                                                                                                    : (c <= 7745 || c == 7747))))))))))))))
            : (c <= 7749 || (c < 11447
                             ? (c < 7913
                                ? (c < 7827
                                   ? (c < 7789
                                      ? (c < 7769
                                         ? (c < 7759
                                            ? (c < 7755
                                               ? (c < 7753
                                                  ? c == 7751
                                                  : c <= 7753)
                                               : (c <= 7755 || c == 7757))
                                            : (c <= 7759 || (c < 7765
                                                             ? (c < 7763
                                                                ? c == 7761
                                                                : c <= 7763)
                                                             : (c <= 7765 || c == 7767))))
                                         : (c <= 7769 || (c < 7779
                                                          ? (c < 7775
                                                             ? (c < 7773
                                                                ? c == 7771
                                                                : c <= 7773)
                                                             : (c <= 7775 || c == 7777))
                                                          : (c <= 7779 || (c < 7785
                                                                           ? (c < 7783
                                                                              ? c == 7781
                                                                              : c <= 7783)
                                                                           : (c <= 7785 || c == 7787))))))
                                      : (c <= 7789 || (c < 7809
                                                       ? (c < 7799
                                                          ? (c < 7795
                                                             ? (c < 7793
                                                                ? c == 7791
                                                                : c <= 7793)
                                                             : (c <= 7795 || c == 7797))
                                                          : (c <= 7799 || (c < 7805
                                                                           ? (c < 7803
                                                                              ? c == 7801
                                                                              : c <= 7803)
                                                                           : (c <= 7805 || c == 7807))))
                                                       : (c <= 7809 || (c < 7819
                                                                        ? (c < 7815
                                                                           ? (c < 7813
                                                                              ? c == 7811
                                                                              : c <= 7813)
                                                                           : (c <= 7815 || c == 7817))
                                                                        : (c <= 7819 || (c < 7823
                                                                                         ? c == 7821
                                                                                         : (c <= 7823 || c == 7825))))))))
                                   : (c <= 7827 || (c < 7875
                                                    ? (c < 7855
                                                       ? (c < 7845
                                                          ? (c < 7841
                                                             ? (c < 7839
                                                                ? (c >= 7829 && c <= 7837)
                                                                : c <= 7839)
                                                             : (c <= 7841 || c == 7843))
                                                          : (c <= 7845 || (c < 7851
                                                                           ? (c < 7849
                                                                              ? c == 7847
                                                                              : c <= 7849)
                                                                           : (c <= 7851 || c == 7853))))
                                                       : (c <= 7855 || (c < 7865
                                                                        ? (c < 7861
                                                                           ? (c < 7859
                                                                              ? c == 7857
                                                                              : c <= 7859)
                                                                           : (c <= 7861 || c == 7863))
                                                                        : (c <= 7865 || (c < 7871
                                                                                         ? (c < 7869
                                                                                            ? c == 7867
                                                                                            : c <= 7869)
                                                                                         : (c <= 7871 || c == 7873))))))
                                                    : (c <= 7875 || (c < 7895
                                                                     ? (c < 7885
                                                                        ? (c < 7881
                                                                           ? (c < 7879
                                                                              ? c == 7877
                                                                              : c <= 7879)
                                                                           : (c <= 7881 || c == 7883))
                                                                        : (c <= 7885 || (c < 7891
                                                                                         ? (c < 7889
                                                                                            ? c == 7887
                                                                                            : c <= 7889)
                                                                                         : (c <= 7891 || c == 7893))))
                                                                     : (c <= 7895 || (c < 7905
                                                                                      ? (c < 7901
                                                                                         ? (c < 7899
                                                                                            ? c == 7897
                                                                                            : c <= 7899)
                                                                                         : (c <= 7901 || c == 7903))
                                                                                      : (c <= 7905 || (c < 7909
                                                                                                       ? c == 7907
                                                                                                       : (c <= 7909 || c == 7911))))))))))
                                : (c <= 7913 || (c < 8518
                                                 ? (c < 8080
                                                    ? (c < 7933
                                                       ? (c < 7923
                                                          ? (c < 7919
                                                             ? (c < 7917
                                                                ? c == 7915
                                                                : c <= 7917)
                                                             : (c <= 7919 || c == 7921))
                                                          : (c <= 7923 || (c < 7929
                                                                           ? (c < 7927
                                                                              ? c == 7925
                                                                              : c <= 7927)
                                                                           : (c <= 7929 || c == 7931))))
                                                       : (c <= 7933 || (c < 8000
                                                                        ? (c < 7968
                                                                           ? (c < 7952
                                                                              ? (c >= 7935 && c <= 7943)
                                                                              : c <= 7957)
                                                                           : (c <= 7975 || (c >= 7984 && c <= 7991)))
                                                                        : (c <= 8005 || (c < 8048
                                                                                         ? (c < 8032
                                                                                            ? (c >= 8016 && c <= 8023)
                                                                                            : c <= 8039)
                                                                                         : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
                                                    : (c <= 8087 || (c < 8178
                                                                     ? (c < 8130
                                                                        ? (c < 8118
                                                                           ? (c < 8112
                                                                              ? (c >= 8096 && c <= 8103)
                                                                              : c <= 8116)
                                                                           : (c <= 8119 || c == 8126))
                                                                        : (c <= 8132 || (c < 8150
                                                                                         ? (c < 8144
                                                                                            ? (c >= 8134 && c <= 8135)
                                                                                            : c <= 8147)
                                                                                         : (c <= 8151 || (c >= 8160 && c <= 8167)))))
                                                                     : (c <= 8180 || (c < 8495
                                                                                      ? (c < 8462
                                                                                         ? (c < 8458
                                                                                            ? (c >= 8182 && c <= 8183)
                                                                                            : c <= 8458)
                                                                                         : (c <= 8463 || c == 8467))
                                                                                      : (c <= 8495 || (c < 8505
                                                                                                       ? c == 8500
                                                                                                       : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
                                                 : (c <= 8521 || (c < 11409
                                                                  ? (c < 11379
                                                                     ? (c < 11365
                                                                        ? (c < 11312
                                                                           ? (c < 8580
                                                                              ? c == 8526
                                                                              : c <= 8580)
                                                                           : (c <= 11359 || c == 11361))
                                                                        : (c <= 11366 || (c < 11372
                                                                                          ? (c < 11370
                                                                                             ? c == 11368
                                                                                             : c <= 11370)
                                                                                          : (c <= 11372 || c == 11377))))
                                                                     : (c <= 11380 || (c < 11399
                                                                                       ? (c < 11395
                                                                                          ? (c < 11393
                                                                                             ? (c >= 11382 && c <= 11387)
                                                                                             : c <= 11393)
                                                                                          : (c <= 11395 || c == 11397))
                                                                                       : (c <= 11399 || (c < 11405
                                                                                                         ? (c < 11403
                                                                                                            ? c == 11401
                                                                                                            : c <= 11403)
                                                                                                         : (c <= 11405 || c == 11407))))))
                                                                  : (c <= 11409 || (c < 11429
                                                                                    ? (c < 11419
                                                                                       ? (c < 11415
                                                                                          ? (c < 11413
                                                                                             ? c == 11411
                                                                                             : c <= 11413)
                                                                                          : (c <= 11415 || c == 11417))
                                                                                       : (c <= 11419 || (c < 11425
                                                                                                         ? (c < 11423
                                                                                                            ? c == 11421
                                                                                                            : c <= 11423)
                                                                                                         : (c <= 11425 || c == 11427))))
                                                                                    : (c <= 11429 || (c < 11439
                                                                                                      ? (c < 11435
                                                                                                         ? (c < 11433
                                                                                                            ? c == 11431
                                                                                                            : c <= 11433)
                                                                                                         : (c <= 11435 || c == 11437))
                                                                                                      : (c <= 11439 || (c < 11443
                                                                                                                        ? c == 11441
                                                                                                                        : (c <= 11443 || c == 11445))))))))))))
                             : (c <= 11447 || (c < 42813
                                               ? (c < 42581
                                                  ? (c < 11487
                                                     ? (c < 11467
                                                        ? (c < 11457
                                                           ? (c < 11453
                                                              ? (c < 11451
                                                                 ? c == 11449
                                                                 : c <= 11451)
                                                              : (c <= 11453 || c == 11455))
                                                           : (c <= 11457 || (c < 11463
                                                                             ? (c < 11461
                                                                                ? c == 11459
                                                                                : c <= 11461)
                                                                             : (c <= 11463 || c == 11465))))
                                                        : (c <= 11467 || (c < 11477
                                                                          ? (c < 11473
                                                                             ? (c < 11471
                                                                                ? c == 11469
                                                                                : c <= 11471)
                                                                             : (c <= 11473 || c == 11475))
                                                                          : (c <= 11477 || (c < 11483
                                                                                            ? (c < 11481
                                                                                               ? c == 11479
                                                                                               : c <= 11481)
                                                                                            : (c <= 11483 || c == 11485))))))
                                                     : (c <= 11487 || (c < 42563
                                                                       ? (c < 11507
                                                                          ? (c < 11500
                                                                             ? (c < 11491
                                                                                ? c == 11489
                                                                                : c <= 11492)
                                                                             : (c <= 11500 || c == 11502))
                                                                          : (c <= 11507 || (c < 11565
                                                                                            ? (c < 11559
                                                                                               ? (c >= 11520 && c <= 11557)
                                                                                               : c <= 11559)
                                                                                            : (c <= 11565 || c == 42561))))
                                                                       : (c <= 42563 || (c < 42573
                                                                                         ? (c < 42569
                                                                                            ? (c < 42567
                                                                                               ? c == 42565
                                                                                               : c <= 42567)
                                                                                            : (c <= 42569 || c == 42571))
                                                                                         : (c <= 42573 || (c < 42577
                                                                                                           ? c == 42575
                                                                                                           : (c <= 42577 || c == 42579))))))))
                                                  : (c <= 42581 || (c < 42639
                                                                    ? (c < 42601
                                                                       ? (c < 42591
                                                                          ? (c < 42587
                                                                             ? (c < 42585
                                                                                ? c == 42583
                                                                                : c <= 42585)
                                                                             : (c <= 42587 || c == 42589))
                                                                          : (c <= 42591 || (c < 42597
                                                                                            ? (c < 42595
                                                                                               ? c == 42593
                                                                                               : c <= 42595)
                                                                                            : (c <= 42597 || c == 42599))))
                                                                       : (c <= 42601 || (c < 42629
                                                                                         ? (c < 42625
                                                                                            ? (c < 42605
                                                                                               ? c == 42603
                                                                                               : c <= 42605)
                                                                                            : (c <= 42625 || c == 42627))
                                                                                         : (c <= 42629 || (c < 42635
                                                                                                           ? (c < 42633
                                                                                                              ? c == 42631
                                                                                                              : c <= 42633)
                                                                                                           : (c <= 42635 || c == 42637))))))
                                                                    : (c <= 42639 || (c < 42793
                                                                                      ? (c < 42649
                                                                                         ? (c < 42645
                                                                                            ? (c < 42643
                                                                                               ? c == 42641
                                                                                               : c <= 42643)
                                                                                            : (c <= 42645 || c == 42647))
                                                                                         : (c <= 42649 || (c < 42789
                                                                                                           ? (c < 42787
                                                                                                              ? c == 42651
                                                                                                              : c <= 42787)
                                                                                                           : (c <= 42789 || c == 42791))))
                                                                                      : (c <= 42793 || (c < 42805
                                                                                                        ? (c < 42799
                                                                                                           ? (c < 42797
                                                                                                              ? c == 42795
                                                                                                              : c <= 42797)
                                                                                                           : (c <= 42801 || c == 42803))
                                                                                                        : (c <= 42805 || (c < 42809
                                                                                                                          ? c == 42807
                                                                                                                          : (c <= 42809 || c == 42811))))))))))
                                               : (c <= 42813 || (c < 42905
                                                                 ? (c < 42853
                                                                    ? (c < 42833
                                                                       ? (c < 42823
                                                                          ? (c < 42819
                                                                             ? (c < 42817
                                                                                ? c == 42815
                                                                                : c <= 42817)
                                                                             : (c <= 42819 || c == 42821))
                                                                          : (c <= 42823 || (c < 42829
                                                                                            ? (c < 42827
                                                                                               ? c == 42825
                                                                                               : c <= 42827)
                                                                                            : (c <= 42829 || c == 42831))))
                                                                       : (c <= 42833 || (c < 42843
                                                                                         ? (c < 42839
                                                                                            ? (c < 42837
                                                                                               ? c == 42835
                                                                                               : c <= 42837)
                                                                                            : (c <= 42839 || c == 42841))
                                                                                         : (c <= 42843 || (c < 42849
                                                                                                           ? (c < 42847
                                                                                                              ? c == 42845
                                                                                                              : c <= 42847)
                                                                                                           : (c <= 42849 || c == 42851))))))
                                                                    : (c <= 42853 || (c < 42881
                                                                                      ? (c < 42863
                                                                                         ? (c < 42859
                                                                                            ? (c < 42857
                                                                                               ? c == 42855
                                                                                               : c <= 42857)
                                                                                            : (c <= 42859 || c == 42861))
                                                                                         : (c <= 42863 || (c < 42876
                                                                                                           ? (c < 42874
                                                                                                              ? (c >= 42865 && c <= 42872)
                                                                                                              : c <= 42874)
                                                                                                           : (c <= 42876 || c == 42879))))
                                                                                      : (c <= 42881 || (c < 42894
                                                                                                        ? (c < 42887
                                                                                                           ? (c < 42885
                                                                                                              ? c == 42883
                                                                                                              : c <= 42885)
                                                                                                           : (c <= 42887 || c == 42892))
                                                                                                        : (c <= 42894 || (c < 42899
                                                                                                                          ? c == 42897
                                                                                                                          : (c <= 42901 || c == 42903))))))))
                                                                 : (c <= 42905 || (c < 42961
                                                                                   ? (c < 42933
                                                                                      ? (c < 42915
                                                                                         ? (c < 42911
                                                                                            ? (c < 42909
                                                                                               ? c == 42907
                                                                                               : c <= 42909)
                                                                                            : (c <= 42911 || c == 42913))
                                                                                         : (c <= 42915 || (c < 42921
                                                                                                           ? (c < 42919
                                                                                                              ? c == 42917
                                                                                                              : c <= 42919)
                                                                                                           : (c <= 42921 || c == 42927))))
                                                                                      : (c <= 42933 || (c < 42943
                                                                                                        ? (c < 42939
                                                                                                           ? (c < 42937
                                                                                                              ? c == 42935
                                                                                                              : c <= 42937)
                                                                                                           : (c <= 42939 || c == 42941))
                                                                                                        : (c <= 42943 || (c < 42952
                                                                                                                          ? (c < 42947
                                                                                                                             ? c == 42945
                                                                                                                             : c <= 42947)
                                                                                                                          : (c <= 42952 || c == 42954))))))
                                                                                   : (c <= 42961 || (c < 64256
                                                                                                     ? (c < 42998
                                                                                                        ? (c < 42967
                                                                                                           ? (c < 42965
                                                                                                              ? c == 42963
                                                                                                              : c <= 42965)
                                                                                                           : (c <= 42967 || c == 42969))
                                                                                                        : (c <= 42998 || (c < 43872
                                                                                                                          ? (c < 43824
                                                                                                                             ? c == 43002
                                                                                                                             : c <= 43866)
                                                                                                                          : (c <= 43880 || (c >= 43888 && c <= 43967)))))
                                                                                                     : (c <= 64262 || (c < 66967
                                                                                                                       ? (c < 66600
                                                                                                                          ? (c < 65345
                                                                                                                             ? (c >= 64275 && c <= 64279)
                                                                                                                             : c <= 65370)
                                                                                                                          : (c <= 66639 || (c >= 66776 && c <= 66811)))
                                                                                                                       : (c <= 66977 || (c < 66995
                                                                                                                                         ? (c >= 66979 && c <= 66993)
                                                                                                                                         : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch (state) {
        case 0:
            if (eof) ADVANCE(17);
            if (lookahead == '\n') ADVANCE(41);
            if (lookahead == '\r') ADVANCE(1);
            if (lookahead == ' ') ADVANCE(22);
            if (lookahead == '!') ADVANCE(36);
            if (lookahead == '"') ADVANCE(32);
            if (lookahead == '#') ADVANCE(34);
            if (lookahead == '$') ADVANCE(25);
            if (lookahead == '.') ADVANCE(21);
            if (lookahead == '/') ADVANCE(31);
            if (lookahead == ':') ADVANCE(24);
            if (lookahead == '@') ADVANCE(33);
            if (lookahead == '-' ||
                lookahead == '_') ADVANCE(28);
            if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
            if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
            if (sym_short_inner_environment_body_character_set_1(lookahead)) ADVANCE(31);
            if (sym_short_inner_environment_body_character_set_2(lookahead)) ADVANCE(31);
            if (sym_short_inner_environment_body_character_set_3(lookahead)) ADVANCE(31);
            END_STATE();
        case 1:
            if (lookahead == '\n') ADVANCE(42);
            END_STATE();
        case 2:
            if (lookahead == ' ') ADVANCE(22);
            if (lookahead == ':') ADVANCE(24);
            if (sym__letter_character_set_1(lookahead)) ADVANCE(38);
            END_STATE();
        case 3:
            if (lookahead == ' ') ADVANCE(18);
            END_STATE();
        case 4:
            if (lookahead == '$') ADVANCE(25);
            if (lookahead != 0 &&
                lookahead != '\n' &&
                lookahead != '\r') ADVANCE(26);
            END_STATE();
        case 5:
            if (lookahead == 'c') ADVANCE(8);
            END_STATE();
        case 6:
            if (lookahead == 'd') ADVANCE(7);
            END_STATE();
        case 7:
            if (lookahead == 'e') ADVANCE(3);
            END_STATE();
        case 8:
            if (lookahead == 'l') ADVANCE(10);
            END_STATE();
        case 9:
            if (lookahead == 'n') ADVANCE(5);
            END_STATE();
        case 10:
            if (lookahead == 'u') ADVANCE(6);
            END_STATE();
        case 11:
            if (lookahead == '-' ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                lookahead == '_' ||
                ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
            END_STATE();
        case 12:
            if (lookahead == '-' ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                lookahead == '_' ||
                ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
            END_STATE();
        case 13:
            if (sym__lowercase_letter_character_set_1(lookahead)) ADVANCE(40);
            END_STATE();
        case 14:
            if (sym_short_inner_environment_body_character_set_4(lookahead)) ADVANCE(31);
            END_STATE();
        case 15:
            if (lookahead != 0 &&
                lookahead != '\n' &&
                lookahead != '\r') ADVANCE(19);
            END_STATE();
        case 16:
            if (eof) ADVANCE(17);
            if (lookahead == '\n') ADVANCE(41);
            if (lookahead == '\r') ADVANCE(1);
            if (lookahead == ' ') ADVANCE(22);
            if (lookahead == '!') ADVANCE(36);
            if (lookahead == '"') ADVANCE(32);
            if (lookahead == '#') ADVANCE(34);
            if (lookahead == '$') ADVANCE(25);
            if (lookahead == '.') ADVANCE(20);
            if (lookahead == '@') ADVANCE(33);
            if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
            if (sym__uppercase_letter_character_set_1(lookahead)) ADVANCE(39);
            if (sym_short_inner_environment_body_character_set_2(lookahead)) ADVANCE(40);
            END_STATE();
        case 17:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 18:
            ACCEPT_TOKEN(anon_sym_DOTinclude);
            END_STATE();
        case 19:
            ACCEPT_TOKEN(sym_filename);
            if (lookahead != 0 &&
                lookahead != '\n' &&
                lookahead != '\r') ADVANCE(19);
            END_STATE();
        case 20:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 21:
            ACCEPT_TOKEN(anon_sym_DOT);
            if (lookahead == 'i') ADVANCE(9);
            END_STATE();
        case 22:
            ACCEPT_TOKEN(anon_sym_);
            END_STATE();
        case 23:
            ACCEPT_TOKEN(sym__meta_block_content);
            if (lookahead != 0 &&
                lookahead != '\n' &&
                lookahead != '\r') ADVANCE(23);
            END_STATE();
        case 24:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 25:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 26:
            ACCEPT_TOKEN(aux_sym_math_environment_body_token1);
            if (lookahead != 0 &&
                lookahead != '\n' &&
                lookahead != '\r' &&
                lookahead != '$') ADVANCE(26);
            END_STATE();
        case 27:
            ACCEPT_TOKEN(aux_sym_short_inner_environment_type_token1);
            if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
            if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
            if (lookahead == '-' ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                lookahead == '_') ADVANCE(28);
            if (sym_short_inner_environment_body_character_set_5(lookahead)) ADVANCE(31);
            END_STATE();
        case 28:
            ACCEPT_TOKEN(aux_sym_short_inner_environment_type_token1);
            if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
            if (lookahead == '-' ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                lookahead == '_' ||
                ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
            if (sym_short_inner_environment_body_character_set_5(lookahead)) ADVANCE(31);
            END_STATE();
        case 29:
            ACCEPT_TOKEN(aux_sym_short_inner_environment_type_token1);
            if (lookahead == '-' ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                lookahead == '_' ||
                ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
            END_STATE();
        case 30:
            ACCEPT_TOKEN(sym_short_inner_environment_body);
            if (lookahead == '-' ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                lookahead == '_' ||
                ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
            if (sym_short_inner_environment_body_character_set_5(lookahead)) ADVANCE(31);
            END_STATE();
        case 31:
            ACCEPT_TOKEN(sym_short_inner_environment_body);
            if (sym_short_inner_environment_body_character_set_4(lookahead)) ADVANCE(31);
            END_STATE();
        case 32:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 33:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 34:
            ACCEPT_TOKEN(anon_sym_POUND);
            END_STATE();
        case 35:
            ACCEPT_TOKEN(aux_sym_verbose_inner_environment_hash_end_token1);
            if (lookahead == '-' ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                lookahead == '_' ||
                ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
            END_STATE();
        case 36:
            ACCEPT_TOKEN(anon_sym_BANG);
            END_STATE();
        case 37:
            ACCEPT_TOKEN(sym_outer_environment_type);
            if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
            END_STATE();
        case 38:
            ACCEPT_TOKEN(sym__letter);
            END_STATE();
        case 39:
            ACCEPT_TOKEN(sym__uppercase_letter);
            END_STATE();
        case 40:
            ACCEPT_TOKEN(sym__lowercase_letter);
            END_STATE();
        case 41:
            ACCEPT_TOKEN(anon_sym_LF);
            END_STATE();
        case 42:
            ACCEPT_TOKEN(anon_sym_CR_LF);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
        [0] = {.lex_state = 0, .external_lex_state = 1},
        [1] = {.lex_state = 0, .external_lex_state = 2},
        [2] = {.lex_state = 16, .external_lex_state = 3},
        [3] = {.lex_state = 16, .external_lex_state = 3},
        [4] = {.lex_state = 16, .external_lex_state = 4},
        [5] = {.lex_state = 16, .external_lex_state = 3},
        [6] = {.lex_state = 16, .external_lex_state = 3},
        [7] = {.lex_state = 16, .external_lex_state = 3},
        [8] = {.lex_state = 16, .external_lex_state = 3},
        [9] = {.lex_state = 16, .external_lex_state = 3},
        [10] = {.lex_state = 16, .external_lex_state = 3},
        [11] = {.lex_state = 16, .external_lex_state = 3},
        [12] = {.lex_state = 16, .external_lex_state = 3},
        [13] = {.lex_state = 16, .external_lex_state = 4},
        [14] = {.lex_state = 16, .external_lex_state = 4},
        [15] = {.lex_state = 16, .external_lex_state = 5},
        [16] = {.lex_state = 16, .external_lex_state = 6},
        [17] = {.lex_state = 16, .external_lex_state = 5},
        [18] = {.lex_state = 16, .external_lex_state = 5},
        [19] = {.lex_state = 16, .external_lex_state = 5},
        [20] = {.lex_state = 16, .external_lex_state = 7},
        [21] = {.lex_state = 16, .external_lex_state = 6},
        [22] = {.lex_state = 16, .external_lex_state = 8},
        [23] = {.lex_state = 16, .external_lex_state = 6},
        [24] = {.lex_state = 16, .external_lex_state = 8},
        [25] = {.lex_state = 16, .external_lex_state = 8},
        [26] = {.lex_state = 16, .external_lex_state = 7},
        [27] = {.lex_state = 16, .external_lex_state = 9},
        [28] = {.lex_state = 16, .external_lex_state = 7},
        [29] = {.lex_state = 16, .external_lex_state = 9},
        [30] = {.lex_state = 16, .external_lex_state = 10},
        [31] = {.lex_state = 16, .external_lex_state = 10},
        [32] = {.lex_state = 16, .external_lex_state = 11},
        [33] = {.lex_state = 16, .external_lex_state = 11},
        [34] = {.lex_state = 16, .external_lex_state = 8},
        [35] = {.lex_state = 16, .external_lex_state = 11},
        [36] = {.lex_state = 16, .external_lex_state = 8},
        [37] = {.lex_state = 16, .external_lex_state = 8},
        [38] = {.lex_state = 16, .external_lex_state = 8},
        [39] = {.lex_state = 16, .external_lex_state = 12},
        [40] = {.lex_state = 16, .external_lex_state = 12},
        [41] = {.lex_state = 16, .external_lex_state = 8},
        [42] = {.lex_state = 16, .external_lex_state = 8},
        [43] = {.lex_state = 16, .external_lex_state = 4},
        [44] = {.lex_state = 16, .external_lex_state = 4},
        [45] = {.lex_state = 16, .external_lex_state = 13},
        [46] = {.lex_state = 16, .external_lex_state = 4},
        [47] = {.lex_state = 16, .external_lex_state = 8},
        [48] = {.lex_state = 16, .external_lex_state = 8},
        [49] = {.lex_state = 16, .external_lex_state = 4},
        [50] = {.lex_state = 16, .external_lex_state = 4},
        [51] = {.lex_state = 16, .external_lex_state = 13},
        [52] = {.lex_state = 16, .external_lex_state = 4},
        [53] = {.lex_state = 16, .external_lex_state = 4},
        [54] = {.lex_state = 16, .external_lex_state = 4},
        [55] = {.lex_state = 16, .external_lex_state = 8},
        [56] = {.lex_state = 16, .external_lex_state = 4},
        [57] = {.lex_state = 16, .external_lex_state = 8},
        [58] = {.lex_state = 16, .external_lex_state = 5},
        [59] = {.lex_state = 16, .external_lex_state = 5},
        [60] = {.lex_state = 16, .external_lex_state = 5},
        [61] = {.lex_state = 16, .external_lex_state = 5},
        [62] = {.lex_state = 16, .external_lex_state = 5},
        [63] = {.lex_state = 16, .external_lex_state = 5},
        [64] = {.lex_state = 16, .external_lex_state = 5},
        [65] = {.lex_state = 16, .external_lex_state = 5},
        [66] = {.lex_state = 16, .external_lex_state = 5},
        [67] = {.lex_state = 16, .external_lex_state = 14},
        [68] = {.lex_state = 0, .external_lex_state = 2},
        [69] = {.lex_state = 16, .external_lex_state = 14},
        [70] = {.lex_state = 0, .external_lex_state = 2},
        [71] = {.lex_state = 0, .external_lex_state = 2},
        [72] = {.lex_state = 0, .external_lex_state = 15},
        [73] = {.lex_state = 0, .external_lex_state = 2},
        [74] = {.lex_state = 16, .external_lex_state = 6},
        [75] = {.lex_state = 16, .external_lex_state = 6},
        [76] = {.lex_state = 0, .external_lex_state = 16},
        [77] = {.lex_state = 0, .external_lex_state = 16},
        [78] = {.lex_state = 16, .external_lex_state = 6},
        [79] = {.lex_state = 16, .external_lex_state = 17},
        [80] = {.lex_state = 16, .external_lex_state = 6},
        [81] = {.lex_state = 16, .external_lex_state = 6},
        [82] = {.lex_state = 16, .external_lex_state = 6},
        [83] = {.lex_state = 0, .external_lex_state = 15},
        [84] = {.lex_state = 16, .external_lex_state = 17},
        [85] = {.lex_state = 16, .external_lex_state = 6},
        [86] = {.lex_state = 16, .external_lex_state = 6},
        [87] = {.lex_state = 16, .external_lex_state = 6},
        [88] = {.lex_state = 0, .external_lex_state = 16},
        [89] = {.lex_state = 0, .external_lex_state = 16},
        [90] = {.lex_state = 16, .external_lex_state = 7},
        [91] = {.lex_state = 16, .external_lex_state = 7},
        [92] = {.lex_state = 16, .external_lex_state = 7},
        [93] = {.lex_state = 16, .external_lex_state = 7},
        [94] = {.lex_state = 16, .external_lex_state = 7},
        [95] = {.lex_state = 16, .external_lex_state = 7},
        [96] = {.lex_state = 16, .external_lex_state = 7},
        [97] = {.lex_state = 16, .external_lex_state = 7},
        [98] = {.lex_state = 16, .external_lex_state = 7},
        [99] = {.lex_state = 0, .external_lex_state = 2},
        [100] = {.lex_state = 0, .external_lex_state = 18},
        [101] = {.lex_state = 0, .external_lex_state = 19},
        [102] = {.lex_state = 0, .external_lex_state = 18},
        [103] = {.lex_state = 0, .external_lex_state = 18},
        [104] = {.lex_state = 0, .external_lex_state = 2},
        [105] = {.lex_state = 0, .external_lex_state = 16},
        [106] = {.lex_state = 0, .external_lex_state = 18},
        [107] = {.lex_state = 0, .external_lex_state = 16},
        [108] = {.lex_state = 0, .external_lex_state = 16},
        [109] = {.lex_state = 0, .external_lex_state = 2},
        [110] = {.lex_state = 0, .external_lex_state = 16},
        [111] = {.lex_state = 0, .external_lex_state = 20},
        [112] = {.lex_state = 0, .external_lex_state = 16},
        [113] = {.lex_state = 0, .external_lex_state = 18},
        [114] = {.lex_state = 0, .external_lex_state = 19},
        [115] = {.lex_state = 0, .external_lex_state = 19},
        [116] = {.lex_state = 0, .external_lex_state = 2},
        [117] = {.lex_state = 0, .external_lex_state = 18},
        [118] = {.lex_state = 0, .external_lex_state = 2},
        [119] = {.lex_state = 0, .external_lex_state = 18},
        [120] = {.lex_state = 0, .external_lex_state = 16},
        [121] = {.lex_state = 0, .external_lex_state = 2},
        [122] = {.lex_state = 0, .external_lex_state = 16},
        [123] = {.lex_state = 0, .external_lex_state = 19},
        [124] = {.lex_state = 0, .external_lex_state = 2},
        [125] = {.lex_state = 0, .external_lex_state = 21},
        [126] = {.lex_state = 0, .external_lex_state = 21},
        [127] = {.lex_state = 0, .external_lex_state = 2},
        [128] = {.lex_state = 16, .external_lex_state = 22},
        [129] = {.lex_state = 0, .external_lex_state = 2},
        [130] = {.lex_state = 0, .external_lex_state = 20},
        [131] = {.lex_state = 0, .external_lex_state = 2},
        [132] = {.lex_state = 0, .external_lex_state = 2},
        [133] = {.lex_state = 0, .external_lex_state = 21},
        [134] = {.lex_state = 0, .external_lex_state = 2},
        [135] = {.lex_state = 0, .external_lex_state = 2},
        [136] = {.lex_state = 0, .external_lex_state = 23},
        [137] = {.lex_state = 16, .external_lex_state = 22},
        [138] = {.lex_state = 0, .external_lex_state = 2},
        [139] = {.lex_state = 0, .external_lex_state = 24},
        [140] = {.lex_state = 0, .external_lex_state = 19},
        [141] = {.lex_state = 16, .external_lex_state = 11},
        [142] = {.lex_state = 0, .external_lex_state = 24},
        [143] = {.lex_state = 16, .external_lex_state = 11},
        [144] = {.lex_state = 0, .external_lex_state = 24},
        [145] = {.lex_state = 16, .external_lex_state = 11},
        [146] = {.lex_state = 16, .external_lex_state = 11},
        [147] = {.lex_state = 16, .external_lex_state = 11},
        [148] = {.lex_state = 16, .external_lex_state = 11},
        [149] = {.lex_state = 0, .external_lex_state = 19},
        [150] = {.lex_state = 16, .external_lex_state = 19},
        [151] = {.lex_state = 16, .external_lex_state = 11},
        [152] = {.lex_state = 16, .external_lex_state = 11},
        [153] = {.lex_state = 0, .external_lex_state = 23},
        [154] = {.lex_state = 0, .external_lex_state = 19},
        [155] = {.lex_state = 16, .external_lex_state = 11},
        [156] = {.lex_state = 0, .external_lex_state = 19},
        [157] = {.lex_state = 0, .external_lex_state = 21},
        [158] = {.lex_state = 16, .external_lex_state = 19},
        [159] = {.lex_state = 0, .external_lex_state = 19},
        [160] = {.lex_state = 2, .external_lex_state = 19},
        [161] = {.lex_state = 2, .external_lex_state = 19},
        [162] = {.lex_state = 0, .external_lex_state = 21},
        [163] = {.lex_state = 0, .external_lex_state = 19},
        [164] = {.lex_state = 0, .external_lex_state = 19},
        [165] = {.lex_state = 16, .external_lex_state = 19},
        [166] = {.lex_state = 16, .external_lex_state = 19},
        [167] = {.lex_state = 16, .external_lex_state = 19},
        [168] = {.lex_state = 0, .external_lex_state = 19},
        [169] = {.lex_state = 16, .external_lex_state = 19},
        [170] = {.lex_state = 0, .external_lex_state = 21},
        [171] = {.lex_state = 0, .external_lex_state = 21},
        [172] = {.lex_state = 0, .external_lex_state = 21},
        [173] = {.lex_state = 0, .external_lex_state = 19},
        [174] = {.lex_state = 0, .external_lex_state = 21},
        [175] = {.lex_state = 0, .external_lex_state = 19},
        [176] = {.lex_state = 0, .external_lex_state = 21},
        [177] = {.lex_state = 2, .external_lex_state = 19},
        [178] = {.lex_state = 4, .external_lex_state = 19},
        [179] = {.lex_state = 0, .external_lex_state = 24},
        [180] = {.lex_state = 0, .external_lex_state = 19},
        [181] = {.lex_state = 2, .external_lex_state = 19},
        [182] = {.lex_state = 4, .external_lex_state = 19},
        [183] = {.lex_state = 2, .external_lex_state = 19},
        [184] = {.lex_state = 4, .external_lex_state = 19},
        [185] = {.lex_state = 16, .external_lex_state = 19},
        [186] = {.lex_state = 2, .external_lex_state = 19},
        [187] = {.lex_state = 23, .external_lex_state = 25},
        [188] = {.lex_state = 23, .external_lex_state = 25},
        [189] = {.lex_state = 0, .external_lex_state = 24},
        [190] = {.lex_state = 23, .external_lex_state = 25},
        [191] = {.lex_state = 0, .external_lex_state = 24},
        [192] = {.lex_state = 0, .external_lex_state = 26},
        [193] = {.lex_state = 4, .external_lex_state = 19},
        [194] = {.lex_state = 0, .external_lex_state = 19},
        [195] = {.lex_state = 4, .external_lex_state = 19},
        [196] = {.lex_state = 23, .external_lex_state = 25},
        [197] = {.lex_state = 23, .external_lex_state = 27},
        [198] = {.lex_state = 16, .external_lex_state = 19},
        [199] = {.lex_state = 0, .external_lex_state = 26},
        [200] = {.lex_state = 4, .external_lex_state = 19},
        [201] = {.lex_state = 23, .external_lex_state = 25},
        [202] = {.lex_state = 0, .external_lex_state = 28},
        [203] = {.lex_state = 0, .external_lex_state = 24},
        [204] = {.lex_state = 16, .external_lex_state = 19},
        [205] = {.lex_state = 0, .external_lex_state = 28},
        [206] = {.lex_state = 4, .external_lex_state = 19},
        [207] = {.lex_state = 0, .external_lex_state = 19},
        [208] = {.lex_state = 23, .external_lex_state = 25},
        [209] = {.lex_state = 4, .external_lex_state = 26},
        [210] = {.lex_state = 0, .external_lex_state = 28},
        [211] = {.lex_state = 0, .external_lex_state = 24},
        [212] = {.lex_state = 0, .external_lex_state = 24},
        [213] = {.lex_state = 0, .external_lex_state = 24},
        [214] = {.lex_state = 12, .external_lex_state = 19},
        [215] = {.lex_state = 23, .external_lex_state = 25},
        [216] = {.lex_state = 16, .external_lex_state = 19},
        [217] = {.lex_state = 0, .external_lex_state = 28},
        [218] = {.lex_state = 13, .external_lex_state = 19},
        [219] = {.lex_state = 0, .external_lex_state = 19},
        [220] = {.lex_state = 13, .external_lex_state = 19},
        [221] = {.lex_state = 13, .external_lex_state = 19},
        [222] = {.lex_state = 13, .external_lex_state = 19},
        [223] = {.lex_state = 13, .external_lex_state = 19},
        [224] = {.lex_state = 12, .external_lex_state = 19},
        [225] = {.lex_state = 13, .external_lex_state = 19},
        [226] = {.lex_state = 23, .external_lex_state = 19},
        [227] = {.lex_state = 23, .external_lex_state = 19},
        [228] = {.lex_state = 23, .external_lex_state = 19},
        [229] = {.lex_state = 23, .external_lex_state = 19},
        [230] = {.lex_state = 12, .external_lex_state = 19},
        [231] = {.lex_state = 12, .external_lex_state = 19},
        [232] = {.lex_state = 23, .external_lex_state = 19},
        [233] = {.lex_state = 13, .external_lex_state = 19},
        [234] = {.lex_state = 12, .external_lex_state = 19},
        [235] = {.lex_state = 13, .external_lex_state = 19},
        [236] = {.lex_state = 12, .external_lex_state = 19},
        [237] = {.lex_state = 12, .external_lex_state = 19},
        [238] = {.lex_state = 12, .external_lex_state = 19},
        [239] = {.lex_state = 4, .external_lex_state = 19},
        [240] = {.lex_state = 12, .external_lex_state = 19},
        [241] = {.lex_state = 12, .external_lex_state = 19},
        [242] = {.lex_state = 13, .external_lex_state = 19},
        [243] = {.lex_state = 13, .external_lex_state = 19},
        [244] = {.lex_state = 0, .external_lex_state = 18},
        [245] = {.lex_state = 0, .external_lex_state = 19},
        [246] = {.lex_state = 16, .external_lex_state = 19},
        [247] = {.lex_state = 0, .external_lex_state = 19},
        [248] = {.lex_state = 0, .external_lex_state = 25},
        [249] = {.lex_state = 0, .external_lex_state = 25},
        [250] = {.lex_state = 12, .external_lex_state = 19},
        [251] = {.lex_state = 12, .external_lex_state = 19},
        [252] = {.lex_state = 0, .external_lex_state = 19},
        [253] = {.lex_state = 14, .external_lex_state = 19},
        [254] = {.lex_state = 0, .external_lex_state = 25},
        [255] = {.lex_state = 14, .external_lex_state = 19},
        [256] = {.lex_state = 0, .external_lex_state = 19},
        [257] = {.lex_state = 14, .external_lex_state = 19},
        [258] = {.lex_state = 0, .external_lex_state = 19},
        [259] = {.lex_state = 12, .external_lex_state = 19},
        [260] = {.lex_state = 0, .external_lex_state = 19},
        [261] = {.lex_state = 0, .external_lex_state = 19},
        [262] = {.lex_state = 0, .external_lex_state = 19},
        [263] = {.lex_state = 0, .external_lex_state = 18},
        [264] = {.lex_state = 0, .external_lex_state = 25},
        [265] = {.lex_state = 0, .external_lex_state = 19},
        [266] = {.lex_state = 0, .external_lex_state = 29},
        [267] = {.lex_state = 0, .external_lex_state = 19},
        [268] = {.lex_state = 0, .external_lex_state = 19},
        [269] = {.lex_state = 0, .external_lex_state = 19},
        [270] = {.lex_state = 0, .external_lex_state = 25},
        [271] = {.lex_state = 0, .external_lex_state = 19},
        [272] = {.lex_state = 12, .external_lex_state = 19},
        [273] = {.lex_state = 0, .external_lex_state = 29},
        [274] = {.lex_state = 0, .external_lex_state = 19},
        [275] = {.lex_state = 0, .external_lex_state = 18},
        [276] = {.lex_state = 0, .external_lex_state = 18},
        [277] = {.lex_state = 0, .external_lex_state = 25},
        [278] = {.lex_state = 0, .external_lex_state = 18},
        [279] = {.lex_state = 0, .external_lex_state = 19},
        [280] = {.lex_state = 0, .external_lex_state = 19},
        [281] = {.lex_state = 12, .external_lex_state = 19},
        [282] = {.lex_state = 0, .external_lex_state = 25},
        [283] = {.lex_state = 0, .external_lex_state = 19},
        [284] = {.lex_state = 0, .external_lex_state = 29},
        [285] = {.lex_state = 0, .external_lex_state = 18},
        [286] = {.lex_state = 0, .external_lex_state = 18},
        [287] = {.lex_state = 14, .external_lex_state = 19},
        [288] = {.lex_state = 0, .external_lex_state = 25},
        [289] = {.lex_state = 0, .external_lex_state = 25},
        [290] = {.lex_state = 0, .external_lex_state = 18},
        [291] = {.lex_state = 0, .external_lex_state = 18},
        [292] = {.lex_state = 0, .external_lex_state = 19},
        [293] = {.lex_state = 0, .external_lex_state = 25},
        [294] = {.lex_state = 11, .external_lex_state = 19},
        [295] = {.lex_state = 0, .external_lex_state = 19},
        [296] = {.lex_state = 0, .external_lex_state = 19},
        [297] = {.lex_state = 0, .external_lex_state = 19},
        [298] = {.lex_state = 0, .external_lex_state = 19},
        [299] = {.lex_state = 15, .external_lex_state = 19},
        [300] = {.lex_state = 0, .external_lex_state = 19},
        [301] = {.lex_state = 14, .external_lex_state = 19},
        [302] = {.lex_state = 0, .external_lex_state = 19},
        [303] = {.lex_state = 0, .external_lex_state = 19},
        [304] = {.lex_state = 16, .external_lex_state = 19},
        [305] = {.lex_state = 16, .external_lex_state = 19},
};

enum {
    ts_external_token__text_no_space_no_dot = 0,
    ts_external_token_text = 1,
    ts_external_token_fragile_outer_environment_body = 2,
    ts_external_token__comment = 3,
    ts_external_token_verbose_inner_environment_meta = 4,
    ts_external_token__ex_indent = 5,
    ts_external_token__ex_dedent = 6,
    ts_external_token__ex_newline = 7,
    ts_external_token__ex_empty_line = 8,
    ts_external_token__ex_multi_empty_line = 9,
    ts_external_token_error_sentinel = 10,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
        [ts_external_token__text_no_space_no_dot] = sym__text_no_space_no_dot,
        [ts_external_token_text] = sym_text,
        [ts_external_token_fragile_outer_environment_body] = sym_fragile_outer_environment_body,
        [ts_external_token__comment] = sym__comment,
        [ts_external_token_verbose_inner_environment_meta] = sym_verbose_inner_environment_meta,
        [ts_external_token__ex_indent] = sym__ex_indent,
        [ts_external_token__ex_dedent] = sym__ex_dedent,
        [ts_external_token__ex_newline] = sym__ex_newline,
        [ts_external_token__ex_empty_line] = sym__ex_empty_line,
        [ts_external_token__ex_multi_empty_line] = sym__ex_multi_empty_line,
        [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[30][EXTERNAL_TOKEN_COUNT] = {
        [1] = {
                [ts_external_token__text_no_space_no_dot] = true,
                [ts_external_token_text] = true,
                [ts_external_token_fragile_outer_environment_body] = true,
                [ts_external_token__comment] = true,
                [ts_external_token_verbose_inner_environment_meta] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
                [ts_external_token_error_sentinel] = true,
        },
        [2] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [3] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
        },
        [4] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [5] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [6] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [7] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
        },
        [8] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
        },
        [9] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [10] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_empty_line] = true,
        },
        [11] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token__ex_newline] = true,
        },
        [12] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token_verbose_inner_environment_meta] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [13] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token_verbose_inner_environment_meta] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [14] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token_verbose_inner_environment_meta] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [15] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [16] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [17] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token_verbose_inner_environment_meta] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
        },
        [18] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
        },
        [19] = {
                [ts_external_token__comment] = true,
        },
        [20] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [21] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_empty_line] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [22] = {
                [ts_external_token_text] = true,
                [ts_external_token__comment] = true,
                [ts_external_token_verbose_inner_environment_meta] = true,
                [ts_external_token__ex_newline] = true,
        },
        [23] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_newline] = true,
                [ts_external_token__ex_empty_line] = true,
        },
        [24] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_indent] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_empty_line] = true,
        },
        [25] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_dedent] = true,
        },
        [26] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_newline] = true,
        },
        [27] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_newline] = true,
        },
        [28] = {
                [ts_external_token__comment] = true,
                [ts_external_token__ex_dedent] = true,
                [ts_external_token__ex_multi_empty_line] = true,
        },
        [29] = {
                [ts_external_token_fragile_outer_environment_body] = true,
                [ts_external_token__comment] = true,
        },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
        [0] = {
                [ts_builtin_sym_end] = ACTIONS(1),
                [anon_sym_DOTinclude] = ACTIONS(1),
                [anon_sym_DOT] = ACTIONS(1),
                [anon_sym_] = ACTIONS(1),
                [anon_sym_COLON] = ACTIONS(1),
                [anon_sym_DOLLAR] = ACTIONS(1),
                [aux_sym_short_inner_environment_type_token1] = ACTIONS(1),
                [sym_short_inner_environment_body] = ACTIONS(1),
                [anon_sym_DQUOTE] = ACTIONS(1),
                [anon_sym_AT] = ACTIONS(1),
                [anon_sym_POUND] = ACTIONS(1),
                [aux_sym_verbose_inner_environment_hash_end_token1] = ACTIONS(1),
                [anon_sym_BANG] = ACTIONS(1),
                [sym_outer_environment_type] = ACTIONS(1),
                [sym__letter] = ACTIONS(1),
                [sym__uppercase_letter] = ACTIONS(1),
                [sym__lowercase_letter] = ACTIONS(1),
                [anon_sym_LF] = ACTIONS(1),
                [anon_sym_CR_LF] = ACTIONS(1),
                [sym__inn_env_type_char] = ACTIONS(1),
                [sym__text_no_space_no_dot] = ACTIONS(1),
                [sym_text] = ACTIONS(1),
                [sym_fragile_outer_environment_body] = ACTIONS(1),
                [sym__comment] = ACTIONS(3),
                [sym_verbose_inner_environment_meta] = ACTIONS(1),
                [sym__ex_indent] = ACTIONS(1),
                [sym__ex_dedent] = ACTIONS(1),
                [sym__ex_newline] = ACTIONS(1),
                [sym__ex_empty_line] = ACTIONS(1),
                [sym__ex_multi_empty_line] = ACTIONS(1),
                [sym_error_sentinel] = ACTIONS(1),
        },
        [1] = {
                [sym_source_file] = STATE(297),
                [sym_include] = STATE(70),
                [sym_document_part] = STATE(70),
                [anon_sym_DOTinclude] = ACTIONS(5),
                [anon_sym_DOT] = ACTIONS(7),
                [sym__comment] = ACTIONS(3),
                [sym__ex_empty_line] = ACTIONS(9),
                [sym__ex_multi_empty_line] = ACTIONS(9),
        },
};

static const uint16_t ts_small_parse_table[] = {
        [0] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(11), 1,
        anon_sym_DOT,
        ACTIONS(13), 1,
        anon_sym_DOLLAR,
        ACTIONS(15), 1,
        anon_sym_DQUOTE,
        ACTIONS(17), 1,
        anon_sym_BANG,
        ACTIONS(19), 1,
        sym_text,
        ACTIONS(21), 1,
        sym__ex_indent,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(135), 3,
        sym__document_part_content,
        sym_wobject,
        sym_block,
        STATE(4), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(76), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [47] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(11), 1,
        anon_sym_DOT,
        ACTIONS(13), 1,
        anon_sym_DOLLAR,
        ACTIONS(15), 1,
        anon_sym_DQUOTE,
        ACTIONS(17), 1,
        anon_sym_BANG,
        ACTIONS(19), 1,
        sym_text,
        ACTIONS(21), 1,
        sym__ex_indent,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(118), 3,
        sym__document_part_content,
        sym_wobject,
        sym_block,
        STATE(4), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(76), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [94] = 12,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(13), 1,
        anon_sym_DOLLAR,
        ACTIONS(15), 1,
        anon_sym_DQUOTE,
        ACTIONS(25), 1,
        anon_sym_DOT,
        ACTIONS(27), 1,
        sym_text,
        ACTIONS(29), 1,
        sym__ex_indent,
        ACTIONS(31), 1,
        sym__ex_newline,
        STATE(72), 1,
        aux_sym_text_block_repeat1,
        STATE(110), 1,
        sym_meta_block,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(14), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        ACTIONS(23), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [142] = 12,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(33), 1,
        anon_sym_DOT,
        ACTIONS(35), 1,
        anon_sym_DOLLAR,
        ACTIONS(37), 1,
        anon_sym_DQUOTE,
        ACTIONS(39), 1,
        anon_sym_BANG,
        ACTIONS(41), 1,
        sym_text,
        ACTIONS(43), 1,
        sym__ex_indent,
        STATE(202), 1,
        sym_block,
        STATE(289), 1,
        sym__wobject_body,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(16), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(126), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [190] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(45), 1,
        anon_sym_DOT,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(51), 1,
        anon_sym_BANG,
        ACTIONS(53), 1,
        sym_text,
        ACTIONS(55), 1,
        sym__ex_indent,
        STATE(249), 1,
        sym_block,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(20), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(144), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [235] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(45), 1,
        anon_sym_DOT,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(51), 1,
        anon_sym_BANG,
        ACTIONS(53), 1,
        sym_text,
        ACTIONS(55), 1,
        sym__ex_indent,
        STATE(264), 1,
        sym_block,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(20), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(144), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [280] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(45), 1,
        anon_sym_DOT,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(51), 1,
        anon_sym_BANG,
        ACTIONS(53), 1,
        sym_text,
        ACTIONS(55), 1,
        sym__ex_indent,
        STATE(254), 1,
        sym_block,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(20), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(144), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [325] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(45), 1,
        anon_sym_DOT,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(51), 1,
        anon_sym_BANG,
        ACTIONS(53), 1,
        sym_text,
        ACTIONS(55), 1,
        sym__ex_indent,
        STATE(277), 1,
        sym_block,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(20), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(144), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [370] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(45), 1,
        anon_sym_DOT,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(51), 1,
        anon_sym_BANG,
        ACTIONS(53), 1,
        sym_text,
        ACTIONS(55), 1,
        sym__ex_indent,
        STATE(282), 1,
        sym_block,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(20), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(144), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [415] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(45), 1,
        anon_sym_DOT,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(51), 1,
        anon_sym_BANG,
        ACTIONS(53), 1,
        sym_text,
        ACTIONS(55), 1,
        sym__ex_indent,
        STATE(288), 1,
        sym_block,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(20), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(144), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [460] = 11,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(33), 1,
        anon_sym_DOT,
        ACTIONS(35), 1,
        anon_sym_DOLLAR,
        ACTIONS(37), 1,
        anon_sym_DQUOTE,
        ACTIONS(39), 1,
        anon_sym_BANG,
        ACTIONS(41), 1,
        sym_text,
        ACTIONS(43), 1,
        sym__ex_indent,
        STATE(217), 1,
        sym_block,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(16), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        STATE(126), 6,
        sym_text_block,
        sym__outer_environment,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        sym_implicit_outer_environment,
        [505] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(13), 1,
        anon_sym_DOLLAR,
        ACTIONS(15), 1,
        anon_sym_DQUOTE,
        ACTIONS(25), 1,
        anon_sym_DOT,
        ACTIONS(27), 1,
        sym_text,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(14), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        ACTIONS(57), 8,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [543] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(61), 1,
        anon_sym_DOT,
        ACTIONS(64), 1,
        anon_sym_DOLLAR,
        ACTIONS(67), 1,
        anon_sym_DQUOTE,
        ACTIONS(70), 1,
        sym_text,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(14), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        ACTIONS(59), 8,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [581] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(13), 1,
        anon_sym_DOLLAR,
        ACTIONS(15), 1,
        anon_sym_DQUOTE,
        ACTIONS(25), 1,
        anon_sym_DOT,
        ACTIONS(75), 1,
        sym_text,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(13), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        ACTIONS(73), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [618] = 12,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(35), 1,
        anon_sym_DOLLAR,
        ACTIONS(37), 1,
        anon_sym_DQUOTE,
        ACTIONS(77), 1,
        anon_sym_DOT,
        ACTIONS(79), 1,
        sym_text,
        ACTIONS(81), 1,
        sym__ex_indent,
        ACTIONS(83), 1,
        sym__ex_newline,
        STATE(111), 1,
        aux_sym_text_block_repeat1,
        STATE(172), 1,
        sym_meta_block,
        ACTIONS(23), 3,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(23), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [663] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(85), 1,
        anon_sym_DOT,
        ACTIONS(88), 1,
        anon_sym_DOLLAR,
        ACTIONS(91), 1,
        anon_sym_DQUOTE,
        ACTIONS(94), 1,
        sym_text,
        STATE(64), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(17), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        ACTIONS(59), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [700] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(99), 1,
        anon_sym_DOT,
        ACTIONS(101), 1,
        anon_sym_DOLLAR,
        ACTIONS(103), 1,
        anon_sym_DQUOTE,
        ACTIONS(105), 1,
        sym_text,
        STATE(64), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(17), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        ACTIONS(97), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [737] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(13), 1,
        anon_sym_DOLLAR,
        ACTIONS(15), 1,
        anon_sym_DQUOTE,
        ACTIONS(25), 1,
        anon_sym_DOT,
        ACTIONS(75), 1,
        sym_text,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(13), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        ACTIONS(107), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [774] = 12,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(109), 1,
        anon_sym_DOT,
        ACTIONS(111), 1,
        sym_text,
        ACTIONS(113), 1,
        sym__ex_indent,
        ACTIONS(115), 1,
        sym__ex_newline,
        STATE(136), 1,
        aux_sym_text_block_repeat1,
        STATE(179), 1,
        sym_meta_block,
        ACTIONS(23), 2,
        sym__ex_dedent,
        sym__ex_empty_line,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(26), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [818] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(35), 1,
        anon_sym_DOLLAR,
        ACTIONS(37), 1,
        anon_sym_DQUOTE,
        ACTIONS(77), 1,
        anon_sym_DOT,
        ACTIONS(79), 1,
        sym_text,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        ACTIONS(57), 5,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        STATE(23), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [853] = 9,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(13), 1,
        anon_sym_DOLLAR,
        ACTIONS(15), 1,
        anon_sym_DQUOTE,
        ACTIONS(17), 1,
        anon_sym_BANG,
        ACTIONS(19), 1,
        sym_text,
        ACTIONS(117), 1,
        anon_sym_DOT,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(105), 4,
        sym_text_block,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        STATE(4), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [890] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(119), 1,
        anon_sym_DOT,
        ACTIONS(122), 1,
        anon_sym_DOLLAR,
        ACTIONS(125), 1,
        anon_sym_DQUOTE,
        ACTIONS(128), 1,
        sym_text,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        ACTIONS(59), 5,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        STATE(23), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [925] = 9,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(33), 1,
        anon_sym_DOT,
        ACTIONS(35), 1,
        anon_sym_DOLLAR,
        ACTIONS(37), 1,
        anon_sym_DQUOTE,
        ACTIONS(39), 1,
        anon_sym_BANG,
        ACTIONS(41), 1,
        sym_text,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(171), 4,
        sym_text_block,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        STATE(16), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [962] = 9,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(45), 1,
        anon_sym_DOT,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(51), 1,
        anon_sym_BANG,
        ACTIONS(53), 1,
        sym_text,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(203), 4,
        sym_text_block,
        sym__explicit_outer_environment,
        sym_fragile_outer_environment,
        sym_classic_outer_environment,
        STATE(20), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [999] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(131), 1,
        anon_sym_DOT,
        ACTIONS(134), 1,
        anon_sym_DOLLAR,
        ACTIONS(137), 1,
        anon_sym_DQUOTE,
        ACTIONS(140), 1,
        sym_text,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        ACTIONS(59), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        STATE(26), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1033] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(35), 1,
        anon_sym_DOLLAR,
        ACTIONS(37), 1,
        anon_sym_DQUOTE,
        ACTIONS(77), 1,
        anon_sym_DOT,
        ACTIONS(143), 1,
        sym_text,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        ACTIONS(107), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        STATE(21), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1067] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(109), 1,
        anon_sym_DOT,
        ACTIONS(111), 1,
        sym_text,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        ACTIONS(57), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        STATE(26), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1101] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(35), 1,
        anon_sym_DOLLAR,
        ACTIONS(37), 1,
        anon_sym_DQUOTE,
        ACTIONS(77), 1,
        anon_sym_DOT,
        ACTIONS(143), 1,
        sym_text,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        ACTIONS(73), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        STATE(21), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1135] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(109), 1,
        anon_sym_DOT,
        ACTIONS(145), 1,
        sym_text,
        ACTIONS(107), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(28), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1168] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(109), 1,
        anon_sym_DOT,
        ACTIONS(145), 1,
        sym_text,
        ACTIONS(73), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(28), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1201] = 9,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(147), 1,
        anon_sym_DOT,
        ACTIONS(149), 1,
        anon_sym_DOLLAR,
        ACTIONS(151), 1,
        anon_sym_DQUOTE,
        ACTIONS(154), 1,
        sym_text,
        ACTIONS(156), 1,
        sym__ex_newline,
        STATE(199), 1,
        aux_sym_text_block_repeat1,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(33), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1235] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(59), 1,
        sym__ex_newline,
        ACTIONS(158), 1,
        anon_sym_DOT,
        ACTIONS(161), 1,
        anon_sym_DOLLAR,
        ACTIONS(164), 1,
        anon_sym_DQUOTE,
        ACTIONS(167), 1,
        sym_text,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(33), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1266] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(147), 1,
        anon_sym_DOT,
        ACTIONS(149), 1,
        anon_sym_DOLLAR,
        ACTIONS(170), 1,
        anon_sym_DQUOTE,
        ACTIONS(172), 1,
        sym_text,
        STATE(245), 1,
        sym_verbose_inner_environment_body,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(32), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1297] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(57), 1,
        sym__ex_newline,
        ACTIONS(147), 1,
        anon_sym_DOT,
        ACTIONS(149), 1,
        anon_sym_DOLLAR,
        ACTIONS(154), 1,
        sym_text,
        ACTIONS(174), 1,
        anon_sym_DQUOTE,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(33), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1328] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(147), 1,
        anon_sym_DOT,
        ACTIONS(149), 1,
        anon_sym_DOLLAR,
        ACTIONS(170), 1,
        anon_sym_DQUOTE,
        ACTIONS(172), 1,
        sym_text,
        STATE(260), 1,
        sym_verbose_inner_environment_body,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(32), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1359] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(147), 1,
        anon_sym_DOT,
        ACTIONS(149), 1,
        anon_sym_DOLLAR,
        ACTIONS(170), 1,
        anon_sym_DQUOTE,
        ACTIONS(172), 1,
        sym_text,
        STATE(269), 1,
        sym_verbose_inner_environment_body,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(32), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1390] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(147), 1,
        anon_sym_DOT,
        ACTIONS(149), 1,
        anon_sym_DOLLAR,
        ACTIONS(170), 1,
        anon_sym_DQUOTE,
        ACTIONS(172), 1,
        sym_text,
        STATE(262), 1,
        sym_verbose_inner_environment_body,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(32), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1421] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(179), 1,
        sym_verbose_inner_environment_meta,
        ACTIONS(177), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1442] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(181), 13,
        sym_text,
        sym_verbose_inner_environment_meta,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1461] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(147), 1,
        anon_sym_DOT,
        ACTIONS(149), 1,
        anon_sym_DOLLAR,
        ACTIONS(170), 1,
        anon_sym_DQUOTE,
        ACTIONS(172), 1,
        sym_text,
        STATE(280), 1,
        sym_verbose_inner_environment_body,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(32), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1492] = 8,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(99), 1,
        anon_sym_DOT,
        ACTIONS(101), 1,
        anon_sym_DOLLAR,
        ACTIONS(103), 1,
        anon_sym_DQUOTE,
        ACTIONS(183), 1,
        sym_text,
        STATE(89), 1,
        sym_document_part_title,
        STATE(64), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(18), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1523] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(185), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1541] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(187), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1559] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(189), 1,
        sym_verbose_inner_environment_meta,
        ACTIONS(177), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1579] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(191), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1597] = 7,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(47), 1,
        anon_sym_DOLLAR,
        ACTIONS(49), 1,
        anon_sym_DQUOTE,
        ACTIONS(109), 1,
        anon_sym_DOT,
        ACTIONS(145), 1,
        sym_text,
        STATE(97), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(28), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1625] = 7,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(35), 1,
        anon_sym_DOLLAR,
        ACTIONS(37), 1,
        anon_sym_DQUOTE,
        ACTIONS(77), 1,
        anon_sym_DOT,
        ACTIONS(143), 1,
        sym_text,
        STATE(87), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(21), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1653] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(193), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1671] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(195), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1689] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(181), 12,
        sym_text,
        sym_verbose_inner_environment_meta,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1707] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(197), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1725] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(199), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1743] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(201), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1761] = 7,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(13), 1,
        anon_sym_DOLLAR,
        ACTIONS(15), 1,
        anon_sym_DQUOTE,
        ACTIONS(25), 1,
        anon_sym_DOT,
        ACTIONS(75), 1,
        sym_text,
        STATE(49), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(13), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1789] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(203), 12,
        sym_text,
        sym__ex_indent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1807] = 7,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(147), 1,
        anon_sym_DOT,
        ACTIONS(149), 1,
        anon_sym_DOLLAR,
        ACTIONS(170), 1,
        anon_sym_DQUOTE,
        ACTIONS(205), 1,
        sym_text,
        STATE(152), 3,
        sym_verbose_inner_environment_classic,
        sym_verbose_inner_environment_at,
        sym_verbose_inner_environment_hash,
        STATE(35), 5,
        aux_sym__text_line,
        sym_math_environment,
        sym__inner_environment,
        sym_short_inner_environment,
        sym_verbose_inner_environment,
        [1835] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(197), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1852] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(187), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1869] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(191), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1886] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(195), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1903] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(199), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1920] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(203), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1937] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(193), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1954] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(201), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1971] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(185), 11,
        sym_text,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_DOT,
        anon_sym_,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        anon_sym_LF,
        anon_sym_CR_LF,
        [1988] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(181), 10,
        sym_text,
        sym_verbose_inner_environment_meta,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2004] = 9,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(207), 1,
        ts_builtin_sym_end,
        ACTIONS(209), 1,
        anon_sym_,
        ACTIONS(213), 1,
        sym__ex_empty_line,
        ACTIONS(215), 1,
        sym__ex_multi_empty_line,
        STATE(116), 1,
        aux_sym_source_file_repeat1,
        STATE(168), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(211), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(114), 2,
        sym__newline_char,
        aux_sym_source_file_repeat2,
        [2034] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(217), 1,
        sym_verbose_inner_environment_meta,
        ACTIONS(177), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2052] = 9,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(209), 1,
        anon_sym_,
        ACTIONS(219), 1,
        ts_builtin_sym_end,
        ACTIONS(223), 1,
        sym__ex_empty_line,
        ACTIONS(225), 1,
        sym__ex_multi_empty_line,
        STATE(73), 1,
        aux_sym_source_file_repeat1,
        STATE(168), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(221), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(123), 2,
        sym__newline_char,
        aux_sym_source_file_repeat2,
        [2082] = 9,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(209), 1,
        anon_sym_,
        ACTIONS(227), 1,
        ts_builtin_sym_end,
        ACTIONS(231), 1,
        sym__ex_empty_line,
        ACTIONS(233), 1,
        sym__ex_multi_empty_line,
        STATE(68), 1,
        aux_sym_source_file_repeat1,
        STATE(168), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(229), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(101), 2,
        sym__newline_char,
        aux_sym_source_file_repeat2,
        [2112] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(29), 1,
        sym__ex_indent,
        ACTIONS(235), 1,
        sym__ex_newline,
        STATE(83), 1,
        aux_sym_text_block_repeat1,
        STATE(108), 1,
        sym_meta_block,
        ACTIONS(73), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2136] = 9,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(209), 1,
        anon_sym_,
        ACTIONS(227), 1,
        ts_builtin_sym_end,
        ACTIONS(231), 1,
        sym__ex_empty_line,
        ACTIONS(233), 1,
        sym__ex_multi_empty_line,
        STATE(116), 1,
        aux_sym_source_file_repeat1,
        STATE(168), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(229), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(101), 2,
        sym__newline_char,
        aux_sym_source_file_repeat2,
        [2166] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(187), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2181] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(197), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2196] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(21), 1,
        sym__ex_indent,
        ACTIONS(239), 1,
        sym__ex_empty_line,
        STATE(88), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        ACTIONS(237), 5,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2217] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(243), 1,
        sym__ex_indent,
        ACTIONS(246), 1,
        sym__ex_empty_line,
        STATE(77), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        ACTIONS(241), 5,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2238] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(191), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2253] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(249), 1,
        sym_verbose_inner_environment_meta,
        ACTIONS(177), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2270] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(195), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2285] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(185), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2300] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(199), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2315] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(251), 1,
        sym__ex_newline,
        STATE(83), 1,
        aux_sym_text_block_repeat1,
        ACTIONS(57), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2334] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(181), 9,
        sym_text,
        sym_verbose_inner_environment_meta,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2349] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(203), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2364] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(201), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2379] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(193), 9,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2394] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(21), 1,
        sym__ex_indent,
        ACTIONS(239), 1,
        sym__ex_empty_line,
        STATE(77), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        ACTIONS(254), 5,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2415] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(258), 1,
        sym__ex_indent,
        STATE(109), 1,
        sym_meta_block,
        STATE(134), 1,
        sym_document_part_body,
        ACTIONS(260), 2,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ACTIONS(256), 4,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2438] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(201), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2452] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(203), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2466] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(187), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2480] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(197), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2494] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(199), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2508] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(191), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2522] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(185), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2536] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(193), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2550] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(195), 8,
        sym_text,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_newline,
        sym__ex_empty_line,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [2564] = 4,
        ACTIONS(3), 1,
        sym__comment,
        STATE(131), 1,
        sym__newline_char,
        STATE(163), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(263), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2582] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(265), 1,
        anon_sym_,
        ACTIONS(269), 1,
        sym__ex_indent,
        STATE(164), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(267), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(276), 2,
        sym_meta_block,
        sym__newline_char,
        [2603] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(207), 1,
        ts_builtin_sym_end,
        ACTIONS(209), 1,
        anon_sym_,
        STATE(168), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(271), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(115), 2,
        sym__newline_char,
        aux_sym_source_file_repeat2,
        [2624] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(265), 1,
        anon_sym_,
        ACTIONS(269), 1,
        sym__ex_indent,
        STATE(164), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(273), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(290), 2,
        sym_meta_block,
        sym__newline_char,
        [2645] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(265), 1,
        anon_sym_,
        ACTIONS(269), 1,
        sym__ex_indent,
        STATE(164), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(275), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(286), 2,
        sym_meta_block,
        sym__newline_char,
        [2666] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(279), 1,
        sym__ex_multi_empty_line,
        STATE(104), 1,
        aux_sym_document_part_body_repeat1,
        ACTIONS(277), 5,
        sym__ex_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2683] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(241), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2696] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(265), 1,
        anon_sym_,
        ACTIONS(269), 1,
        sym__ex_indent,
        STATE(164), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(282), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(244), 2,
        sym_meta_block,
        sym__newline_char,
        [2717] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(284), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2730] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(107), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2743] = 4,
        ACTIONS(3), 1,
        sym__comment,
        STATE(138), 1,
        sym_document_part_body,
        ACTIONS(288), 2,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ACTIONS(286), 4,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2760] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(73), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2773] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(81), 1,
        sym__ex_indent,
        ACTIONS(291), 1,
        sym__ex_newline,
        STATE(130), 1,
        aux_sym_text_block_repeat1,
        STATE(176), 1,
        sym_meta_block,
        ACTIONS(73), 3,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [2794] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(293), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2807] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(265), 1,
        anon_sym_,
        ACTIONS(269), 1,
        sym__ex_indent,
        STATE(164), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(295), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(291), 2,
        sym_meta_block,
        sym__newline_char,
        [2828] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(209), 1,
        anon_sym_,
        ACTIONS(297), 1,
        ts_builtin_sym_end,
        STATE(168), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(271), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(115), 2,
        sym__newline_char,
        aux_sym_source_file_repeat2,
        [2849] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(299), 1,
        ts_builtin_sym_end,
        ACTIONS(301), 1,
        anon_sym_,
        STATE(168), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(304), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(115), 2,
        sym__newline_char,
        aux_sym_source_file_repeat2,
        [2870] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(309), 1,
        sym__ex_empty_line,
        ACTIONS(312), 1,
        sym__ex_multi_empty_line,
        STATE(116), 1,
        aux_sym_source_file_repeat1,
        ACTIONS(307), 4,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2889] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(265), 1,
        anon_sym_,
        ACTIONS(269), 1,
        sym__ex_indent,
        STATE(164), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(315), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(285), 2,
        sym_meta_block,
        sym__newline_char,
        [2910] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(319), 1,
        sym__ex_multi_empty_line,
        STATE(121), 1,
        aux_sym_document_part_body_repeat1,
        ACTIONS(317), 5,
        sym__ex_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2927] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(265), 1,
        anon_sym_,
        ACTIONS(269), 1,
        sym__ex_indent,
        STATE(164), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(322), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(278), 2,
        sym_meta_block,
        sym__newline_char,
        [2948] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(324), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2961] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(328), 1,
        sym__ex_multi_empty_line,
        STATE(104), 1,
        aux_sym_document_part_body_repeat1,
        ACTIONS(326), 5,
        sym__ex_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2978] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(331), 7,
        sym__ex_indent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [2991] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(209), 1,
        anon_sym_,
        ACTIONS(227), 1,
        ts_builtin_sym_end,
        STATE(168), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(271), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        STATE(115), 2,
        sym__newline_char,
        aux_sym_source_file_repeat2,
        [3012] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(333), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3024] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(335), 1,
        sym__ex_indent,
        ACTIONS(338), 1,
        sym__ex_empty_line,
        ACTIONS(241), 2,
        sym__ex_dedent,
        sym__ex_multi_empty_line,
        STATE(125), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        [3042] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(43), 1,
        sym__ex_indent,
        ACTIONS(341), 1,
        sym__ex_empty_line,
        ACTIONS(237), 2,
        sym__ex_dedent,
        sym__ex_multi_empty_line,
        STATE(133), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        [3060] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(293), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3072] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(181), 6,
        sym_text,
        sym_verbose_inner_environment_meta,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3084] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(343), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3096] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(345), 1,
        sym__ex_newline,
        STATE(130), 1,
        aux_sym_text_block_repeat1,
        ACTIONS(57), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [3112] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(348), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3124] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(307), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3136] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(43), 1,
        sym__ex_indent,
        ACTIONS(341), 1,
        sym__ex_empty_line,
        ACTIONS(254), 2,
        sym__ex_dedent,
        sym__ex_multi_empty_line,
        STATE(125), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        [3154] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(286), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3166] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(277), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3178] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(113), 1,
        sym__ex_indent,
        ACTIONS(350), 1,
        sym__ex_newline,
        STATE(153), 1,
        aux_sym_text_block_repeat1,
        STATE(189), 1,
        sym_meta_block,
        ACTIONS(73), 2,
        sym__ex_dedent,
        sym__ex_empty_line,
        [3198] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(352), 1,
        sym_verbose_inner_environment_meta,
        ACTIONS(177), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3212] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(354), 6,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3224] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(241), 1,
        sym__ex_dedent,
        ACTIONS(356), 1,
        sym__ex_indent,
        ACTIONS(359), 1,
        sym__ex_empty_line,
        STATE(139), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        [3241] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        ACTIONS(7), 1,
        anon_sym_DOT,
        ACTIONS(207), 1,
        ts_builtin_sym_end,
        STATE(132), 2,
        sym_include,
        sym_document_part,
        [3258] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(185), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3269] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(55), 1,
        sym__ex_indent,
        ACTIONS(254), 1,
        sym__ex_dedent,
        ACTIONS(362), 1,
        sym__ex_empty_line,
        STATE(139), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        [3286] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(197), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3297] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(55), 1,
        sym__ex_indent,
        ACTIONS(237), 1,
        sym__ex_dedent,
        ACTIONS(362), 1,
        sym__ex_empty_line,
        STATE(142), 2,
        sym_implicit_outer_environment,
        aux_sym_block_repeat1,
        [3314] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(191), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3325] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(199), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3336] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(187), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3347] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(203), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3358] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        ACTIONS(7), 1,
        anon_sym_DOT,
        ACTIONS(297), 1,
        ts_builtin_sym_end,
        STATE(132), 2,
        sym_include,
        sym_document_part,
        [3375] = 6,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(364), 1,
        sym_outer_environment_type,
        ACTIONS(366), 1,
        sym__uppercase_letter,
        ACTIONS(368), 1,
        sym__lowercase_letter,
        STATE(267), 1,
        sym_wobject_type,
        STATE(268), 1,
        sym_short_inner_environment_type,
        [3394] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(195), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3405] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(193), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3416] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(370), 1,
        sym__ex_newline,
        STATE(153), 1,
        aux_sym_text_block_repeat1,
        ACTIONS(57), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        [3431] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        ACTIONS(7), 1,
        anon_sym_DOT,
        ACTIONS(227), 1,
        ts_builtin_sym_end,
        STATE(132), 2,
        sym_include,
        sym_document_part,
        [3448] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(201), 5,
        sym_text,
        sym__ex_newline,
        anon_sym_DOT,
        anon_sym_DOLLAR,
        anon_sym_DQUOTE,
        [3459] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(373), 1,
        anon_sym_,
        STATE(156), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(376), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3473] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(284), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [3483] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(378), 1,
        anon_sym_DOT,
        ACTIONS(380), 1,
        anon_sym_AT,
        ACTIONS(382), 1,
        anon_sym_POUND,
        STATE(151), 1,
        sym__verbose_inner_environment_end,
        [3499] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        ACTIONS(7), 1,
        anon_sym_DOT,
        STATE(132), 2,
        sym_include,
        sym_document_part,
        [3513] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(384), 1,
        anon_sym_,
        ACTIONS(386), 1,
        sym__letter,
        STATE(160), 2,
        sym__document_part_type_char,
        aux_sym_document_part_type_repeat1,
        [3527] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(389), 1,
        anon_sym_,
        ACTIONS(391), 1,
        sym__letter,
        STATE(177), 2,
        sym__document_part_type_char,
        aux_sym_document_part_type_repeat1,
        [3541] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(293), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [3551] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(393), 1,
        anon_sym_,
        STATE(156), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(395), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3565] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(393), 1,
        anon_sym_,
        STATE(156), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(397), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3579] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(399), 1,
        anon_sym_DOT,
        ACTIONS(401), 1,
        anon_sym_AT,
        ACTIONS(403), 1,
        anon_sym_POUND,
        STATE(50), 1,
        sym__verbose_inner_environment_end,
        [3595] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(405), 1,
        anon_sym_DOT,
        ACTIONS(407), 1,
        anon_sym_AT,
        ACTIONS(409), 1,
        anon_sym_POUND,
        STATE(61), 1,
        sym__verbose_inner_environment_end,
        [3611] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(411), 1,
        anon_sym_DOT,
        ACTIONS(413), 1,
        anon_sym_AT,
        ACTIONS(415), 1,
        anon_sym_POUND,
        STATE(98), 1,
        sym__verbose_inner_environment_end,
        [3627] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(393), 1,
        anon_sym_,
        STATE(156), 1,
        aux_sym__newline_char_repeat1,
        ACTIONS(417), 2,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3641] = 5,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(419), 1,
        anon_sym_DOT,
        ACTIONS(421), 1,
        anon_sym_AT,
        ACTIONS(423), 1,
        anon_sym_POUND,
        STATE(80), 1,
        sym__verbose_inner_environment_end,
        [3657] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(324), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [3667] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(241), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [3677] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(73), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [3687] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        ACTIONS(7), 1,
        anon_sym_DOT,
        STATE(71), 2,
        sym_include,
        sym_document_part,
        [3701] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(331), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [3711] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(343), 4,
        ts_builtin_sym_end,
        anon_sym_,
        anon_sym_LF,
        anon_sym_CR_LF,
        [3721] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(107), 4,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        sym__ex_multi_empty_line,
        [3731] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(425), 1,
        anon_sym_,
        ACTIONS(427), 1,
        sym__letter,
        STATE(160), 2,
        sym__document_part_type_char,
        aux_sym_document_part_type_repeat1,
        [3745] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(429), 1,
        aux_sym_math_environment_body_token1,
        STATE(206), 1,
        aux_sym_math_environment_body_repeat1,
        STATE(252), 1,
        sym_math_environment_body,
        [3758] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(73), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        [3767] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        ACTIONS(207), 1,
        ts_builtin_sym_end,
        STATE(132), 1,
        sym_include,
        [3780] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(431), 1,
        anon_sym_COLON,
        ACTIONS(433), 1,
        sym__letter,
        STATE(186), 1,
        aux_sym_wobject_type_repeat1,
        [3793] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(429), 1,
        aux_sym_math_environment_body_token1,
        STATE(206), 1,
        aux_sym_math_environment_body_repeat1,
        STATE(258), 1,
        sym_math_environment_body,
        [3806] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(435), 1,
        anon_sym_COLON,
        ACTIONS(437), 1,
        sym__letter,
        STATE(181), 1,
        aux_sym_wobject_type_repeat1,
        [3819] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(429), 1,
        aux_sym_math_environment_body_token1,
        STATE(206), 1,
        aux_sym_math_environment_body_repeat1,
        STATE(292), 1,
        sym_math_environment_body,
        [3832] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(368), 1,
        sym__lowercase_letter,
        ACTIONS(439), 1,
        sym_outer_environment_type,
        STATE(283), 1,
        sym_short_inner_environment_type,
        [3845] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(441), 1,
        anon_sym_COLON,
        ACTIONS(443), 1,
        sym__letter,
        STATE(186), 1,
        aux_sym_wobject_type_repeat1,
        [3858] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(446), 1,
        sym__meta_block_content,
        ACTIONS(449), 1,
        sym__ex_dedent,
        STATE(187), 1,
        aux_sym_meta_block_repeat1,
        [3871] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        ACTIONS(453), 1,
        sym__ex_dedent,
        STATE(187), 1,
        aux_sym_meta_block_repeat1,
        [3884] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(107), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        [3893] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        ACTIONS(455), 1,
        sym__ex_dedent,
        STATE(187), 1,
        aux_sym_meta_block_repeat1,
        [3906] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(293), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        [3915] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(57), 1,
        anon_sym_DQUOTE,
        ACTIONS(457), 1,
        sym__ex_newline,
        STATE(192), 1,
        aux_sym_text_block_repeat1,
        [3928] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(429), 1,
        aux_sym_math_environment_body_token1,
        STATE(206), 1,
        aux_sym_math_environment_body_repeat1,
        STATE(298), 1,
        sym_math_environment_body,
        [3941] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        ACTIONS(297), 1,
        ts_builtin_sym_end,
        STATE(132), 1,
        sym_include,
        [3954] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(429), 1,
        aux_sym_math_environment_body_token1,
        STATE(206), 1,
        aux_sym_math_environment_body_repeat1,
        STATE(247), 1,
        sym_math_environment_body,
        [3967] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        ACTIONS(460), 1,
        sym__ex_dedent,
        STATE(187), 1,
        aux_sym_meta_block_repeat1,
        [3980] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(464), 1,
        sym__ex_newline,
        ACTIONS(462), 2,
        sym__ex_dedent,
        sym__meta_block_content,
        [3991] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(364), 1,
        sym_outer_environment_type,
        ACTIONS(368), 1,
        sym__lowercase_letter,
        STATE(268), 1,
        sym_short_inner_environment_type,
        [4004] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(156), 1,
        sym__ex_newline,
        ACTIONS(466), 1,
        anon_sym_DQUOTE,
        STATE(192), 1,
        aux_sym_text_block_repeat1,
        [4017] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(468), 1,
        anon_sym_DOLLAR,
        ACTIONS(470), 1,
        aux_sym_math_environment_body_token1,
        STATE(200), 1,
        aux_sym_math_environment_body_repeat1,
        [4030] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        ACTIONS(473), 1,
        sym__ex_dedent,
        STATE(187), 1,
        aux_sym_meta_block_repeat1,
        [4043] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(475), 1,
        sym__ex_dedent,
        ACTIONS(477), 1,
        sym__ex_multi_empty_line,
        STATE(205), 1,
        aux_sym__wobject_body_repeat1,
        [4056] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(241), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        [4065] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(368), 1,
        sym__lowercase_letter,
        ACTIONS(479), 1,
        sym_outer_environment_type,
        STATE(279), 1,
        sym_short_inner_environment_type,
        [4078] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(477), 1,
        sym__ex_multi_empty_line,
        ACTIONS(481), 1,
        sym__ex_dedent,
        STATE(210), 1,
        aux_sym__wobject_body_repeat1,
        [4091] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(429), 1,
        aux_sym_math_environment_body_token1,
        ACTIONS(483), 1,
        anon_sym_DOLLAR,
        STATE(200), 1,
        aux_sym_math_environment_body_repeat1,
        [4104] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        ACTIONS(227), 1,
        ts_builtin_sym_end,
        STATE(132), 1,
        sym_include,
        [4117] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        ACTIONS(485), 1,
        sym__ex_dedent,
        STATE(187), 1,
        aux_sym_meta_block_repeat1,
        [4130] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(489), 1,
        sym__ex_newline,
        ACTIONS(487), 2,
        anon_sym_DOLLAR,
        aux_sym_math_environment_body_token1,
        [4141] = 4,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(491), 1,
        sym__ex_dedent,
        ACTIONS(493), 1,
        sym__ex_multi_empty_line,
        STATE(210), 1,
        aux_sym__wobject_body_repeat1,
        [4154] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(284), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        [4163] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(324), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        [4172] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(331), 3,
        sym__ex_indent,
        sym__ex_dedent,
        sym__ex_empty_line,
        [4181] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(496), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(146), 1,
        sym_verbose_inner_environment_at_end,
        [4191] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(449), 2,
        sym__ex_dedent,
        sym__meta_block_content,
        [4199] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(498), 1,
        sym__uppercase_letter,
        STATE(295), 1,
        sym_document_part_type,
        [4209] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(491), 2,
        sym__ex_dedent,
        sym__ex_multi_empty_line,
        [4217] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(500), 1,
        sym__lowercase_letter,
        STATE(279), 1,
        sym_short_inner_environment_type,
        [4227] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(5), 1,
        anon_sym_DOTinclude,
        STATE(132), 1,
        sym_include,
        [4237] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(500), 1,
        sym__lowercase_letter,
        STATE(283), 1,
        sym_short_inner_environment_type,
        [4247] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(500), 1,
        sym__lowercase_letter,
        STATE(268), 1,
        sym_short_inner_environment_type,
        [4257] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(500), 1,
        sym__lowercase_letter,
        STATE(296), 1,
        sym_short_inner_environment_type,
        [4267] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(502), 1,
        sym__lowercase_letter,
        STATE(137), 1,
        sym_verbose_inner_environment_type,
        [4277] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(504), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(148), 1,
        sym_verbose_inner_environment_hash_end,
        [4287] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(500), 1,
        sym__lowercase_letter,
        STATE(261), 1,
        sym_short_inner_environment_type,
        [4297] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        STATE(188), 1,
        aux_sym_meta_block_repeat1,
        [4307] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        STATE(190), 1,
        aux_sym_meta_block_repeat1,
        [4317] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        STATE(201), 1,
        aux_sym_meta_block_repeat1,
        [4327] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        STATE(208), 1,
        aux_sym_meta_block_repeat1,
        [4337] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(506), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(85), 1,
        sym_verbose_inner_environment_hash_end,
        [4347] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(508), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(82), 1,
        sym_verbose_inner_environment_at_end,
        [4357] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(451), 1,
        sym__meta_block_content,
        STATE(196), 1,
        aux_sym_meta_block_repeat1,
        [4367] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(510), 1,
        sym__lowercase_letter,
        STATE(69), 1,
        sym_verbose_inner_environment_type,
        [4377] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(512), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(63), 1,
        sym_verbose_inner_environment_hash_end,
        [4387] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(514), 1,
        sym__lowercase_letter,
        STATE(39), 1,
        sym_verbose_inner_environment_type,
        [4397] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(516), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(53), 1,
        sym_verbose_inner_environment_at_end,
        [4407] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(518), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(56), 1,
        sym_verbose_inner_environment_hash_end,
        [4417] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(520), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(62), 1,
        sym_verbose_inner_environment_at_end,
        [4427] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(468), 2,
        anon_sym_DOLLAR,
        aux_sym_math_environment_body_token1,
        [4435] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(522), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(91), 1,
        sym_verbose_inner_environment_hash_end,
        [4445] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(524), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        STATE(94), 1,
        sym_verbose_inner_environment_at_end,
        [4455] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(526), 1,
        sym__lowercase_letter,
        STATE(79), 1,
        sym_verbose_inner_environment_type,
        [4465] = 3,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(528), 1,
        sym__lowercase_letter,
        STATE(45), 1,
        sym_verbose_inner_environment_type,
        [4475] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(530), 1,
        sym__ex_indent,
        [4482] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(532), 1,
        anon_sym_DQUOTE,
        [4489] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(534), 1,
        sym_outer_environment_type,
        [4496] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(536), 1,
        anon_sym_DOLLAR,
        [4503] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(538), 1,
        sym__ex_dedent,
        [4510] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(540), 1,
        sym__ex_dedent,
        [4517] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(542), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        [4524] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(544), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        [4531] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(546), 1,
        anon_sym_DOLLAR,
        [4538] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(548), 1,
        sym_short_inner_environment_body,
        [4545] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(550), 1,
        sym__ex_dedent,
        [4552] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(552), 1,
        sym_short_inner_environment_body,
        [4559] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(554), 1,
        anon_sym_COLON,
        [4566] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(556), 1,
        sym_short_inner_environment_body,
        [4573] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(558), 1,
        anon_sym_DOLLAR,
        [4580] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(560), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        [4587] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(562), 1,
        anon_sym_DQUOTE,
        [4594] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(564), 1,
        anon_sym_COLON,
        [4601] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(566), 1,
        anon_sym_DQUOTE,
        [4608] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(343), 1,
        sym__ex_indent,
        [4615] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(568), 1,
        sym__ex_dedent,
        [4622] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(570), 1,
        anon_sym_COLON,
        [4629] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(572), 1,
        sym_fragile_outer_environment_body,
        [4636] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(574), 1,
        anon_sym_COLON,
        [4643] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(576), 1,
        anon_sym_COLON,
        [4650] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(578), 1,
        anon_sym_DQUOTE,
        [4657] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(580), 1,
        sym__ex_dedent,
        [4664] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(582), 1,
        anon_sym_COLON,
        [4671] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(584), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        [4678] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(586), 1,
        sym_fragile_outer_environment_body,
        [4685] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(588), 1,
        anon_sym_COLON,
        [4692] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(293), 1,
        sym__ex_indent,
        [4699] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(590), 1,
        sym__ex_indent,
        [4706] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(592), 1,
        sym__ex_dedent,
        [4713] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(594), 1,
        sym__ex_indent,
        [4720] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(596), 1,
        anon_sym_COLON,
        [4727] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(598), 1,
        anon_sym_DQUOTE,
        [4734] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(600), 1,
        aux_sym_verbose_inner_environment_hash_end_token1,
        [4741] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(602), 1,
        sym__ex_dedent,
        [4748] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(604), 1,
        anon_sym_COLON,
        [4755] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(606), 1,
        sym_fragile_outer_environment_body,
        [4762] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(608), 1,
        sym__ex_indent,
        [4769] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(610), 1,
        sym__ex_indent,
        [4776] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(612), 1,
        sym_short_inner_environment_body,
        [4783] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(614), 1,
        sym__ex_dedent,
        [4790] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(616), 1,
        sym__ex_dedent,
        [4797] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(618), 1,
        sym__ex_indent,
        [4804] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(620), 1,
        sym__ex_indent,
        [4811] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(622), 1,
        anon_sym_DOLLAR,
        [4818] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(624), 1,
        sym__ex_dedent,
        [4825] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(626), 1,
        aux_sym_short_inner_environment_type_token1,
        [4832] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(628), 1,
        anon_sym_,
        [4839] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(630), 1,
        anon_sym_COLON,
        [4846] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(632), 1,
        ts_builtin_sym_end,
        [4853] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(634), 1,
        anon_sym_DOLLAR,
        [4860] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(636), 1,
        sym_filename,
        [4867] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(638), 1,
        anon_sym_COLON,
        [4874] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(640), 1,
        sym_short_inner_environment_body,
        [4881] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(642), 1,
        anon_sym_COLON,
        [4888] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(644), 1,
        anon_sym_COLON,
        [4895] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(646), 1,
        sym_outer_environment_type,
        [4902] = 2,
        ACTIONS(3), 1,
        sym__comment,
        ACTIONS(648), 1,
        sym_outer_environment_type,
};

static const uint32_t ts_small_parse_table_map[] = {
        [SMALL_STATE(2)] = 0,
        [SMALL_STATE(3)] = 47,
        [SMALL_STATE(4)] = 94,
        [SMALL_STATE(5)] = 142,
        [SMALL_STATE(6)] = 190,
        [SMALL_STATE(7)] = 235,
        [SMALL_STATE(8)] = 280,
        [SMALL_STATE(9)] = 325,
        [SMALL_STATE(10)] = 370,
        [SMALL_STATE(11)] = 415,
        [SMALL_STATE(12)] = 460,
        [SMALL_STATE(13)] = 505,
        [SMALL_STATE(14)] = 543,
        [SMALL_STATE(15)] = 581,
        [SMALL_STATE(16)] = 618,
        [SMALL_STATE(17)] = 663,
        [SMALL_STATE(18)] = 700,
        [SMALL_STATE(19)] = 737,
        [SMALL_STATE(20)] = 774,
        [SMALL_STATE(21)] = 818,
        [SMALL_STATE(22)] = 853,
        [SMALL_STATE(23)] = 890,
        [SMALL_STATE(24)] = 925,
        [SMALL_STATE(25)] = 962,
        [SMALL_STATE(26)] = 999,
        [SMALL_STATE(27)] = 1033,
        [SMALL_STATE(28)] = 1067,
        [SMALL_STATE(29)] = 1101,
        [SMALL_STATE(30)] = 1135,
        [SMALL_STATE(31)] = 1168,
        [SMALL_STATE(32)] = 1201,
        [SMALL_STATE(33)] = 1235,
        [SMALL_STATE(34)] = 1266,
        [SMALL_STATE(35)] = 1297,
        [SMALL_STATE(36)] = 1328,
        [SMALL_STATE(37)] = 1359,
        [SMALL_STATE(38)] = 1390,
        [SMALL_STATE(39)] = 1421,
        [SMALL_STATE(40)] = 1442,
        [SMALL_STATE(41)] = 1461,
        [SMALL_STATE(42)] = 1492,
        [SMALL_STATE(43)] = 1523,
        [SMALL_STATE(44)] = 1541,
        [SMALL_STATE(45)] = 1559,
        [SMALL_STATE(46)] = 1579,
        [SMALL_STATE(47)] = 1597,
        [SMALL_STATE(48)] = 1625,
        [SMALL_STATE(49)] = 1653,
        [SMALL_STATE(50)] = 1671,
        [SMALL_STATE(51)] = 1689,
        [SMALL_STATE(52)] = 1707,
        [SMALL_STATE(53)] = 1725,
        [SMALL_STATE(54)] = 1743,
        [SMALL_STATE(55)] = 1761,
        [SMALL_STATE(56)] = 1789,
        [SMALL_STATE(57)] = 1807,
        [SMALL_STATE(58)] = 1835,
        [SMALL_STATE(59)] = 1852,
        [SMALL_STATE(60)] = 1869,
        [SMALL_STATE(61)] = 1886,
        [SMALL_STATE(62)] = 1903,
        [SMALL_STATE(63)] = 1920,
        [SMALL_STATE(64)] = 1937,
        [SMALL_STATE(65)] = 1954,
        [SMALL_STATE(66)] = 1971,
        [SMALL_STATE(67)] = 1988,
        [SMALL_STATE(68)] = 2004,
        [SMALL_STATE(69)] = 2034,
        [SMALL_STATE(70)] = 2052,
        [SMALL_STATE(71)] = 2082,
        [SMALL_STATE(72)] = 2112,
        [SMALL_STATE(73)] = 2136,
        [SMALL_STATE(74)] = 2166,
        [SMALL_STATE(75)] = 2181,
        [SMALL_STATE(76)] = 2196,
        [SMALL_STATE(77)] = 2217,
        [SMALL_STATE(78)] = 2238,
        [SMALL_STATE(79)] = 2253,
        [SMALL_STATE(80)] = 2270,
        [SMALL_STATE(81)] = 2285,
        [SMALL_STATE(82)] = 2300,
        [SMALL_STATE(83)] = 2315,
        [SMALL_STATE(84)] = 2334,
        [SMALL_STATE(85)] = 2349,
        [SMALL_STATE(86)] = 2364,
        [SMALL_STATE(87)] = 2379,
        [SMALL_STATE(88)] = 2394,
        [SMALL_STATE(89)] = 2415,
        [SMALL_STATE(90)] = 2438,
        [SMALL_STATE(91)] = 2452,
        [SMALL_STATE(92)] = 2466,
        [SMALL_STATE(93)] = 2480,
        [SMALL_STATE(94)] = 2494,
        [SMALL_STATE(95)] = 2508,
        [SMALL_STATE(96)] = 2522,
        [SMALL_STATE(97)] = 2536,
        [SMALL_STATE(98)] = 2550,
        [SMALL_STATE(99)] = 2564,
        [SMALL_STATE(100)] = 2582,
        [SMALL_STATE(101)] = 2603,
        [SMALL_STATE(102)] = 2624,
        [SMALL_STATE(103)] = 2645,
        [SMALL_STATE(104)] = 2666,
        [SMALL_STATE(105)] = 2683,
        [SMALL_STATE(106)] = 2696,
        [SMALL_STATE(107)] = 2717,
        [SMALL_STATE(108)] = 2730,
        [SMALL_STATE(109)] = 2743,
        [SMALL_STATE(110)] = 2760,
        [SMALL_STATE(111)] = 2773,
        [SMALL_STATE(112)] = 2794,
        [SMALL_STATE(113)] = 2807,
        [SMALL_STATE(114)] = 2828,
        [SMALL_STATE(115)] = 2849,
        [SMALL_STATE(116)] = 2870,
        [SMALL_STATE(117)] = 2889,
        [SMALL_STATE(118)] = 2910,
        [SMALL_STATE(119)] = 2927,
        [SMALL_STATE(120)] = 2948,
        [SMALL_STATE(121)] = 2961,
        [SMALL_STATE(122)] = 2978,
        [SMALL_STATE(123)] = 2991,
        [SMALL_STATE(124)] = 3012,
        [SMALL_STATE(125)] = 3024,
        [SMALL_STATE(126)] = 3042,
        [SMALL_STATE(127)] = 3060,
        [SMALL_STATE(128)] = 3072,
        [SMALL_STATE(129)] = 3084,
        [SMALL_STATE(130)] = 3096,
        [SMALL_STATE(131)] = 3112,
        [SMALL_STATE(132)] = 3124,
        [SMALL_STATE(133)] = 3136,
        [SMALL_STATE(134)] = 3154,
        [SMALL_STATE(135)] = 3166,
        [SMALL_STATE(136)] = 3178,
        [SMALL_STATE(137)] = 3198,
        [SMALL_STATE(138)] = 3212,
        [SMALL_STATE(139)] = 3224,
        [SMALL_STATE(140)] = 3241,
        [SMALL_STATE(141)] = 3258,
        [SMALL_STATE(142)] = 3269,
        [SMALL_STATE(143)] = 3286,
        [SMALL_STATE(144)] = 3297,
        [SMALL_STATE(145)] = 3314,
        [SMALL_STATE(146)] = 3325,
        [SMALL_STATE(147)] = 3336,
        [SMALL_STATE(148)] = 3347,
        [SMALL_STATE(149)] = 3358,
        [SMALL_STATE(150)] = 3375,
        [SMALL_STATE(151)] = 3394,
        [SMALL_STATE(152)] = 3405,
        [SMALL_STATE(153)] = 3416,
        [SMALL_STATE(154)] = 3431,
        [SMALL_STATE(155)] = 3448,
        [SMALL_STATE(156)] = 3459,
        [SMALL_STATE(157)] = 3473,
        [SMALL_STATE(158)] = 3483,
        [SMALL_STATE(159)] = 3499,
        [SMALL_STATE(160)] = 3513,
        [SMALL_STATE(161)] = 3527,
        [SMALL_STATE(162)] = 3541,
        [SMALL_STATE(163)] = 3551,
        [SMALL_STATE(164)] = 3565,
        [SMALL_STATE(165)] = 3579,
        [SMALL_STATE(166)] = 3595,
        [SMALL_STATE(167)] = 3611,
        [SMALL_STATE(168)] = 3627,
        [SMALL_STATE(169)] = 3641,
        [SMALL_STATE(170)] = 3657,
        [SMALL_STATE(171)] = 3667,
        [SMALL_STATE(172)] = 3677,
        [SMALL_STATE(173)] = 3687,
        [SMALL_STATE(174)] = 3701,
        [SMALL_STATE(175)] = 3711,
        [SMALL_STATE(176)] = 3721,
        [SMALL_STATE(177)] = 3731,
        [SMALL_STATE(178)] = 3745,
        [SMALL_STATE(179)] = 3758,
        [SMALL_STATE(180)] = 3767,
        [SMALL_STATE(181)] = 3780,
        [SMALL_STATE(182)] = 3793,
        [SMALL_STATE(183)] = 3806,
        [SMALL_STATE(184)] = 3819,
        [SMALL_STATE(185)] = 3832,
        [SMALL_STATE(186)] = 3845,
        [SMALL_STATE(187)] = 3858,
        [SMALL_STATE(188)] = 3871,
        [SMALL_STATE(189)] = 3884,
        [SMALL_STATE(190)] = 3893,
        [SMALL_STATE(191)] = 3906,
        [SMALL_STATE(192)] = 3915,
        [SMALL_STATE(193)] = 3928,
        [SMALL_STATE(194)] = 3941,
        [SMALL_STATE(195)] = 3954,
        [SMALL_STATE(196)] = 3967,
        [SMALL_STATE(197)] = 3980,
        [SMALL_STATE(198)] = 3991,
        [SMALL_STATE(199)] = 4004,
        [SMALL_STATE(200)] = 4017,
        [SMALL_STATE(201)] = 4030,
        [SMALL_STATE(202)] = 4043,
        [SMALL_STATE(203)] = 4056,
        [SMALL_STATE(204)] = 4065,
        [SMALL_STATE(205)] = 4078,
        [SMALL_STATE(206)] = 4091,
        [SMALL_STATE(207)] = 4104,
        [SMALL_STATE(208)] = 4117,
        [SMALL_STATE(209)] = 4130,
        [SMALL_STATE(210)] = 4141,
        [SMALL_STATE(211)] = 4154,
        [SMALL_STATE(212)] = 4163,
        [SMALL_STATE(213)] = 4172,
        [SMALL_STATE(214)] = 4181,
        [SMALL_STATE(215)] = 4191,
        [SMALL_STATE(216)] = 4199,
        [SMALL_STATE(217)] = 4209,
        [SMALL_STATE(218)] = 4217,
        [SMALL_STATE(219)] = 4227,
        [SMALL_STATE(220)] = 4237,
        [SMALL_STATE(221)] = 4247,
        [SMALL_STATE(222)] = 4257,
        [SMALL_STATE(223)] = 4267,
        [SMALL_STATE(224)] = 4277,
        [SMALL_STATE(225)] = 4287,
        [SMALL_STATE(226)] = 4297,
        [SMALL_STATE(227)] = 4307,
        [SMALL_STATE(228)] = 4317,
        [SMALL_STATE(229)] = 4327,
        [SMALL_STATE(230)] = 4337,
        [SMALL_STATE(231)] = 4347,
        [SMALL_STATE(232)] = 4357,
        [SMALL_STATE(233)] = 4367,
        [SMALL_STATE(234)] = 4377,
        [SMALL_STATE(235)] = 4387,
        [SMALL_STATE(236)] = 4397,
        [SMALL_STATE(237)] = 4407,
        [SMALL_STATE(238)] = 4417,
        [SMALL_STATE(239)] = 4427,
        [SMALL_STATE(240)] = 4435,
        [SMALL_STATE(241)] = 4445,
        [SMALL_STATE(242)] = 4455,
        [SMALL_STATE(243)] = 4465,
        [SMALL_STATE(244)] = 4475,
        [SMALL_STATE(245)] = 4482,
        [SMALL_STATE(246)] = 4489,
        [SMALL_STATE(247)] = 4496,
        [SMALL_STATE(248)] = 4503,
        [SMALL_STATE(249)] = 4510,
        [SMALL_STATE(250)] = 4517,
        [SMALL_STATE(251)] = 4524,
        [SMALL_STATE(252)] = 4531,
        [SMALL_STATE(253)] = 4538,
        [SMALL_STATE(254)] = 4545,
        [SMALL_STATE(255)] = 4552,
        [SMALL_STATE(256)] = 4559,
        [SMALL_STATE(257)] = 4566,
        [SMALL_STATE(258)] = 4573,
        [SMALL_STATE(259)] = 4580,
        [SMALL_STATE(260)] = 4587,
        [SMALL_STATE(261)] = 4594,
        [SMALL_STATE(262)] = 4601,
        [SMALL_STATE(263)] = 4608,
        [SMALL_STATE(264)] = 4615,
        [SMALL_STATE(265)] = 4622,
        [SMALL_STATE(266)] = 4629,
        [SMALL_STATE(267)] = 4636,
        [SMALL_STATE(268)] = 4643,
        [SMALL_STATE(269)] = 4650,
        [SMALL_STATE(270)] = 4657,
        [SMALL_STATE(271)] = 4664,
        [SMALL_STATE(272)] = 4671,
        [SMALL_STATE(273)] = 4678,
        [SMALL_STATE(274)] = 4685,
        [SMALL_STATE(275)] = 4692,
        [SMALL_STATE(276)] = 4699,
        [SMALL_STATE(277)] = 4706,
        [SMALL_STATE(278)] = 4713,
        [SMALL_STATE(279)] = 4720,
        [SMALL_STATE(280)] = 4727,
        [SMALL_STATE(281)] = 4734,
        [SMALL_STATE(282)] = 4741,
        [SMALL_STATE(283)] = 4748,
        [SMALL_STATE(284)] = 4755,
        [SMALL_STATE(285)] = 4762,
        [SMALL_STATE(286)] = 4769,
        [SMALL_STATE(287)] = 4776,
        [SMALL_STATE(288)] = 4783,
        [SMALL_STATE(289)] = 4790,
        [SMALL_STATE(290)] = 4797,
        [SMALL_STATE(291)] = 4804,
        [SMALL_STATE(292)] = 4811,
        [SMALL_STATE(293)] = 4818,
        [SMALL_STATE(294)] = 4825,
        [SMALL_STATE(295)] = 4832,
        [SMALL_STATE(296)] = 4839,
        [SMALL_STATE(297)] = 4846,
        [SMALL_STATE(298)] = 4853,
        [SMALL_STATE(299)] = 4860,
        [SMALL_STATE(300)] = 4867,
        [SMALL_STATE(301)] = 4874,
        [SMALL_STATE(302)] = 4881,
        [SMALL_STATE(303)] = 4888,
        [SMALL_STATE(304)] = 4895,
        [SMALL_STATE(305)] = 4902,
};

static const TSParseActionEntry ts_parse_actions[] = {
        [0] = {.entry = {.count = 0, .reusable = false}},
        [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
        [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
        [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
        [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
        [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
        [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
        [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
        [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
        [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
        [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
        [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
        [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 1),
        [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
        [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
        [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
        [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
        [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
        [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
        [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
        [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
        [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
        [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
        [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
        [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
        [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
        [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
        [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
        [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
        [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2),
        [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_line, 2),
        [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(221),
        [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(182),
        [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(37),
        [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(14),
        [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2),
        [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
        [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
        [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
        [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
        [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
        [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(222),
        [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(193),
        [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(36),
        [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(17),
        [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_part_title, 1),
        [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
        [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
        [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
        [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
        [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3),
        [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
        [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
        [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
        [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
        [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
        [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(218),
        [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(178),
        [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(41),
        [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(23),
        [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(220),
        [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(195),
        [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(34),
        [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(26),
        [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
        [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
        [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
        [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
        [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_verbose_inner_environment_body, 1), SHIFT(38),
        [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
        [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
        [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(225),
        [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(184),
        [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(38),
        [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(33),
        [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
        [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
        [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2), SHIFT(38),
        [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verbose_inner_environment_end, 2),
        [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
        [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_inner_environment_type, 2),
        [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
        [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_inner_environment, 4),
        [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_inner_environment_hash_end, 1),
        [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
        [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_inner_environment_at_end, 1),
        [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_inner_environment, 1),
        [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_inner_environment_classic, 4),
        [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_environment, 3),
        [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_inner_environment_at, 5),
        [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verbose_inner_environment_end, 3),
        [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_inner_environment_hash, 5),
        [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
        [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
        [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
        [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
        [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
        [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
        [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
        [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
        [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
        [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
        [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
        [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
        [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
        [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
        [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
        [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
        [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
        [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
        [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
        [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
        [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
        [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
        [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2), SHIFT_REPEAT(55),
        [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
        [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_part, 4),
        [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
        [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document_part, 4), SHIFT(3),
        [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
        [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
        [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
        [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
        [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
        [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
        [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
        [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_part_body_repeat1, 2),
        [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_part_body_repeat1, 2), SHIFT_REPEAT(2),
        [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
        [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_outer_environment, 3),
        [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_part, 5),
        [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document_part, 5), SHIFT(3),
        [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
        [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_block, 3),
        [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
        [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
        [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
        [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(168),
        [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(115),
        [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
        [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
        [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
        [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
        [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_part_body, 2),
        [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document_part_body, 2), SHIFT(2),
        [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
        [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragile_outer_environment, 7),
        [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_part_body, 3),
        [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document_part_body, 3), SHIFT(2),
        [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_outer_environment, 7),
        [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wobject, 7),
        [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
        [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
        [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
        [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline_char, 2),
        [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2), SHIFT_REPEAT(48),
        [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
        [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
        [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
        [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_part, 6),
        [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
        [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
        [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
        [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
        [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
        [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
        [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2), SHIFT_REPEAT(47),
        [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newline_char_repeat1, 2), SHIFT_REPEAT(156),
        [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__newline_char_repeat1, 2),
        [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
        [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
        [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
        [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_part_type_repeat1, 2),
        [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_part_type_repeat1, 2), SHIFT_REPEAT(160),
        [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_part_type, 1),
        [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
        [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
        [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
        [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
        [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
        [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
        [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
        [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
        [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
        [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
        [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
        [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
        [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
        [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
        [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
        [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
        [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
        [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_part_type, 2),
        [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
        [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
        [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wobject_type, 2),
        [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
        [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wobject_type, 1),
        [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
        [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
        [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wobject_type_repeat1, 2),
        [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wobject_type_repeat1, 2), SHIFT_REPEAT(186),
        [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_block_repeat1, 2), SHIFT_REPEAT(197),
        [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_block_repeat1, 2),
        [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
        [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
        [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
        [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2), SHIFT_REPEAT(57),
        [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
        [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_block_repeat1, 1),
        [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
        [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_inner_environment_body, 2),
        [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_environment_body_repeat1, 2),
        [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_environment_body_repeat1, 2), SHIFT_REPEAT(209),
        [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
        [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wobject_body, 1),
        [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
        [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
        [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wobject_body, 2),
        [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_environment_body, 1),
        [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
        [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_environment_body_repeat1, 1),
        [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
        [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__wobject_body_repeat1, 2),
        [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__wobject_body_repeat1, 2), SHIFT_REPEAT(12),
        [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
        [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
        [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
        [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
        [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
        [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
        [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
        [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
        [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
        [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
        [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
        [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
        [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
        [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
        [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
        [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
        [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
        [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
        [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
        [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
        [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
        [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
        [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
        [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
        [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
        [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
        [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
        [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
        [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
        [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_inner_environment_type, 2),
        [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
        [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
        [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
        [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
        [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
        [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
        [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
        [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
        [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
        [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
        [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
        [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
        [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
        [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
        [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
        [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
        [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
        [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
        [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
        [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
        [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
        [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
        [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
        [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
        [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
        [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
        [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
        [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
        [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
        [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
        [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
        [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
        [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
        [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
        [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
        [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
        [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
        [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
        [632] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
        [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
        [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
        [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
        [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
        [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
        [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
        [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
        [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_woowoo_external_scanner_create(void);
void tree_sitter_woowoo_external_scanner_destroy(void *);
bool tree_sitter_woowoo_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_woowoo_external_scanner_serialize(void *, char *);
void tree_sitter_woowoo_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_woowoo(void) {
    static const TSLanguage language = {
            .version = LANGUAGE_VERSION,
            .symbol_count = SYMBOL_COUNT,
            .alias_count = ALIAS_COUNT,
            .token_count = TOKEN_COUNT,
            .external_token_count = EXTERNAL_TOKEN_COUNT,
            .state_count = STATE_COUNT,
            .large_state_count = LARGE_STATE_COUNT,
            .production_id_count = PRODUCTION_ID_COUNT,
            .field_count = FIELD_COUNT,
            .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
            .parse_table = &ts_parse_table[0][0],
            .small_parse_table = ts_small_parse_table,
            .small_parse_table_map = ts_small_parse_table_map,
            .parse_actions = ts_parse_actions,
            .symbol_names = ts_symbol_names,
            .symbol_metadata = ts_symbol_metadata,
            .public_symbol_map = ts_symbol_map,
            .alias_map = ts_non_terminal_alias_map,
            .alias_sequences = &ts_alias_sequences[0][0],
            .lex_modes = ts_lex_modes,
            .lex_fn = ts_lex,
            .external_scanner = {
                    &ts_external_scanner_states[0][0],
                    ts_external_scanner_symbol_map,
                    tree_sitter_woowoo_external_scanner_create,
                    tree_sitter_woowoo_external_scanner_destroy,
                    tree_sitter_woowoo_external_scanner_scan,
                    tree_sitter_woowoo_external_scanner_serialize,
                    tree_sitter_woowoo_external_scanner_deserialize,
            },
            .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
