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
	char *ptr;

	ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
