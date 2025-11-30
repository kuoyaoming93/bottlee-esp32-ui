#include "ui_bottlee_gen.h"

/* Manual implementation of the screen creation to match the XML definition */
/* This mimics what the LVGL Pro generator would output or what the runtime would load */

static void ui_create_screen_main(void)
{
    lv_obj_t * screen = lv_obj_create(NULL);
    lv_obj_set_style_bg_color(screen, lv_color_hex(0x1A2530), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(screen, 255, LV_PART_MAIN);

    /* Welcome Label */
    lv_obj_t * label_welcome = lv_label_create(screen);
    lv_label_set_text(label_welcome, "Hola");
    lv_obj_align(label_welcome, LV_ALIGN_CENTER, 0, -40);
    lv_obj_set_style_text_color(label_welcome, lv_color_hex(0xBDC3C7), LV_PART_MAIN);
    lv_obj_set_style_text_font(label_welcome, &lv_font_montserrat_24, LV_PART_MAIN);

    /* Brand Label */
    lv_obj_t * label_brand = lv_label_create(screen);
    lv_label_set_text(label_brand, "Bottlee!");
    lv_obj_align(label_brand, LV_ALIGN_CENTER, 0, 10);
    lv_obj_set_style_text_color(label_brand, lv_color_hex(0x3498DB), LV_PART_MAIN);
    lv_obj_set_style_text_font(label_brand, &lv_font_montserrat_48, LV_PART_MAIN);

    /* Decor Line */
    lv_obj_t * decor = lv_obj_create(screen);
    lv_obj_set_size(decor, 200, 4);
    lv_obj_align(decor, LV_ALIGN_CENTER, 0, 50);
    lv_obj_set_style_bg_color(decor, lv_color_hex(0x3498DB), LV_PART_MAIN);
    lv_obj_set_style_radius(decor, 2, LV_PART_MAIN);
    lv_obj_set_style_border_width(decor, 0, LV_PART_MAIN);

    lv_scr_load(screen);
}

void ui_bottlee_init_gen(const char * asset_path)
{
    /* In a real LVGL Pro environment, this might load XML or use generated code */
    /* For now, we manually create the screen defined in screen_main.xml */
    ui_create_screen_main();
}
