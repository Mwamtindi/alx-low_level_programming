#include <stdio.h>

#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the first variable used.
 * @src: the second variable.
 * Return: On success dest.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
