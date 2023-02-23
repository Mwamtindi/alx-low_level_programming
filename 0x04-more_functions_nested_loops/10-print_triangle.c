#include <stdio.h>

#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle.
 */

void print_triangle(int size)
{
	int b, h;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (b = 1; b <= size; b++)
	{
		for (h = 1; h <= size - b; h++)
			_putchar(' ');

		for (h = 1; h <= b; h++)
			_putchar('#');

		_putchar('\n');
	}
}
