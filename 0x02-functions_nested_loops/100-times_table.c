#include <stdio.h>

#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number in the range.
 */

void print_times_table(int n)
{
	int z, x, c;

	if (n < 0 || n > 15)
		return;
	for (z = 0; z <= n; z++)
	{
		for (x = 0; x <= n; x++)
		{
			c = z * x;
			if (x == 0)
			{
				_putchar('0');
			}
			else if (c < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c < 100)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10) % 10 + '0');
				_putchar(c % 10 + '0');
			}
			if (x != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
