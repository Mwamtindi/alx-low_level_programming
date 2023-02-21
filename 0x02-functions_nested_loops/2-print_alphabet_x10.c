#include <stdio.h>

#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char f = 'a';

	int k = 0;

	while (k < 10)
	{
		while (f <= 'z')
		{
			_putchar(f);

			f++;
		}
		f = 'a';

		_putchar('\n');

		k++;
	}
}
