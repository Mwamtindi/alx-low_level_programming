#include <stdio.h>

#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: the variable used.
 */

void puts2(char *str)
{
	int long1 = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		long1++;
	}
	t = long1 - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
