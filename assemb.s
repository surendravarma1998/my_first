	.file	"star.c"
	.section	.rodata
.LC0:
	.string	"\n enter the list of numbers: "
.LC1:
	.string	"%d"
.LC2:
	.string	"\n squares of numbers are: "
.LC3:
	.string	"%d\n"
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
	subl	$52, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	subl	$12, %esp
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	movl	$0, -56(%ebp)
	jmp	.L2
.L3:
	leal	-52(%ebp), %eax
	movl	-56(%ebp), %edx
	sall	$2, %edx
	addl	%edx, %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC1
	call	__isoc99_scanf
	addl	$16, %esp
	addl	$1, -56(%ebp)
.L2:
	cmpl	$4, -56(%ebp)
	jle	.L3
	movl	$0, -56(%ebp)
	jmp	.L4
.L5:
	movl	-56(%ebp), %eax
	movl	-52(%ebp,%eax,4), %edx
	movl	-56(%ebp), %eax
	movl	-52(%ebp,%eax,4), %eax
	imull	%eax, %edx
	movl	-56(%ebp), %eax
	movl	%edx, -32(%ebp,%eax,4)
	addl	$1, -56(%ebp)
.L4:
	cmpl	$4, -56(%ebp)
	jle	.L5
	subl	$12, %esp
	pushl	$.LC2
	call	printf
	addl	$16, %esp
	movl	$0, -56(%ebp)
	jmp	.L6
.L7:
	movl	-56(%ebp), %eax
	movl	-32(%ebp,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC3
	call	printf
	addl	$16, %esp
	addl	$1, -56(%ebp)
.L6:
	cmpl	$4, -56(%ebp)
	jle	.L7
	movl	$0, %eax
	movl	-12(%ebp), %ecx
	xorl	%gs:20, %ecx
	je	.L9
	call	__stack_chk_fail
.L9:
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
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
