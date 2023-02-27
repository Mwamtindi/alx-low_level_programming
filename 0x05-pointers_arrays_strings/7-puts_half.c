#include <stdio.h>

#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: the variable used.
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (n = len / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (len - 1) / 2 + 1; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
