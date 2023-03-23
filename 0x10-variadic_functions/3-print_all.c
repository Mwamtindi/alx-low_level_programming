#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: Nothing!.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int e = 0;
	char *str, c;
	int num;
	float fnum;

	va_start(args, format);
	while (format && format[e])
	{
		switch (format[e])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				fnum = va_arg(args, double);
				printf("%f", fnum);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		if (format[e + 1] && (format[e] == 'c' || format[e] == 'i' ||
					format[e] == 'f' || format[e] == 's'))
			printf(", ");
		e++;
	}
	va_end(args);
	printf("\n");
}
