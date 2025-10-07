#include "lvgl.h"

void lv_example_hello_world(void) {
    lv_obj_t *obj = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj, 300, 300);
}