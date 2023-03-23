#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int e = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[e])
		{
			switch (format[e])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					e++;
					continue;
			}
			sep = ", ";
			e++;
		}
	}
	printf("\n");
	va_end(list);
}
