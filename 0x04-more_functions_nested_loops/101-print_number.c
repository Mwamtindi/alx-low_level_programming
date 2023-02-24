# include <stdio.h>

#include "main.h"

/**
 * print_number - prints an integer.
 * @n: number to be checked.
 */

void print_number(int n)
{
	unsigned int f = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		f = n;
	}

	f /= 10;
	if (f != 0)
	{
		print_number(f);
	}

	_putchar((unsigned int) n % 10 + '0');
}
