global    main
          extern    printf
main:
	  mov   edi, output_format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
output_format: db `Hello, Holberton\n`,0
