	.file	"stackk.c"
	.comm	stack,400,32
	.comm	choice,4,4
	.comm	n,4,4
	.comm	top,4,4
	.comm	x,4,4
	.comm	i,4,4
	.section	.rodata
	.align 4
.LC0:
	.string	"\n Enter the size of STACK[MAX=100]:"
.LC1:
	.string	"%d"
	.align 4
.LC2:
	.string	"\n\t STACK OPERATIONS USING ARRAY"
	.align 4
.LC3:
	.string	"\n\t--------------------------------"
	.align 4
.LC4:
	.string	"\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT"
.LC5:
	.string	"\n Enter the Choice:"
.LC6:
	.string	"\n\t EXIT POINT "
	.align 4
.LC7:
	.string	"\n\t Please Enter a Valid Choice(1/2/3/4)"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$4, %esp
	movl	$-1, top
	subl	$12, %esp
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	pushl	$n
	pushl	$.LC1
	call	__isoc99_scanf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC2
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC3
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC4
	call	printf
	addl	$16, %esp
.L9:
	subl	$12, %esp
	pushl	$.LC5
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	pushl	$choice
	pushl	$.LC1
	call	__isoc99_scanf
	addl	$16, %esp
	movl	choice, %eax
	cmpl	$2, %eax
	je	.L3
	cmpl	$2, %eax
	jg	.L4
	cmpl	$1, %eax
	je	.L5
	jmp	.L2
.L4:
	cmpl	$3, %eax
	je	.L6
	cmpl	$4, %eax
	je	.L7
	jmp	.L2
.L5:
	call	push
	jmp	.L8
.L3:
	call	pop
	jmp	.L8
.L6:
	call	display
	jmp	.L8
.L7:
	subl	$12, %esp
	pushl	$.LC6
	call	printf
	addl	$16, %esp
	jmp	.L8
.L2:
	subl	$12, %esp
	pushl	$.LC7
	call	printf
	addl	$16, %esp
	nop
.L8:
	movl	choice, %eax
	cmpl	$4, %eax
	jne	.L9
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC8:
	.string	"\n\tSTACK is over flow"
.LC9:
	.string	" Enter a value to be pushed:"
	.text
	.globl	push
	.type	push, @function
push:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	n, %eax
	leal	-1(%eax), %edx
	movl	top, %eax
	cmpl	%eax, %edx
	jg	.L12
	subl	$12, %esp
	pushl	$.LC8
	call	printf
	addl	$16, %esp
	jmp	.L14
.L12:
	subl	$12, %esp
	pushl	$.LC9
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	pushl	$x
	pushl	$.LC1
	call	__isoc99_scanf
	addl	$16, %esp
	movl	top, %eax
	addl	$1, %eax
	movl	%eax, top
	movl	top, %eax
	movl	x, %edx
	movl	%edx, stack(,%eax,4)
.L14:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	push, .-push
	.section	.rodata
.LC10:
	.string	"\n\t Stack is under flow"
.LC11:
	.string	"\n\t The popped elements is %d"
	.text
	.globl	pop
	.type	pop, @function
pop:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	top, %eax
	testl	%eax, %eax
	jns	.L16
	subl	$12, %esp
	pushl	$.LC10
	call	printf
	addl	$16, %esp
	jmp	.L18
.L16:
	movl	top, %eax
	movl	stack(,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC11
	call	printf
	addl	$16, %esp
	movl	top, %eax
	subl	$1, %eax
	movl	%eax, top
.L18:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	pop, .-pop
	.section	.rodata
.LC12:
	.string	"\n The elements in STACK "
.LC13:
	.string	"\n%d"
.LC14:
	.string	"\n Press Next Choice"
.LC15:
	.string	"\n The STACK is empty"
	.text
	.globl	display
	.type	display, @function
display:
.LFB3:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	top, %eax
	testl	%eax, %eax
	js	.L20
	subl	$12, %esp
	pushl	$.LC12
	call	puts
	addl	$16, %esp
	movl	top, %eax
	movl	%eax, i
	jmp	.L21
.L22:
	movl	i, %eax
	movl	stack(,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC13
	call	printf
	addl	$16, %esp
	movl	i, %eax
	subl	$1, %eax
	movl	%eax, i
.L21:
	movl	i, %eax
	testl	%eax, %eax
	jns	.L22
	subl	$12, %esp
	pushl	$.LC14
	call	printf
	addl	$16, %esp
	jmp	.L24
.L20:
	subl	$12, %esp
	pushl	$.LC15
	call	printf
	addl	$16, %esp
.L24:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	display, .-display
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
