#include "main.h"

#include <string.h>

#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the pointer to be used.
 * Return: On success str.
 */

char *string_toupper(char *str)
{
	int s = strlen(str);
	int d;

	for (d = 0; d < s; d++)
	{
		if (islower(str[d]))
		{
			str[d] = toupper(str[d]);
		}
	}
	return (str);
}
