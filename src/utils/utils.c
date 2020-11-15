//
// Created by raphael on 2020/11/15.
//

#include "utils.h"

int println(const char *fmt, ...)
{
    char printf_buf[PRINTF_BUFF];
    va_list args;
    int printed;
    va_start(args, fmt);
    printed = vsprintf(printf_buf, fmt, args);
    va_end(args);
    puts(printf_buf);
    return printed;
}