module.exports = grammar({
  name: "jtml",

  rules: {
    document: $ => repeat($.element),

    element: $ =>
      choice(
        seq($.id, $.attributes, $.value),
        seq($.id, $.attributes),
        $.text,
      ),

    attributes: $ =>
      seq(
        "(",
        repeat($.attribute),
        ")",
      ),

    attribute: $ => choice(seq($.id, "=", $.text), $.id),

    value: $ => seq("{", repeat($.element), "}"),

    text: $ =>
      seq(
        '"',
        repeat(choice(
          alias($.unescaped_string_fragment, $.string_fragment),
          $.escape_sequence,
        )),
        '"',
      ),

    unescaped_string_fragment: $ =>
      token.immediate(prec(1, /[^"\\]+/)),

    escape_sequence: $ =>
      token.immediate(seq(
        "\\",
        choice(
          /[^xu0-7]/,
          /[0-7]{1,3}/,
          /x[0-9a-fA-F]{2}/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
        ),
      )),

    id: $ => /[a-zA-Z0-9-]+/,
  },
});
