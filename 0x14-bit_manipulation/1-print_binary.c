#include <stdio.h>
#include "main.h"

/**
 * print_binary - fxn that prints the binary rep of a number
 * @n: number of unsigned long integer type to be used
 * Return: Nothing!.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)

		print_binary(n >> 1); /* shift n to the right by 1 position */

	_putchar((n & 1) + '0'); /* print binary digit (1 or 0) */
}
