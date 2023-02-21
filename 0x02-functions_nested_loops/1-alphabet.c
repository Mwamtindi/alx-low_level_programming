#include <stdio.h>

#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
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
