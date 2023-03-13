#ifndef SAKURA_CONSOLE_H
#define SAKURA_CONSOLE_H

#include <sakura/types.h>

void console_init();
void console_clear();
void console_write(char *buf, uint32 count);

#endif