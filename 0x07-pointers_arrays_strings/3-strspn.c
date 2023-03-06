#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first character pointer
 * @accept: second pointer
 * Return: On success leng.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int leng = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		leng++;
		s++;
	}
	return (leng);
}
