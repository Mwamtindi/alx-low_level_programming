global    _start
          extern    printf
_start:
	  mov   edi, output_format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
output_format: db `Hello, Holberton\n`,0
