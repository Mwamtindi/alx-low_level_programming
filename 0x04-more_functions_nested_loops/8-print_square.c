#include <stdio.h>

#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square.
 */

void print_square(int size)
{
	int r, t;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 0; r < size; r++)
	{
		for (t = 0; t < size; t++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
