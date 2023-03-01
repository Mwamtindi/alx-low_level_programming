#include <stdio.h>

#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first pointer used.
 * @s2: the second pointer to be used.
 * Return: On success s1[z] - s2[z].
 */

int _strcmp(char *s1, char *s2)
{
	int z = 0;

	while (s1[z] == s2[z] && s1[z] != '\0')
	{
		z++;
	}
	return (s1[z] - s2[z]);
}
