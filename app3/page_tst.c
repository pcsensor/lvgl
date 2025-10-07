#include "lvgl.h"
#include <stdio.h>

void lv_example_hello_world(void) {
    static lv_style_t comstyle;
    lv_style_init(&comstyle);
    lv_style_set_bg_color(&comstyle,lv_color_make(255, 0, 0));
    lv_style_set_pad_all(&comstyle,0);
    lv_style_set_border_width(&comstyle,0);
    lv_style_set_outline_width(&comstyle,0);

    static lv_style_t comstyle2;
    lv_style_init(&comstyle2);
    lv_style_set_bg_color(&comstyle2,lv_color_make(0, 25, 0));


    lv_obj_t * obj1 = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj1,50,50);
    lv_obj_set_align(obj1,LV_ALIGN_TOP_MID);
    lv_obj_add_style(obj1, &comstyle, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj1, &comstyle2, LV_PART_MAIN | LV_STATE_PRESSED);


    lv_obj_t * obj2 = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj2,50,50);
    lv_obj_align_to(obj2, obj1, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);
    lv_obj_add_style(obj2, &comstyle, LV_PART_MAIN);
}