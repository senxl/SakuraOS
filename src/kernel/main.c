#include <sakura/os.h>

int magic = OS_MAGIC;
char message[] = "Hello os kernel";// .data
char buf[1024];                     // .bss

void kernel_init()
{
    char *video = (char *)0xb8000;
    for (int i = 0; i < sizeof(message); i++)
    {
        video[i*2] = message[i];
    }
    
}