#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number to be checked.
 * Return: 0 if n is equal to 0 else return sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int e;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (e = 0; e < n; e++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
