#ifndef _RES_CONF_H_
#define _RES_CONF_H_

#ifdef SIMULATOR_LINUX
    #define FONT_PATH "./build/app3/res/font/"
#else
    #define FONT_PATH "/usr/res/font/"
#endif

#endif