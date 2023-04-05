global    main    ; declare main fxn as global
          extern    printf   ; declare printf fxn

main:      ; entry point
	  mov   edi, output_format   ; move address of the output
	  xor   eax, eax             ; set the value to 0
	  call  printf               ; call printf fxn
	  mov 	eax, 0               ; set the return value
	  ret                        ; return from main fxn

output_format: db `Hello, Holberton\n`,0  ; define output
