#include "ui_bottlee_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_bottlee_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Fonts
     *----------------*/

    /*----------------
     * Images
     *----------------*/
    /*----------------
     * Subjects
     *----------------*/
    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */

    /* Register subjects */

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manually from XML using lv_xml_create() */
    
    /* Manual screen creation for non-XML mode */
    lv_obj_t * screen = lv_obj_create(NULL);
    lv_obj_set_style_bg_color(screen, lv_color_hex(0x1A2530), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(screen, 255, LV_PART_MAIN);

    lv_obj_t * label_welcome = lv_label_create(screen);
    lv_label_set_text(label_welcome, "Hola");
    lv_obj_align(label_welcome, LV_ALIGN_CENTER, 0, -40);
    lv_obj_set_style_text_color(label_welcome, lv_color_hex(0xBDC3C7), LV_PART_MAIN);
    lv_obj_set_style_text_font(label_welcome, &lv_font_montserrat_24, LV_PART_MAIN);

    lv_obj_t * label_brand = lv_label_create(screen);
    lv_label_set_text(label_brand, "Bottlee!");
    lv_obj_align(label_brand, LV_ALIGN_CENTER, 0, 10);
    lv_obj_set_style_text_color(label_brand, lv_color_hex(0x3498DB), LV_PART_MAIN);
    lv_obj_set_style_text_font(label_brand, &lv_font_montserrat_48, LV_PART_MAIN);

    lv_obj_t * decor = lv_obj_create(screen);
    lv_obj_set_size(decor, 200, 4);
    lv_obj_align(decor, LV_ALIGN_CENTER, 0, 50);
    lv_obj_set_style_bg_color(decor, lv_color_hex(0x3498DB), LV_PART_MAIN);
    lv_obj_set_style_radius(decor, 2, LV_PART_MAIN);
    lv_obj_set_style_border_width(decor, 0, LV_PART_MAIN);

    lv_scr_load(screen);
#endif
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/
