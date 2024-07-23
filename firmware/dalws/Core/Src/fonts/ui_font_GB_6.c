/*******************************************************************************
 * Size: 6 px
 * Bpp: 1
 * Opts: --bpp 1 --size 6 --font /home/anhld/SquareLine/assets/Early GameBoy.ttf -o /home/anhld/SquareLine/assets/ui_font_GB_6.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_GB_6
#define UI_FONT_GB_6 1
#endif

#if UI_FONT_GB_6

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc, 0xc0,

    /* U+0022 "\"" */
    0xf5,

    /* U+0027 "'" */
    0xd0,

    /* U+0028 "(" */
    0x32, 0x23, 0x3a, 0xa0, 0xc0,

    /* U+0029 ")" */
    0x6f, 0x9f, 0x60,

    /* U+002A "*" */
    0x96, 0x69,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xc0,

    /* U+0030 "0" */
    0x76, 0xf7, 0xb7, 0x0,

    /* U+0031 "1" */
    0x6e, 0x66, 0xf0,

    /* U+0032 "2" */
    0x6b, 0x6c, 0xf0,

    /* U+0033 "3" */
    0xe3, 0xe3, 0xe0,

    /* U+0034 "4" */
    0x77, 0xad, 0xf3, 0x0,

    /* U+0035 "5" */
    0xe8, 0xeb, 0x60,

    /* U+0036 "6" */
    0x76, 0x3d, 0xb7, 0x0,

    /* U+0037 "7" */
    0xf8, 0xc4, 0x67, 0x0,

    /* U+0038 "8" */
    0x6b, 0x6b, 0x60,

    /* U+0039 "9" */
    0x6b, 0x73, 0x60,

    /* U+003A ":" */
    0xc3,

    /* U+003B ";" */
    0xc3, 0x60,

    /* U+003C "<" */
    0xfc, 0x62, 0xa6, 0x10,

    /* U+003E ">" */
    0x7f, 0x62,

    /* U+003F "?" */
    0x6b, 0x26, 0x6,

    /* U+0041 "A" */
    0x6b, 0xfb, 0xb0,

    /* U+0042 "B" */
    0xf6, 0xfd, 0xbf, 0x0,

    /* U+0043 "C" */
    0x76, 0xf1, 0xb7, 0x0,

    /* U+0044 "D" */
    0xeb, 0xbb, 0xe0,

    /* U+0045 "E" */
    0xfe, 0x3d, 0x8f, 0x80,

    /* U+0046 "F" */
    0xfe, 0x3d, 0x8c, 0x0,

    /* U+0047 "G" */
    0x76, 0xf7, 0xb7, 0x80,

    /* U+0048 "H" */
    0x9c, 0xff, 0x39, 0x80,

    /* U+0049 "I" */
    0xf6, 0x66, 0xf0,

    /* U+004A "J" */
    0x39, 0x8d, 0xe6, 0x0,

    /* U+004B "K" */
    0xdf, 0xb9, 0xed, 0x80,

    /* U+004C "L" */
    0xc6, 0x31, 0x8f, 0x80,

    /* U+004D "M" */
    0x9f, 0xf7, 0x39, 0x80,

    /* U+004E "N" */
    0x9e, 0xf7, 0x79, 0x80,

    /* U+004F "O" */
    0x76, 0xf7, 0xb7, 0x0,

    /* U+0050 "P" */
    0xf6, 0xfd, 0x8c, 0x0,

    /* U+0051 "Q" */
    0xfe, 0x7b, 0xa6, 0x80,

    /* U+0052 "R" */
    0xf6, 0xfd, 0xcd, 0x80,

    /* U+0053 "S" */
    0xe8, 0xeb, 0xe0,

    /* U+0054 "T" */
    0xfc, 0xc3, 0xc, 0x30,

    /* U+0055 "U" */
    0x9c, 0xe7, 0x77, 0x0,

    /* U+0056 "V" */
    0x9c, 0xe6, 0xe2, 0x0,

    /* U+0057 "W" */
    0x9c, 0xf7, 0xf9, 0x80,

    /* U+0058 "X" */
    0x9b, 0x99, 0xa8, 0x80,

    /* U+0059 "Y" */
    0xcd, 0x23, 0x8, 0x20,

    /* U+005A "Z" */
    0xf9, 0xd9, 0x8f, 0x80,

    /* U+005B "[" */
    0x33, 0x38, 0x7f, 0x49, 0x23, 0x0,

    /* U+005D "]" */
    0x77, 0xc0,

    /* U+0061 "a" */
    0x6b, 0xfb, 0xb0,

    /* U+0062 "b" */
    0xf6, 0xfd, 0xbf, 0x0,

    /* U+0063 "c" */
    0x76, 0xf1, 0xb7, 0x0,

    /* U+0064 "d" */
    0xeb, 0xbb, 0xe0,

    /* U+0065 "e" */
    0xfe, 0x3d, 0x8f, 0x80,

    /* U+0066 "f" */
    0xfe, 0x3d, 0x8c, 0x0,

    /* U+0067 "g" */
    0x76, 0xf7, 0xb7, 0x80,

    /* U+0068 "h" */
    0x9c, 0xff, 0x39, 0x80,

    /* U+0069 "i" */
    0xf6, 0x66, 0xf0,

    /* U+006A "j" */
    0x39, 0x8d, 0xe6, 0x0,

    /* U+006B "k" */
    0xdf, 0xb9, 0xed, 0x80,

    /* U+006C "l" */
    0xc6, 0x31, 0x8f, 0x80,

    /* U+006D "m" */
    0x9f, 0xf7, 0x39, 0x80,

    /* U+006E "n" */
    0x9e, 0xf7, 0x79, 0x80,

    /* U+006F "o" */
    0x76, 0xf7, 0xb7, 0x0,

    /* U+0070 "p" */
    0xf6, 0xfd, 0x8c, 0x0,

    /* U+0071 "q" */
    0xfe, 0x7b, 0xa6, 0x80,

    /* U+0072 "r" */
    0xf6, 0xfd, 0xcd, 0x80,

    /* U+0073 "s" */
    0xe8, 0xeb, 0xe0,

    /* U+0074 "t" */
    0xfc, 0xc3, 0xc, 0x30,

    /* U+0075 "u" */
    0x9c, 0xe7, 0x77, 0x0,

    /* U+0076 "v" */
    0x9c, 0xe6, 0xe2, 0x0,

    /* U+0077 "w" */
    0x9c, 0xf7, 0xf9, 0x80,

    /* U+0078 "x" */
    0x9b, 0x99, 0xa8, 0x80,

    /* U+0079 "y" */
    0xcd, 0x23, 0x8, 0x20,

    /* U+007A "z" */
    0xf9, 0xd9, 0x8f, 0x80,

    /* U+007C "|" */
    0xdb, 0x0, 0x0, 0x3, 0x3, 0xe0, 0x1e, 0x0,
    0xc, 0xf, 0xbf, 0x33, 0xbc, 0xf3, 0xbe, 0xfe,
    0xda, 0xfe, 0xdb, 0xfb, 0xdb, 0x7b, 0x7b, 0x6f,
    0x6f, 0x6c, 0xed, 0xbc, 0xe0,

    /* U+007E "~" */
    0xdb, 0xec
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 96, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 96, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 4, .adv_w = 96, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 5, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 10, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 96, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 16, .adv_w = 96, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 17, .adv_w = 96, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 96, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 96, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 55, .adv_w = 108, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 59, .adv_w = 108, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 61, .adv_w = 96, .box_w = 4, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 64, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 170, .adv_w = 96, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 172, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 600, .box_w = 38, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 96, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_GB_6 = {
#else
lv_font_t ui_font_GB_6 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_GB_6*/

