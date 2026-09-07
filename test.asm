%include "snasm.inc"

BUFFER_SIZE equ 64

section .bss
    buffer resb BUFFER_SIZE

section .data
    defstrln hello, {"Hello, World!"}

    defstrln msg, {"HOLY SRIMP! IT ACTUALLY WORKS!"}

    defstr prompt, {"Enter your name: "}

    defstr reply, {"Hello, "}
section .text
    global _start

_start:
    print hello, hello_len
    sleep 1
    print msg, msg_len
    sleep 1
    print prompt, prompt_len
    read buffer, BUFFER_SIZE
    mov rbx, rax
    print reply, reply_len
    print buffer, rbx
    exit