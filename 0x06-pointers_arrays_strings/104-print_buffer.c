#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: the pointer to be used.
 * @size: variable content of size bytes.
 */

void print_buffer(char *b, int size)
{
	int y, t, r;

	y = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (y < size)
	{
		t = size - y < 10 ? size - y : 10;
		printf("%08x: ", y);
		for (r = 0; r < 10; r++)
		{
			if (r < t)
				printf("%02x", *(b + y + r));
			else
				printf("  ");
			if (r % 2)
			{
				printf(" ");
			}
		}
		for (r = 0; r < t; r++)
		{
			int c = *(b + y + r);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		y += 10;
	}
}

