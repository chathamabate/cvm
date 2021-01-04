# CVM

__CVM__ is a simple virtual machine written in C.

## Primitive Data Types
* __char__ : an unsigned byte.
* __int__ : a signed 4 byte integer.
* __long__ : a signed 8 byte integer.
* __float__ : a 4 byte single-precision floating-point number.
* __double__ : an 8 byte double-precision floating-point number.
* __address__ : a unsigned 4 byte integer representing an address in memory.

## Memory
A process running on the __CVM__ can be allocated any number of bytes 
between $2^{24}$ and $2^{32}$ which is a power of 2. The default being $2^{28}$ bytes.

Below is the memory space of a process running on the __CVM__. 
This process has been allocated the maximum number of bytes ($2^{32}$ bytes or ~4 GB).

![Memory Image](static/mem.png)

Regardless of the size of the memory space, the proportions of each section remain the same.
The Program Text and Data section occupies the bottom quarter of the space and is Read-Only.
The next quarter is occupied by the Stack. Any address below the stack pointer can be 
read from and written to. 
All addresses in the Stack section which are above the stack pointer cannot be accessed.
The remaining half of the memory is saved for dynamic usage. 
Any address in the Free Memory section can be written to and read from at any time.

## Instruction Set

The __CVM__ reads 1 byte opcodes.

### Character Opcodes
* __cadd__ 
* __csub__
* __cmul__
* __cdiv__
* __cmod__
* __cneg__
* __ccmp__
* __ctoi__
* __ctol__
* __ctof__
* __ctod__

### Integer Opcodes
* __iadd__
* __isub__
* __imul__
* __idiv__
* __imod__
* __ineg__
* __icmp__
* __itoc__
* __itol__
* __itof__
* __itod__

### Long Opcodes
* __ladd__
* __lsub__
* __lmul__
* __ldiv__
* __lmod__
* __lneg__
* __lcmp__
* __ltoc__
* __ltoi__
* __ltof__
* __ltod__

### Float Opcodes
* __fadd__
* __fsub__
* __fmul__
* __fdiv__
* __fneg__
* __fcmp__
* __ftoc__
* __ftoi__
* __ftol__
* __ftod__

### Double Opcodes
* __dadd__
* __dsub__
* __dmul__
* __ddiv__
* __dneg__
* __dcmp__
* __dtoc__
* __dtoi__
* __dtol__
* __dtof__





