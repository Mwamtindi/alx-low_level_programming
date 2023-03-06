#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first pointer
 * @accept: second pointer to be used
 * Return: s that matches one of the bytes in accept
 * Otherwise NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
