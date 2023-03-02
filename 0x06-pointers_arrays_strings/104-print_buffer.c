#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: the pointer to be used.
 * @size: variable content of size bytes.
 */

void print_buffer(char *b, int size)
{
	int aa, cc;

	for (aa = 0; aa < size; aa += 10)
	{
		printf("%08x: ", aa);

		for (cc = 0; cc < 10; cc++)
		{
			if ((cc + aa) >= size)
				printf(" ");

			else
				printf("%02x", *(b + cc + aa));

			if ((cc % 2) != 0 && cc != 0)
			{
				printf(" ");
			}
		}
		for (cc = 0; cc < 10; cc++)
		{
			if ((cc + aa) >= size)
				break;

			else if (*(b + cc + aa) >= 31
				 && *(b + cc + aa) <= 126)
				printf("%c", *(b + cc + aa));
			else
				printf(".");
		}

		if (aa >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
