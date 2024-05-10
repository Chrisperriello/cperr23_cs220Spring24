
.arch armv8 -a

.global modall
.align 2
.text

modall:
  sub sp, sp, #64
  str fp, [sp, #0]
  str lr, [sp, #8]
  str x19, [sp, #16]
  str x20, [sp, #24]
  str x21, [sp, #32]
  str x22, [sp, #40]
  str x23, [sp, #48]
  mov x19, x0
  mov x20, x1
  mov x21, x2
  mov x22, #0

while:
  cmp x21, x22
  ble end
  lsl x5, x22, #3
  add x23, x5, x19
  ldr x4, [x23, #0]
  mov x0, x4
  bl mod
  str x0, [x23, #0]
  add x22, x22, #1
  b while

end:
  ldr fp, [sp, #0]
  ldr lr, [sp, #8]
  ldr x19, [sp, #16]
  ldr x20, [sp, #24]
  ldr x21, [sp, #32]
  ldr x22, [sp, #40]
  ldr x23, [sp, #48]
  add sp, sp, #64
  ret
