.arch armv8 -a

.global mod
.align 2
.text

mod:
   sdiv x2, x0, x1 // (x/y)
   mul x2, x2, x1 // (x/y) y
   sub x0, x0, x2 // - x
   ret
