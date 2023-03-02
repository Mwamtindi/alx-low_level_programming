#include <stdio.h>

#include <ctype.h>

/**
 * print_buffer - prints a buffer.
 * @b: the pointer to be used.
 * @size: variable content of size bytes.
 */

void print_buffer(char *b, int size)
{
	int aa, bb, lc;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	lc = (size - 1) / 10 + 1;
	for (aa = 0; aa < lc; aa++)
	{
		printf("%08x: ", aa * 10);
		for (bb = 0; bb < 10; bb++)
		{
			if (aa * 10 + bb < size)
			{
				printf("%02x", b[aa * 10 + bb]);
			}
			else
			{
				printf("  ");
			}
			if (bb % 2 == 1)
			{
				printf(" ");
			}
		}
		for (bb = 0; bb < 10; bb++)
		{
			if (aa * 10 + bb < size)
			{
				printf("%c", isprint(b[aa * 10 + bb]) ? b[aa * 10 + bb] : '.');
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
