#ifndef _RES_CONF_H_
#define _RES_CONF_H_

#ifdef SIMULATOR_LINUX
    #define FONT_PATH "./build/app3/res/font/"
    #define IMAGE_PATH "./build/app3/res/image/"
#else
    #define FONT_PATH "/usr/res/font/"
    #define IMAGE_PATH "/usr/res/image/"
#endif

#endif