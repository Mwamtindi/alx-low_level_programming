#include <stdio.h>

#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 */

void print_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
