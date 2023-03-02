#include "main.h"

#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: the pointer to be used.
 * Return: On success str.
 */

char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'z'))
			x++;
		if (str[x - 1] == ' ' ||
				str[x - 1] == '\t' ||
				str[x - 1] == '\n' ||
				str[x - 1] == ',' ||
				str[x - 1] == ';' ||
				str[x - 1] == '.' ||
				str[x - 1] == '!' ||
				str[x - 1] == '?' ||
				str[x - 1] == '"' ||
				str[x - 1] == '(' ||
				str[x - 1] == ')' ||
				str[x - 1] == '{' ||
				str[x - 1] == '}' ||
				x == 0)
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}
