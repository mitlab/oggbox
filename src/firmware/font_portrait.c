const char *font[] = {
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",  /*   */
  "\x00\x08\x08\x08\x00\x08\x00\x00",  /* ! */
  "\x00\x14\x14\x00\x00\x00\x00\x00",  /* " */
  "\x00\x14\x3E\x14\x3E\x14\x00\x00",  /* # */
  "\x08\x1C\x02\x1C\x20\x1C\x08\x00",  /* $ */
  "\x44\x2A\x14\x28\x54\x22\x00\x00",  /* % */
  "\x0C\x12\x0C\x12\x22\x5C\x00\x00",  /* & */
  "\x00\x08\x08\x00\x00\x00\x00\x00",  /* ' */
  "\x00\x08\x04\x04\x04\x08\x00\x00",  /* ( */
  "\x00\x08\x10\x10\x10\x08\x00\x00",  /* ) */
  "\x00\x08\x3E\x08\x14\x00\x00\x00",  /* * */
  "\x00\x08\x08\x3E\x08\x08\x00\x00",  /* + */
  "\x00\x00\x00\x00\x08\x08\x04\x00",  /* , */
  "\x00\x00\x00\x3E\x00\x00\x00\x00",  /* - */
  "\x00\x00\x00\x00\x08\x08\x00\x00",  /* . */
  "\x00\x20\x10\x08\x04\x02\x00\x00",  /* / */
  "\x1E\x31\x29\x25\x23\x1E\x00\x00",  /* 0 */
  "\x08\x0C\x0A\x08\x08\x3E\x00\x00",  /* 1 */
  "\x1E\x21\x20\x1C\x02\x3F\x00\x00",  /* 2 */
  "\x1E\x21\x1C\x20\x21\x1E\x00\x00",  /* 3 */
  "\x10\x18\x14\x12\x3F\x10\x00\x00",  /* 4 */
  "\x3F\x01\x1F\x20\x20\x1F\x00\x00",  /* 5 */
  "\x3C\x02\x1F\x21\x21\x1E\x00\x00",  /* 6 */
  "\x3F\x20\x20\x10\x08\x08\x00\x00",  /* 7 */
  "\x1E\x21\x1E\x21\x21\x1E\x00\x00",  /* 8 */
  "\x1E\x21\x3E\x20\x20\x1E\x00\x00",  /* 9 */
  "\x00\x08\x00\x00\x08\x00\x00\x00",  /* : */
  "\x00\x08\x00\x00\x08\x08\x04\x00",  /* ; */
  "\x00\x20\x18\x04\x18\x20\x00\x00",  /* < */
  "\x00\x00\x3E\x00\x3E\x00\x00\x00",  /* = */
  "\x00\x02\x0C\x10\x0C\x02\x00\x00",  /* > */
  "\x1C\x22\x10\x08\x00\x08\x00\x00",  /* ? */
  "\x3E\x41\x59\x55\x79\x01\x1E\x00",  /* @ */
  "\x08\x14\x22\x41\x7F\x41\x00\x00",  /* A */
  "\x1F\x21\x1F\x21\x21\x1F\x00\x00",  /* B */
  "\x1E\x21\x01\x01\x21\x1E\x00\x00",  /* C */
  "\x1F\x21\x21\x21\x21\x1F\x00\x00",  /* D */
  "\x3F\x01\x0F\x01\x01\x3F\x00\x00",  /* E */
  "\x3F\x01\x0F\x01\x01\x01\x00\x00",  /* F */
  "\x1E\x21\x01\x39\x21\x3E\x00\x00",  /* G */
  "\x21\x21\x3F\x21\x21\x21\x00\x00",  /* H */
  "\x3E\x08\x08\x08\x08\x3E\x00\x00",  /* I */
  "\x3E\x20\x20\x20\x22\x1C\x00\x00",  /* J */
  "\x01\x11\x0B\x05\x09\x11\x00\x00",  /* K */
  "\x01\x01\x01\x01\x01\x3F\x00\x00",  /* L */
  "\x21\x33\x2D\x21\x21\x21\x00\x00",  /* M */
  "\x21\x23\x25\x29\x31\x21\x00\x00",  /* N */
  "\x1E\x21\x21\x21\x21\x1E\x00\x00",  /* O */
  "\x1F\x21\x21\x1F\x01\x01\x00\x00",  /* P */
  "\x1E\x21\x21\x21\x11\x2E\x00\x00",  /* Q */
  "\x1F\x21\x21\x1F\x11\x21\x00\x00",  /* R */
  "\x3E\x01\x1E\x20\x20\x1F\x00\x00",  /* S */
  "\x7F\x08\x08\x08\x08\x08\x00\x00",  /* T */
  "\x21\x21\x21\x21\x21\x1E\x00\x00",  /* U */
  "\x21\x21\x21\x21\x12\x0C\x00\x00",  /* V */
  "\x21\x21\x21\x2D\x33\x21\x00\x00",  /* W */
  "\x21\x12\x0C\x0C\x12\x21\x00\x00",  /* X */
  "\x41\x22\x14\x08\x08\x08\x00\x00",  /* Y */
  "\x3F\x10\x08\x04\x02\x3F\x00\x00",  /* Z */
  "\x1C\x04\x04\x04\x04\x1C\x00\x00",  /* [ */
  "\x00\x02\x04\x08\x10\x20\x00\x00",  /* \ */
  "\x1C\x10\x10\x10\x10\x1C\x00\x00",  /* ] */
  "\x08\x14\x22\x00\x00\x00\x00\x00",  /* ^ */
  "\x00\x00\x00\x00\x00\x00\x7F\x00",  /* _ */
  "\x04\x08\x00\x00\x00\x00\x00\x00",  /* ` */
  "\x00\x1C\x20\x3C\x22\x3C\x00\x00",  /* a */
  "\x00\x02\x02\x0E\x12\x0E\x00\x00",  /* b */
  "\x00\x00\x00\x0C\x02\x0C\x00\x00",  /* c */
  "\x00\x10\x10\x1C\x12\x1C\x00\x00",  /* d */
  "\x00\x1C\x22\x3E\x02\x3C\x00\x00",  /* e */
  "\x00\x0C\x02\x06\x02\x02\x00\x00",  /* f */
  "\x00\x00\x38\x24\x38\x20\x1C\x00",  /* g */
  "\x00\x02\x02\x0E\x12\x12\x00\x00",  /* h */
  "\x00\x08\x00\x08\x08\x1C\x00\x00",  /* i */
  "\x00\x08\x00\x08\x08\x08\x04\x00",  /* j */
  "\x00\x02\x12\x0E\x0A\x12\x00\x00",  /* k */
  "\x00\x0C\x08\x08\x08\x10\x00\x00",  /* l */
  "\x00\x00\x00\x16\x2A\x2A\x00\x00",  /* m */
  "\x00\x00\x00\x0E\x12\x12\x00\x00",  /* n */
  "\x00\x00\x0C\x12\x12\x0C\x00\x00",  /* o */
  "\x00\x00\x0E\x12\x12\x0E\x02\x00",  /* p */
  "\x00\x00\x1C\x12\x1C\x30\x10\x00",  /* q */
  "\x00\x00\x00\x0E\x12\x02\x00\x00",  /* r */
  "\x00\x1C\x02\x0C\x10\x0E\x00\x00",  /* s */
  "\x00\x02\x02\x06\x02\x0C\x00\x00",  /* t */
  "\x00\x00\x00\x12\x12\x1C\x00\x00",  /* u */
  "\x00\x00\x00\x22\x14\x08\x00\x00",  /* v */
  "\x00\x00\x00\x22\x2A\x14\x00\x00",  /* w */
  "\x00\x00\x00\x14\x08\x14\x00\x00",  /* x */
  "\x00\x00\x12\x12\x1C\x10\x0C\x00",  /* y */
  "\x00\x00\x1E\x08\x04\x1E\x00\x00",  /* z */
  "\x10\x08\x08\x04\x08\x08\x10\x00",  /* { */
  "\x08\x08\x08\x08\x08\x08\x00\x00",  /* | */
  "\x08\x10\x10\x20\x10\x10\x08\x00",  /* } */
  "\x00\x00\x04\x2A\x10\x00\x00\x00",  /* ~ */
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
};
