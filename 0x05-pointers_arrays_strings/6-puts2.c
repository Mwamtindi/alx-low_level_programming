#include <stdio.h>

#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: the variable used.
 */

void puts2(char *str)
{
	char y = 0;

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y = y + 2;
	}

	_putchar('\n');
}
