%macro read 2
  mov rax, 0
  mov rdi, 0
  mov rsi, %1
  mov rdx, %2
  syscall
%endmacro
%macro print 2
  mov rax, 1
  mov rdi, 1
  mov rsi, %1
  mov rdx, %2
  syscall
%endmacro

%macro exit 0
  mov rax, 60
  xor rdi, rdi
  syscall
%endmacro

%macro defstrln 2+
  %1 db %2, 10
  %{1}_len equ $ - %1
%endmacro
%macro defstr 2+
  %1 db %2
  %{1}_len equ $ - %1
%endmacro
%macro sleep 1
  push qword 0        
  push qword %1       
  mov rax, 35         
  mov rdi, rsp        
  xor rsi, rsi        
  syscall
  add rsp, 16
%endmacro

