section .data
	msg db "Hello, World", 10      ; 10 is the ASCII code for a new line (LF)

section .text
global main
main:
	mov rax, 1		; write(
	mov rdi, 1		; sTDOUT
	mov rsi, msg		; "Hello, World\n"
	mov rdx, 13		; sizeof(msg)
	syscall			; )

	mov rax, 60		; exit(
	mov rdi, 0		; EXIT_SUCCESS 
	syscall			; )

