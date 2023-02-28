#include <stdio.h>

#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: the variable used.
 */

void puts2(char *str)
{
	int m = 0;
	int n = 0;
	char *v = str;
	int b;

	while (*v != '\0')
	{
		v++;
		m++;
	}
	n = m - 1;
	for (b = 0; b <= n; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
