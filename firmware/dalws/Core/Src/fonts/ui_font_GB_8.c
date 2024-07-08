/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: --bpp 1 --size 8 --font /home/anhld/SquareLine/assets/Early GameBoy.ttf -o /home/anhld/SquareLine/assets/ui_font_GB_8.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_GB_8
#define UI_FONT_GB_8 1
#endif

#if UI_FONT_GB_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xf1, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xd2,

    /* U+0027 "'" */
    0xf4,

    /* U+0028 "(" */
    0x38, 0x8a, 0xc, 0x58, 0xb2, 0x51, 0x1c,

    /* U+0029 ")" */
    0x76, 0xe3, 0x1d, 0xb8,

    /* U+002A "*" */
    0x8a, 0x88, 0xa8, 0x80,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xf0,

    /* U+0030 "0" */
    0x7b, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0031 "1" */
    0x6e, 0x66, 0x6f,

    /* U+0032 "2" */
    0x7a, 0x71, 0xde, 0xe3, 0xf0,

    /* U+0033 "3" */
    0xf8, 0x77, 0x87, 0x1f, 0xe0,

    /* U+0034 "4" */
    0x7b, 0x69, 0xa6, 0xfc, 0x60,

    /* U+0035 "5" */
    0xfb, 0xf, 0x87, 0x9d, 0xe0,

    /* U+0036 "6" */
    0x7b, 0xf, 0xb3, 0xcd, 0xe0,

    /* U+0037 "7" */
    0xfc, 0x31, 0x8c, 0x71, 0xc0,

    /* U+0038 "8" */
    0x7a, 0x77, 0xa7, 0x9d, 0xe0,

    /* U+0039 "9" */
    0x7a, 0x79, 0xdf, 0x1d, 0xe0,

    /* U+003A ":" */
    0xf3, 0xc0,

    /* U+003B ";" */
    0xf3, 0xd8,

    /* U+003C "<" */
    0x6d, 0x26, 0xc, 0x14, 0x45, 0x4, 0x0,

    /* U+003E ">" */
    0x5b, 0xfe, 0xe2, 0x0,

    /* U+003F "?" */
    0x7a, 0x71, 0xce, 0x30, 0x3, 0x0,

    /* U+0041 "A" */
    0x7a, 0x79, 0xff, 0x9e, 0x70,

    /* U+0042 "B" */
    0xfb, 0x3f, 0xb3, 0xcf, 0xe0,

    /* U+0043 "C" */
    0x7b, 0x3c, 0x30, 0xcd, 0xe0,

    /* U+0044 "D" */
    0xfa, 0x79, 0xe7, 0x9f, 0xe0,

    /* U+0045 "E" */
    0xff, 0xf, 0xb0, 0xc3, 0xf0,

    /* U+0046 "F" */
    0xff, 0xc, 0x3e, 0xc3, 0x0,

    /* U+0047 "G" */
    0x7b, 0x3c, 0x37, 0xcd, 0xf0,

    /* U+0048 "H" */
    0x8e, 0x3f, 0xe3, 0x8e, 0x30,

    /* U+0049 "I" */
    0xf6, 0x66, 0x6f,

    /* U+004A "J" */
    0x3c, 0x61, 0xb6, 0xd9, 0xc0,

    /* U+004B "K" */
    0xcf, 0x6f, 0x3c, 0xdb, 0x30,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xf0,

    /* U+004D "M" */
    0x8f, 0x7f, 0xeb, 0x8e, 0x30,

    /* U+004E "N" */
    0x8f, 0x3e, 0xef, 0x9e, 0x30,

    /* U+004F "O" */
    0x7b, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0050 "P" */
    0xfb, 0x3c, 0xfe, 0xc3, 0x0,

    /* U+0051 "Q" */
    0x7b, 0x1c, 0x75, 0xc9, 0xd0,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xfe, 0xd3, 0x30,

    /* U+0053 "S" */
    0x7b, 0x7, 0x87, 0x9d, 0xe0,

    /* U+0054 "T" */
    0xfc, 0xc3, 0xc, 0x30, 0xc0,

    /* U+0055 "U" */
    0x8e, 0x38, 0xe3, 0x9d, 0xe0,

    /* U+0056 "V" */
    0x8e, 0x38, 0xe3, 0x58, 0xc0,

    /* U+0057 "W" */
    0x8e, 0x3a, 0xff, 0xde, 0x30,

    /* U+0058 "X" */
    0x8d, 0x63, 0x1c, 0xca, 0x10,

    /* U+0059 "Y" */
    0xcf, 0x37, 0x8c, 0x30, 0xc0,

    /* U+005A "Z" */
    0xfc, 0x73, 0x9c, 0xe3, 0xf0,

    /* U+005B "[" */
    0x3c, 0x42, 0x81, 0x81, 0xff, 0x42, 0x42, 0x3c,

    /* U+005D "]" */
    0x7b, 0xff, 0xc0,

    /* U+0061 "a" */
    0x7a, 0x79, 0xff, 0x9e, 0x70,

    /* U+0062 "b" */
    0xfb, 0x3f, 0xb3, 0xcf, 0xe0,

    /* U+0063 "c" */
    0x7b, 0x3c, 0x30, 0xcd, 0xe0,

    /* U+0064 "d" */
    0xfa, 0x79, 0xe7, 0x9f, 0xe0,

    /* U+0065 "e" */
    0xff, 0xf, 0xb0, 0xc3, 0xf0,

    /* U+0066 "f" */
    0xff, 0xc, 0x3e, 0xc3, 0x0,

    /* U+0067 "g" */
    0x7b, 0x3c, 0x37, 0xcd, 0xf0,

    /* U+0068 "h" */
    0x8e, 0x3f, 0xe3, 0x8e, 0x30,

    /* U+0069 "i" */
    0xf6, 0x66, 0x6f,

    /* U+006A "j" */
    0x3c, 0x61, 0xb6, 0xd9, 0xc0,

    /* U+006B "k" */
    0xcf, 0x6f, 0x3c, 0xdb, 0x30,

    /* U+006C "l" */
    0xc3, 0xc, 0x30, 0xc3, 0xf0,

    /* U+006D "m" */
    0x8f, 0x7f, 0xeb, 0x8e, 0x30,

    /* U+006E "n" */
    0x8f, 0x3e, 0xef, 0x9e, 0x30,

    /* U+006F "o" */
    0x7b, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0070 "p" */
    0xfb, 0x3c, 0xfe, 0xc3, 0x0,

    /* U+0071 "q" */
    0x7b, 0x1c, 0x75, 0xc9, 0xd0,

    /* U+0072 "r" */
    0xfb, 0x3c, 0xfe, 0xd3, 0x30,

    /* U+0073 "s" */
    0x7b, 0x7, 0x87, 0x9d, 0xe0,

    /* U+0074 "t" */
    0xfc, 0xc3, 0xc, 0x30, 0xc0,

    /* U+0075 "u" */
    0x8e, 0x38, 0xe3, 0x9d, 0xe0,

    /* U+0076 "v" */
    0x8e, 0x38, 0xe3, 0x58, 0xc0,

    /* U+0077 "w" */
    0x8e, 0x3a, 0xff, 0xde, 0x30,

    /* U+0078 "x" */
    0x8d, 0x63, 0x1c, 0xca, 0x10,

    /* U+0079 "y" */
    0xcf, 0x37, 0x8c, 0x30, 0xc0,

    /* U+007A "z" */
    0xfc, 0x73, 0x9c, 0xe3, 0xf0,

    /* U+007C "|" */
    0xc6, 0xc0, 0x0, 0x0, 0x0, 0x60, 0x39, 0xb0,
    0x6, 0x0, 0x0, 0x18, 0xe, 0x60, 0x3, 0xc0,
    0x0, 0x6, 0x3, 0x5b, 0x6c, 0x63, 0xcd, 0x8f,
    0x9e, 0xd6, 0xdd, 0x99, 0x9b, 0xb6, 0x6c, 0xf3,
    0xb6, 0x66, 0x7e, 0xcd, 0x9b, 0x3c, 0xed, 0x99,
    0x98, 0x33, 0x66, 0xcf, 0x1b, 0x66, 0x63, 0xec,
    0xcf, 0x9e,

    /* U+007E "~" */
    0xce, 0xff, 0xec
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 3, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 7, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 14, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 24, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 128, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 77, .adv_w = 144, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 84, .adv_w = 144, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 88, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 94, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 230, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 233, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 800, .box_w = 50, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 2, 0, 0, 0, 0, 3,
    4, 5, 6, 0, 7, 8, 9, 0,
    10, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 20, 21, 22, 0, 23, 24,
    0, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 0, 52, 0, 0,
    0, 53, 54, 55, 56, 57, 58, 59,
    60, 61, 62, 63, 64, 65, 66, 67,
    68, 69, 70, 71, 72, 73, 74, 75,
    76, 77, 78, 0, 79, 0, 80
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 95, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_GB_8 = {
#else
lv_font_t ui_font_GB_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_GB_8*/

