#include <stdio.h>

#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
