#include <stdio.h>
#include "lvgl.h"
#include "page_conf.h"

static void btn_click_event_cb_func(lv_event_t *e) {
    printf("page1 btn click\n");
    // 获取活动屏幕对象
    lv_obj_t *act_scr = lv_scr_act();
    // 调用lv_obj_clean清掉lv_scr_act下所有子对象
    lv_obj_clean(act_scr);
    init_page2();
}

void init_page1() {
    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_obj_center(label);
    lv_label_set_text(label, "page 1");

    lv_obj_t *btn = lv_btn_create(lv_scr_act());
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, btn_click_event_cb_func, LV_EVENT_CLICKED, NULL);

    lv_obj_t *btn_label = lv_label_create(btn);
    lv_label_set_text(btn_label, "Open page2");
    lv_obj_center(btn_label);

    lv_obj_align_to(btn, label, LV_ALIGN_OUT_BOTTOM_MID, 0, 20);
}
