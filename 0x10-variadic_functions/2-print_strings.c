#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the fxn
 * Return: Nothing!.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int e;
	char *strg;

	va_start(args, n);
	for (e = 0; e < n; e++)
	{
		strg = va_arg(args, char *);

		if (strg == NULL)
			printf("(nil)");

		else
			printf("%s", strg);
		if (e != n - 1 && separator != NULL)

			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
