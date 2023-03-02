#ifndef SAKURA_IO_H
#define SAKURA_IO_H

#include <sakura/types.h>

extern uint8 inb(uint16 port);  //输入1个字节
extern uint16 inw(uint16 port); //输入1个字

extern void outb(uint16 port, uint8 value);     //输出1个字节 
extern void outw(uint16 port, uint16 value);    //输出1个字

#endif