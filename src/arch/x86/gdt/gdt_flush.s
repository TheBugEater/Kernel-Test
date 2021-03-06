.section .text
.align 4

.global gdt_flush
.type gdt_flush, @function

gdt_flush:
    /* Load GDT */
    mov 4(%esp), %eax
    lgdt (%eax)

	/* 0x10 is the offset in the GDT to our kernel data segment */
    mov $0x10, %ax
    mov %ax, %ds
    mov %ax, %es
    mov %ax, %fs
    mov %ax, %ss

	/* Jump to segment selector 0x08, where the Kernel Code Segment is: */
    ljmp $0x08, $.flush
.flush:
    ret
