global    main
          extern    printf
main:
	  mov   ebx, format
	  xor   ecx, ecx
	  call  printf
	  mov 	ecx, 0
	  ret
format: db `Hello, Holberton\n`,0
