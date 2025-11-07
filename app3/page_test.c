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
#include <stdio.h>

static lv_obj_t *page1;
static lv_obj_t *page2;

void page1_event_cb(lv_event_t * e)
{
    lv_scr_load(page2);
    // lv_scr_load_anim(page2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, false);  // 带左滑动画
}

void page2_event_cb(lv_event_t * e)
{
    lv_scr_load(page1);
    // lv_scr_load_anim(page1, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 300, 0, false);  // 带右滑动画
}

void init_page(void)
{
    // 创建屏幕
    page1 = lv_obj_create(NULL);  // 屏幕1
    // 在屏幕1上添加内容（例如一个按钮）
    lv_obj_t *btn = lv_btn_create(page1);
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_t *label = lv_label_create(btn);
    lv_label_set_text(label, "Go to page2");
    // 点击按钮切换到屏幕2
    lv_obj_add_event_cb(btn, page1_event_cb, LV_EVENT_CLICKED, NULL);

    page2 = lv_obj_create(NULL);  // 屏幕2
    // 在屏幕2上添加返回按钮
    lv_obj_t *back_btn = lv_btn_create(page2);
    lv_obj_align(back_btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_t *back_label = lv_label_create(back_btn);
    lv_label_set_text(back_label, "Back to page1");
    // 点击返回按钮
    lv_obj_add_event_cb(back_btn, page2_event_cb, LV_EVENT_CLICKED, NULL);

    // lv_scr_load(page1);
}