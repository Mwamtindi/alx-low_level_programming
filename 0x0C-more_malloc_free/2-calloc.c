#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: variable of the array
 * @size:
 * size of the bytes
 * Return: pointer else NULL if nmemb or size is equal to 0..
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *mem;
	unsigned int v;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	mem = ptr;

	for (v = 0; v < (size * nmemb); v++)
	{
		mem[v] = '\0';
	}
	return (ptr);

}
