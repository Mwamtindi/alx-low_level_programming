#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer to be checked
 * Return: nothing.
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
