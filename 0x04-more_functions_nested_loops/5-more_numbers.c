#include <stdio.h>

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 t0 14.
 */

void more_numbers(void)
{
	int s, k;

	for (k = 0; k < 10; k++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s >= 10)
			{
				_putchar(s / 10 + '0');
			}
			_putchar(s % 10 + '0');
			if (s == 14)
			{
				_putchar('\n');
			}
		}
	}
}
