#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: hold the adress of the memory
 * @old_size: size of allocated space in bytes
 * @new_size: size of new memory block
 * Return: a pointer to new allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *mal, *fre;
	unsigned int e;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	mem = malloc(new_size);
	if (mem == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		old_size = new_size;
	}
	mal = ptr;
	fre = mem;

	for (e = 0; e < old_size; e++)
	{
		fre[e] = mal[e];
	}
	free(ptr);

	return (mem);
}
