#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_EQ = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_DQUOTE = 6,
  sym_unescaped_double_string_fragment = 7,
  sym_escape_sequence = 8,
  sym_id = 9,
  sym_document = 10,
  sym_element = 11,
  sym_attributes = 12,
  sym_attribute = 13,
  sym_value = 14,
  sym_text = 15,
  aux_sym_document_repeat1 = 16,
  aux_sym_attributes_repeat1 = 17,
  aux_sym_text_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_id] = "id",
  [sym_document] = "document",
  [sym_element] = "element",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_value] = "value",
  [sym_text] = "text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_id] = sym_id,
  [sym_document] = sym_document,
  [sym_element] = sym_element,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_value] = sym_value,
  [sym_text] = sym_text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(25),
    [sym_element] = STATE(6),
    [sym_text] = STATE(11),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_id] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(14), 1,
      sym_id,
    STATE(11), 1,
      sym_text,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_element,
      aux_sym_document_repeat1,
  [18] = 3,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_value,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [31] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_text,
    STATE(2), 2,
      sym_element,
      aux_sym_document_repeat1,
  [48] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_id,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_text,
    STATE(4), 2,
      sym_element,
      aux_sym_document_repeat1,
  [65] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_id,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_text,
    STATE(2), 2,
      sym_element,
      aux_sym_document_repeat1,
  [82] = 1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [90] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [98] = 1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [106] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [114] = 1,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [121] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym_text_repeat1,
    ACTIONS(39), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [132] = 3,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 1,
      sym_id,
    STATE(15), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [143] = 3,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym_text_repeat1,
    ACTIONS(47), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [154] = 3,
    ACTIONS(43), 1,
      sym_id,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [165] = 3,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_text_repeat1,
    ACTIONS(54), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [176] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [183] = 3,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      sym_id,
    STATE(18), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [194] = 1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [201] = 1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_id,
  [208] = 2,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(67), 2,
      anon_sym_RPAREN,
      sym_id,
  [216] = 2,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_text,
  [223] = 2,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_attributes,
  [230] = 1,
    ACTIONS(73), 2,
      anon_sym_RPAREN,
      sym_id,
  [235] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 121,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 143,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 165,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 183,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 201,
  [SMALL_STATE(21)] = 208,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 223,
  [SMALL_STATE(24)] = 230,
  [SMALL_STATE(25)] = 235,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(14),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(21),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jtml(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
