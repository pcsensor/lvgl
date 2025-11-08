#include <stdio.h>
#include "image_conf.h"
#include "lv_anim.h"
#include "lv_area.h"
#include "lv_bar.h"
#include "lv_color.h"
#include "lv_event.h"
#include "lv_img.h"
#include "lv_label.h"
#include "lv_obj.h"
#include "lv_obj_pos.h"
#include "lv_obj_tree.h"
#include "lv_slider.h"
#include "lv_timer.h"
#include "lvgl.h"
#include "page_conf.h"

static void event_cb(lv_event_t *e) {
    lv_obj_t *obj = lv_event_get_current_target(e);
    // printf("Button %s clicked\n", lv_msgbox_get_active_btn_text(obj));
    // lv_msgbox_close(obj);
    init_dialog();
}

void init_page(void) {
    static const char *btns[] = {"Apply", "Close", ""};

    lv_obj_t *mbox1 = lv_msgbox_create(NULL, "Hello", "This is a message box", btns, false);
    lv_obj_add_event_cb(mbox1, event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_center(mbox1);
}
