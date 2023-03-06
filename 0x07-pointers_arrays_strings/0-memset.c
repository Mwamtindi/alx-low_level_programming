#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to be used
 * @b: a character type variable
 * @n: an integer variable
 * Return: On success s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *pot = s;

	while (n-- > 0)
	{
		*pot++ = b;
	}
	return (s);
}
