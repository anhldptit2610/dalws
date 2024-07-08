/*******************************************************************************
 * Size: 4 px
 * Bpp: 1
 * Opts: --bpp 1 --size 4 --font /home/anhld/SquareLine/assets/Early GameBoy.ttf -o /home/anhld/SquareLine/assets/ui_font_GB_4.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_GB_4
#define UI_FONT_GB_4 1
#endif

#if UI_FONT_GB_4

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xe0,

    /* U+0022 "\"" */
    0xf4,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x60, 0xb9, 0x60,

    /* U+0029 ")" */
    0xf7, 0x0,

    /* U+002A "*" */
    0xbb, 0x80,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0x80,

    /* U+0030 "0" */
    0xf7, 0x80,

    /* U+0031 "1" */
    0xcb, 0x80,

    /* U+0032 "2" */
    0xef, 0x80,

    /* U+0033 "3" */
    0xef, 0x80,

    /* U+0034 "4" */
    0xea, 0xf0,

    /* U+0035 "5" */
    0xff, 0x80,

    /* U+0036 "6" */
    0xff, 0x80,

    /* U+0037 "7" */
    0xef, 0x0,

    /* U+0038 "8" */
    0xfd, 0x80,

    /* U+0039 "9" */
    0xed, 0x80,

    /* U+003A ":" */
    0xa0,

    /* U+003B ";" */
    0xf0,

    /* U+003C "<" */
    0x69, 0x96,

    /* U+003E ">" */
    0x7c,

    /* U+003F "?" */
    0xec, 0x20,

    /* U+0041 "A" */
    0xfe, 0x80,

    /* U+0042 "B" */
    0xff, 0x80,

    /* U+0043 "C" */
    0xf3, 0x80,

    /* U+0044 "D" */
    0xf7, 0x80,

    /* U+0045 "E" */
    0xff, 0x80,

    /* U+0046 "F" */
    0xfe, 0x0,

    /* U+0047 "G" */
    0xff, 0x80,

    /* U+0048 "H" */
    0xbe, 0x80,

    /* U+0049 "I" */
    0xeb, 0x80,

    /* U+004A "J" */
    0x7a, 0xe0,

    /* U+004B "K" */
    0xfa, 0x80,

    /* U+004C "L" */
    0x93, 0x80,

    /* U+004D "M" */
    0xbe, 0x80,

    /* U+004E "N" */
    0xbe, 0x80,

    /* U+004F "O" */
    0xf7, 0x80,

    /* U+0050 "P" */
    0xfe, 0x0,

    /* U+0051 "Q" */
    0xff, 0x80,

    /* U+0052 "R" */
    0xfe, 0x80,

    /* U+0053 "S" */
    0xef, 0x80,

    /* U+0054 "T" */
    0xe9, 0x0,

    /* U+0055 "U" */
    0xb7, 0x80,

    /* U+0056 "V" */
    0xb5, 0x80,

    /* U+0057 "W" */
    0xbe, 0x80,

    /* U+0058 "X" */
    0xea, 0x80,

    /* U+0059 "Y" */
    0xbd, 0x0,

    /* U+005A "Z" */
    0xff, 0x80,

    /* U+005B "[" */
    0x69, 0xf9, 0x60,

    /* U+005D "]" */
    0xe0,

    /* U+0061 "a" */
    0xfe, 0x80,

    /* U+0062 "b" */
    0xff, 0x80,

    /* U+0063 "c" */
    0xf3, 0x80,

    /* U+0064 "d" */
    0xf7, 0x80,

    /* U+0065 "e" */
    0xff, 0x80,

    /* U+0066 "f" */
    0xfe, 0x0,

    /* U+0067 "g" */
    0xff, 0x80,

    /* U+0068 "h" */
    0xbe, 0x80,

    /* U+0069 "i" */
    0xeb, 0x80,

    /* U+006A "j" */
    0x7a, 0xe0,

    /* U+006B "k" */
    0xfa, 0x80,

    /* U+006C "l" */
    0x93, 0x80,

    /* U+006D "m" */
    0xbe, 0x80,

    /* U+006E "n" */
    0xbe, 0x80,

    /* U+006F "o" */
    0xf7, 0x80,

    /* U+0070 "p" */
    0xfe, 0x0,

    /* U+0071 "q" */
    0xff, 0x80,

    /* U+0072 "r" */
    0xfe, 0x80,

    /* U+0073 "s" */
    0xef, 0x80,

    /* U+0074 "t" */
    0xe9, 0x0,

    /* U+0075 "u" */
    0xb7, 0x80,

    /* U+0076 "v" */
    0xb5, 0x80,

    /* U+0077 "w" */
    0xbe, 0x80,

    /* U+0078 "x" */
    0xea, 0x80,

    /* U+0079 "y" */
    0xbd, 0x0,

    /* U+007A "z" */
    0xff, 0x80,

    /* U+007C "|" */
    0x98, 0x20, 0x4, 0x6d, 0xf6, 0xef, 0xfe, 0xeb,
    0xf5, 0xb3, 0x55, 0xeb, 0xf0,

    /* U+007E "~" */
    0xf8
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 32, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 64, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 64, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3, .adv_w = 64, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 4, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 7, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 64, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 12, .adv_w = 64, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 13, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 64, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 64, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 36, .adv_w = 72, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 38, .adv_w = 72, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 41, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 97, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 400, .box_w = 25, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 64, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_GB_4 = {
#else
lv_font_t ui_font_GB_4 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 5,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_GB_4*/

