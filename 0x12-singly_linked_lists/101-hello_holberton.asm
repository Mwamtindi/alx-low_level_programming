#include <stdio.h>
a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

global    main
          extern    printf
main:
	  mov   edi, output_format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
output_format: db "Hello, Holberton\n",0
