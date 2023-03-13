[bits 32]

; 代码段
section .text  

global inb
inb:
    ; 栈帧保存
    push ebp
    mov ebp, esp

    ; eax清空
    xor eax, eax
    mov edx, [ebp + 8]
    in al, dx ; 输入

    nop
    nop
    nop

    ; 恢复栈帧
    leave
    ret

global outb
outb:
    ; 栈帧保存
    push ebp
    mov ebp, esp

    mov edx, [ebp + 8]  ; port
    mov eax, [ebp + 12] ; value
    out dx, al  ; 输入

    nop
    nop
    nop

    ; 恢复栈帧
    leave
    ret

global inw
inw:
    ; 栈帧保存
    push ebp
    mov ebp, esp

    ; eax清空
    xor eax, eax
    mov edx, [ebp + 8]
    in ax, dx ; 输入

    nop
    nop
    nop

    ; 恢复栈帧
    leave
    ret

global outw
outw:
    ; 栈帧保存
    push ebp
    mov ebp, esp

    mov edx, [ebp + 8]  ; port
    mov eax, [ebp + 12] ; value
    out dx, ax  ; 输入

    nop
    nop
    nop

    ; 恢复栈帧
    leave
    ret