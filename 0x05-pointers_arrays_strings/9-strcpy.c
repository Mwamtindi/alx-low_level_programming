#include <stdio.h>

#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 * @dest: the first pointer.
 * @src: the second pointer.
 * Return: On success dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *cp = dest;

	while (*src != '\0')
	{
		*cp++ = *src++;
	}
	*cp = '\0';
	return (dest);
}
