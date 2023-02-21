#include <stdio.h>

#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */


void times_table(void)
{
	int p, q, e;

	for (p = 0; p <= 9; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			e = p * q;

			if (q == 0)
			{
				_putchar('0');
			}
			else if (e < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
