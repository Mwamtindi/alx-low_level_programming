#include <stdio.h>

#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: the variable used.
 */

void puts2(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y += 2)
	{
		if (str[y] >= 32 && str[y] <= 126)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
