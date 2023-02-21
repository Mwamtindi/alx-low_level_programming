#include <stdio.h>

#include "main.h"

/**
 * print_last_digit - prints last digit of a number.
 * @s: the number to be checked.
 * Return: On success ld the last digit of the number.
 */

int print_last_digit(int s)
{
	int ld = s % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar('0' + ld);

	return (ld);

}
