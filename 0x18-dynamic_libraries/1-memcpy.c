#include <stdio.h>
#include "main.h"

/**
 * _memcpy -function that copies memory area
 * @dest: a character pointer
 * @src: second pointer to be used
 * @n: unsigned integer variable
 * Return: On success dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptrdest = dest;
	char *ptrsrc = src;

	while (n-- > 0)
	{
		*ptrdest++ = *ptrsrc++;
	}
	return (dest);
}
