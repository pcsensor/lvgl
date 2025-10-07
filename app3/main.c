#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "lvgl.h"
#include "page_test.h"

extern void lv_port_disp_init(bool is_disp_orientation);
extern void lv_port_indev_init(void);

int main() {
    //LVGL框架初始化
    lv_init();
    //LVGL显示屏幕初始化
    lv_port_disp_init(true);
    //LVGL输入设备初始化
    lv_port_indev_init();

    lv_example_hello_world();

    while (1) {
        lv_task_handler();
        //延时，保证cpu占有率不会过高
        usleep(1000);
    }
    return 0;
}