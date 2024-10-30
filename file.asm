    global _my_asm
    extern _getchar
    section .text
_my_asm:
    push ebp
    mov ebp, esp
    call _getchar
    ; eax = char entered
    pop ebp
    ret