/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --font /home/anhld/SquareLine/assets/Early GameBoy.ttf -o /home/anhld/SquareLine/assets/ui_font_GB_10.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_GB_10
#define UI_FONT_GB_10 1
#endif

#if UI_FONT_GB_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf0, 0xf,

    /* U+0022 "\"" */
    0xde, 0xd2, 0x90,

    /* U+0027 "'" */
    0xf5,

    /* U+0028 "(" */
    0x3c, 0x21, 0x20, 0x30, 0x18, 0x4c, 0x26, 0x22,
    0x0, 0x42, 0x1e, 0x0,

    /* U+0029 ")" */
    0x7b, 0x38, 0x61, 0x87, 0x34, 0x9e,

    /* U+002A "*" */
    0x84, 0x4, 0x84, 0x48, 0x8, 0x40,

    /* U+002C "," */
    0xf5, 0x80,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xfc,

    /* U+0030 "0" */
    0x7c, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x64, 0x7c,

    /* U+0031 "1" */
    0x77, 0x9c, 0xe7, 0x39, 0xdf,

    /* U+0032 "2" */
    0x7c, 0xc, 0x8f, 0xf, 0x7c, 0xf0, 0xf0, 0xff,

    /* U+0033 "3" */
    0xfc, 0xf, 0xc, 0x7c, 0xf, 0xf, 0xc, 0xfc,

    /* U+0034 "4" */
    0x7d, 0xba, 0x74, 0xe9, 0xdf, 0xc7, 0xe,

    /* U+0035 "5" */
    0xfc, 0xe0, 0xe0, 0xfc, 0xf, 0x8f, 0xc, 0x7c,

    /* U+0036 "6" */
    0x7c, 0xe0, 0xe0, 0xfc, 0xe7, 0xe7, 0x64, 0x7c,

    /* U+0037 "7" */
    0xfe, 0xc, 0x18, 0xe3, 0x87, 0x1e, 0x3c,

    /* U+0038 "8" */
    0x7c, 0x8f, 0xc, 0x7c, 0x8f, 0x8f, 0xc, 0x7c,

    /* U+0039 "9" */
    0x7c, 0x8f, 0x8f, 0xf, 0x7f, 0xf, 0xc, 0x7c,

    /* U+003A ":" */
    0xfc, 0xf, 0xc0,

    /* U+003B ";" */
    0xf0, 0xf5, 0x80,

    /* U+003C "<" */
    0x76, 0x0, 0x22, 0x30, 0x18, 0xc, 0x5, 0x8,
    0x28, 0x8, 0x0,

    /* U+003E ">" */
    0x5d, 0xff, 0xde, 0x78, 0x80,

    /* U+003F "?" */
    0x7c, 0x8f, 0xf, 0xc, 0x3c, 0x38, 0x0, 0x0,
    0x38,

    /* U+0041 "A" */
    0x7c, 0xc, 0x8f, 0x8f, 0xff, 0x8f, 0x8f, 0x8f,

    /* U+0042 "B" */
    0xfe, 0xe7, 0xe6, 0xfe, 0xe7, 0xe7, 0xe6, 0xfe,

    /* U+0043 "C" */
    0x7c, 0xe7, 0xe0, 0xe0, 0xe0, 0xe7, 0x64, 0x7c,

    /* U+0044 "D" */
    0xfe, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8e, 0xfe,

    /* U+0045 "E" */
    0xff, 0xe0, 0xe0, 0xfe, 0xe0, 0xe0, 0xe0, 0xff,

    /* U+0046 "F" */
    0xff, 0xe0, 0xe0, 0xe0, 0xfe, 0xe0, 0xe0, 0xe0,

    /* U+0047 "G" */
    0x7c, 0xe7, 0xe0, 0xe0, 0xef, 0xe7, 0x67, 0x7f,

    /* U+0048 "H" */
    0x87, 0x87, 0x87, 0xff, 0x87, 0x87, 0x87, 0x87,

    /* U+0049 "I" */
    0xfb, 0x9c, 0xe7, 0x39, 0xdf,

    /* U+004A "J" */
    0x1f, 0x1c, 0x1c, 0x1c, 0xfc, 0xfc, 0x78, 0x78,

    /* U+004B "K" */
    0xe7, 0xfc, 0xfc, 0xf8, 0xf8, 0xfc, 0xe4, 0xe7,

    /* U+004C "L" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,

    /* U+004D "M" */
    0x83, 0xc1, 0xfb, 0xff, 0xf9, 0x3c, 0x1e, 0xf,
    0x7,

    /* U+004E "N" */
    0x87, 0x87, 0xc7, 0xf7, 0xbf, 0x8f, 0x87, 0x87,

    /* U+004F "O" */
    0x7c, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x64, 0x7c,

    /* U+0050 "P" */
    0xfe, 0xe6, 0xe7, 0xe7, 0xfe, 0xe0, 0xe0, 0xe0,

    /* U+0051 "Q" */
    0x7d, 0xc7, 0x8f, 0x1e, 0xbc, 0x98, 0x3d,

    /* U+0052 "R" */
    0xfe, 0xe6, 0xe7, 0xe7, 0xfe, 0xe8, 0xe8, 0xe7,

    /* U+0053 "S" */
    0x7c, 0xe0, 0x60, 0x7c, 0xf, 0x8f, 0xc, 0x7c,

    /* U+0054 "T" */
    0xff, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,

    /* U+0055 "U" */
    0x87, 0x87, 0x87, 0x87, 0x87, 0x8f, 0xc, 0x7c,

    /* U+0056 "V" */
    0x87, 0x87, 0x87, 0x87, 0x87, 0x5c, 0x18, 0x38,

    /* U+0057 "W" */
    0x83, 0xc1, 0xe0, 0xf2, 0x7f, 0xff, 0x7e, 0xf,
    0x7,

    /* U+0058 "X" */
    0x86, 0xb8, 0x61, 0xc7, 0x98, 0xa0, 0x41,

    /* U+0059 "Y" */
    0xe7, 0xe7, 0x64, 0x7c, 0x18, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xf, 0xf, 0x3c, 0x78, 0xf0, 0xf0, 0xff,

    /* U+005B "[" */
    0x1f, 0x10, 0x28, 0x6, 0x1, 0x80, 0x7f, 0xf4,
    0x9, 0x2, 0x40, 0x87, 0xc0,

    /* U+005D "]" */
    0x7c, 0x7c, 0xff, 0xff,

    /* U+0061 "a" */
    0x7c, 0xc, 0x8f, 0x8f, 0xff, 0x8f, 0x8f, 0x8f,

    /* U+0062 "b" */
    0xfe, 0xe7, 0xe6, 0xfe, 0xe7, 0xe7, 0xe6, 0xfe,

    /* U+0063 "c" */
    0x7c, 0xe7, 0xe0, 0xe0, 0xe0, 0xe7, 0x64, 0x7c,

    /* U+0064 "d" */
    0xfe, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8e, 0xfe,

    /* U+0065 "e" */
    0xff, 0xe0, 0xe0, 0xfe, 0xe0, 0xe0, 0xe0, 0xff,

    /* U+0066 "f" */
    0xff, 0xe0, 0xe0, 0xe0, 0xfe, 0xe0, 0xe0, 0xe0,

    /* U+0067 "g" */
    0x7c, 0xe7, 0xe0, 0xe0, 0xef, 0xe7, 0x67, 0x7f,

    /* U+0068 "h" */
    0x87, 0x87, 0x87, 0xff, 0x87, 0x87, 0x87, 0x87,

    /* U+0069 "i" */
    0xfb, 0x9c, 0xe7, 0x39, 0xdf,

    /* U+006A "j" */
    0x1f, 0x1c, 0x1c, 0x1c, 0xfc, 0xfc, 0x78, 0x78,

    /* U+006B "k" */
    0xe7, 0xfc, 0xfc, 0xf8, 0xf8, 0xfc, 0xe4, 0xe7,

    /* U+006C "l" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,

    /* U+006D "m" */
    0x83, 0xc1, 0xfb, 0xff, 0xf9, 0x3c, 0x1e, 0xf,
    0x7,

    /* U+006E "n" */
    0x87, 0x87, 0xc7, 0xf7, 0xbf, 0x8f, 0x87, 0x87,

    /* U+006F "o" */
    0x7c, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x64, 0x7c,

    /* U+0070 "p" */
    0xfe, 0xe6, 0xe7, 0xe7, 0xfe, 0xe0, 0xe0, 0xe0,

    /* U+0071 "q" */
    0x7d, 0xc7, 0x8f, 0x1e, 0xbc, 0x98, 0x3d,

    /* U+0072 "r" */
    0xfe, 0xe6, 0xe7, 0xe7, 0xfe, 0xe8, 0xe8, 0xe7,

    /* U+0073 "s" */
    0x7c, 0xe0, 0x60, 0x7c, 0xf, 0x8f, 0xc, 0x7c,

    /* U+0074 "t" */
    0xff, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,

    /* U+0075 "u" */
    0x87, 0x87, 0x87, 0x87, 0x87, 0x8f, 0xc, 0x7c,

    /* U+0076 "v" */
    0x87, 0x87, 0x87, 0x87, 0x87, 0x5c, 0x18, 0x38,

    /* U+0077 "w" */
    0x83, 0xc1, 0xe0, 0xf2, 0x7f, 0xff, 0x7e, 0xf,
    0x7,

    /* U+0078 "x" */
    0x86, 0xb8, 0x61, 0xc7, 0x98, 0xa0, 0x41,

    /* U+0079 "y" */
    0xe7, 0xe7, 0x64, 0x7c, 0x18, 0x18, 0x18, 0x18,

    /* U+007A "z" */
    0xff, 0xf, 0xf, 0x3c, 0x78, 0xf0, 0xf0, 0xff,

    /* U+007C "|" */
    0xe3, 0xb8, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x1,
    0xe7, 0x70, 0x3, 0x80, 0x0, 0x0, 0x38, 0x3,
    0xce, 0x0, 0x7, 0xc0, 0x0, 0x0, 0x70, 0x7,
    0x5d, 0xfb, 0x8e, 0x1f, 0x3b, 0x8f, 0xe7, 0xce,
    0xbb, 0xf3, 0x1c, 0x26, 0x73, 0x19, 0xcc, 0x9d,
    0x77, 0xf7, 0x39, 0xce, 0xf7, 0x73, 0xb9, 0xf9,
    0xef, 0xce, 0x73, 0xfd, 0xce, 0xe7, 0x73, 0xf3,
    0xdf, 0x9c, 0xe7, 0x3, 0x9d, 0xce, 0xe7, 0xe3,
    0xbf, 0x39, 0xc2, 0x7, 0x39, 0x9c, 0xc9, 0xc7,
    0x7e, 0x73, 0x87, 0xee, 0x73, 0xf9, 0xf0,

    /* U+007E "~" */
    0xe7, 0xbd, 0xff, 0xfb, 0x9c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 80, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 160, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 160, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8, .adv_w = 160, .box_w = 2, .box_h = 4, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 9, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 21, .adv_w = 160, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 160, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 160, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 35, .adv_w = 160, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 37, .adv_w = 160, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 160, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 160, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 160, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 160, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 160, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 119, .adv_w = 180, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 130, .adv_w = 180, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 135, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 144, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 160, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 160, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 160, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 362, .adv_w = 160, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 366, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 160, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 160, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 160, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 1000, .box_w = 63, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 160, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_GB_10 = {
#else
lv_font_t ui_font_GB_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_GB_10*/

