#include <stdio.h>

#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the pointer to be used.
 * Return: On success str.
 */

char *leet(char *str)
{
	char *j = str;
	char *c = "aAeEoOtTlL";
	char *s = "4433007711";
	int h;

	while (*j != '\0')
	{
		h = 0;
		while (c[h] != '\0')
		{
			if (*j == c[h])
			{
				*j = s[h];
				break;
			}
			h++;
		}
		j++;
	}
	return (str);
}
