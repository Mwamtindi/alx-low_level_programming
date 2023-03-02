#include "main.h"

#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: the pointer to be used.
 * Return: On success str.
 */

char *cap_string(char *str)
{
	char *k = str;
	int c = 1;

	while (*k != '\0')
	{
		if (isspace(*k) || ispunct(*k))
		{
			c = 1;
		}
		else if (c)
		{
			*k = toupper(*k);
			c = 0;
		}
		k++;
	}
	return (str);
}
