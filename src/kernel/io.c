#include <sakura/io.h>
#include <sakura/types.h>

uint8 inb(uint16 port)
{
    uint8 data;
    asm volatile ("inb %1, %0" : "=a" (data) : "d" (port));
    return data;
}
uint16 inw(uint16 port)
{
    uint16 data;
    asm volatile ("inw %1, %0" : "=a" (data) : "d" (port));
    return data;
}
void outb(uint16 port, uint8 value)
{
    asm volatile ("outb %1, %0" : : "d" (port), "a" (value));
}
void outw(uint16 port, uint16 value)
{
    asm volatile ("outw %1, %0" : : "d" (port), "a" (value));
}
