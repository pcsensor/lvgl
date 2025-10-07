#include "lvgl.h"
#include <stdio.h>

// void lv_set_childen(lv_obj_t *obj0) {
//     lv_obj_t *children = lv_obj_create(obj0);
//     lv_obj_set_size(children, 50, 50);
//     lv_obj_set_pos(children, 0, 0);
//     lv_obj_set_style_bg_color(children, lv_color_make(0, 100, 50), 0);

//     lv_obj_t *get_obj0 = lv_obj_get_parent(children);
//     lv_obj_t *get_scr = lv_obj_get_parent(get_obj0);
//     lv_obj_t *get_obj1 = lv_obj_get_child(get_scr, 1);
//     lv_obj_set_style_bg_color(get_obj1, lv_color_make(0, 0, 255), 0);
// }

void event_handler(lv_event_t * e) {
    static int i = 0;
    printf("event_handler %d\n", i++);
}

void lv_example_hello_world(void) {
    // lv_obj_t *obj0 = lv_obj_create(lv_scr_act());
    // lv_obj_set_size(obj0, 50, 50);
    // lv_obj_align(obj0,LV_ALIGN_TOP_LEFT,0,0);
    // lv_obj_set_style_bg_color(obj0, lv_color_make(255, 0, 0), 0);

    // lv_obj_t *obj1 = lv_obj_create(lv_scr_act());
    // lv_obj_set_size(obj1, 50, 50);
    // // lv_obj_align(obj1,LV_ALIGN_TOP_LEFT,50,0);
    // lv_obj_align_to(obj1,obj0,LV_ALIGN_OUT_BOTTOM_MID,0,0);
    // lv_obj_set_style_bg_color(obj1, lv_color_make(0, 255, 0), 0);

    lv_obj_t * obj1 = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj1,100,100);
    lv_obj_set_style_bg_color(obj1,lv_color_make(255, 0, 0),LV_PART_MAIN);
    lv_obj_set_align(obj1, LV_ALIGN_CENTER);
    lv_obj_set_style_pad_all(obj1,0,LV_PART_MAIN);
    lv_obj_set_style_border_width(obj1,0,LV_PART_MAIN);
    lv_obj_set_style_outline_width(obj1,0,LV_PART_MAIN);
    lv_obj_set_style_radius(obj1,0,LV_PART_MAIN);

    lv_obj_add_flag(obj1, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(obj1, event_handler, LV_EVENT_CLICKED, NULL);
}