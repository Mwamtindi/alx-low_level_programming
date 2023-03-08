#include <stdio.h>

#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: variable n of integer type
 * Return: -1 if n is less than 0 or 1 if n is equal to 0
 * Otherwise n * factorial(n - 1) is returned.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
