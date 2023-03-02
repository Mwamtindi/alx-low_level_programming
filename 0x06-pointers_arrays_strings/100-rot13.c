#include <stdio.h>

#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: the pointer to be used.
 * Return: On success str.
 */

char *rot13(char *str)
{
	int y;
	int g;
	char dat[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (y = 0; str[y] != '\0'; y++)
	{
		for (g = 0; g < 52; g++)
		{
			if (str[y] == dat[g])
			{
				str[y] = rot[g];
				break;
			}
		}
	}
	return (str);
}
