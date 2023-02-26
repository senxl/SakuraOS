[bits 32]

extern kernel_init

global _start
_start:
    mov esp, 0x10000; 修改栈顶
    call kernel_init
    
    jmp $; 阻塞
