#include <stdio.h>

#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: first pointer to be used.
 * @src: the second pointer used.
 * @n: the integer variable used.
 * Return: On success dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
