; File: 101-hello_holberton.asm
; Desc: File contains a a 64-bit program in assembly that prints
; Hello, Holberton, followed by a new line.

	global	main
	extern	printf
main:
	mov	edi, format
	xor   eax, eax
	call	printf
	mov	eax, 0
	ret
format: db 'Hello, Holberton',0
