#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: character pointer to be used
 * @c: character variable
 * Return: s to the first occurrence of the character c
 * Otherwise NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
