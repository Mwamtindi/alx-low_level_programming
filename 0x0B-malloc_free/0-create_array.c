#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: the size of the memory
 * @c: character variable
 * Return: NULL if size is equal to 0
 * Otherwise a pointer to array is returned or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *array;

	array = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < size; s++)
	{
		array[s] = c;
	}
	return (array);
}
