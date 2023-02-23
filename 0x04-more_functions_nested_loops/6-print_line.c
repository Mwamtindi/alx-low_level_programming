#include <stdio.h>

#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed.
 */

void print_line(int n)
{
	int w;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (w = 0; w < n; w++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
