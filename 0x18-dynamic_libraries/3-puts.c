#include <stdio.h>

#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: variable used.
 */

void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}
