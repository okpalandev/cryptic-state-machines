section .text
global _start

_start:
    ; Cryptic state machine: Transitioning from IDLE to HUNGRY
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, message
    mov edx, 0xD
    int 0x80

    ; Cryptic state machine: Transitioning from HUNGRY to IDLE or FULL
    mov eax, 0x1
    mov ebx, 0x5
    int 0x80

section .data
message: db "Hello World!", 0xA
