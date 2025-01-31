// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_pomodoro1_screen_init(void)
{
    ui_pomodoro1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_pomodoro1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_pomodoro1, lv_color_hex(0x8BAC0F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pomodoro1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pomodoro1, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_batterypercent4 = lv_label_create(ui_pomodoro1);
    lv_obj_set_width(ui_batterypercent4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_batterypercent4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_batterypercent4, 59);
    lv_obj_set_y(ui_batterypercent4, -32);
    lv_obj_set_align(ui_batterypercent4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_batterypercent4, "100");
    lv_obj_set_style_text_font(ui_batterypercent4, &ui_font_GB_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_min2 = lv_label_create(ui_pomodoro1);
    lv_obj_set_width(ui_min2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_min2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_min2, -20);
    lv_obj_set_y(ui_min2, -3);
    lv_obj_set_align(ui_min2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_min2, "31");
    lv_obj_set_style_text_font(ui_min2, &ui_font_GB_17, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_second2 = lv_label_create(ui_pomodoro1);
    lv_obj_set_width(ui_second2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_second2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_second2, 23);
    lv_obj_set_y(ui_second2, -3);
    lv_obj_set_align(ui_second2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_second2, "25");
    lv_obj_set_style_text_font(ui_second2, &ui_font_GB_17, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image7 = lv_img_create(ui_pomodoro1);
    lv_img_set_src(ui_Image7, &ui_img_tile009_png);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);   /// 16
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_Image7, 69);
    lv_obj_set_y(ui_Image7, 29);
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image8 = lv_img_create(ui_pomodoro1);
    lv_img_set_src(ui_Image8, &ui_img_tile009_png);
    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);   /// 16
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_Image8, -69);
    lv_obj_set_y(ui_Image8, 29);
    lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label12 = lv_label_create(ui_pomodoro1);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, -4);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, ":");
    lv_obj_set_style_text_font(ui_Label12, &ui_font_GB_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_pomodoro1);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, 76);
    lv_obj_set_y(ui_Label13, -32);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "[");
    lv_obj_set_style_text_font(ui_Label13, &ui_font_GB_8, LV_PART_MAIN | LV_STATE_DEFAULT);

}
