#include <stdio.h>

#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the first pointer used.
 * @src: the second pointer used.
 * @n: the integer variable used.
 * Return: On success dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
