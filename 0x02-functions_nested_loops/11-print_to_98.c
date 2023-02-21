#include <stdio.h>

#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: the number to be checked from.
 */

void print_to_98(int n)
{
	int y;

	if (n <= 98)
	{
		for (y = n; y <= 98; y++)
		{
			printf("%d", y);
			if (y != 98)
				printf(",");
		}
	}
	else
	{
		for (y = n; y >= 98; y--)
		{
			printf("%d", y);
			if (y != 98)
				printf(",");
		}
	}
	printf("\n");
}
