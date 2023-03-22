#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element
 * @array: pointer array
 * @size: the size of the array
 * @action: pointer to the fxn you need to use
 * Return: Nothhing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t e;

	if (array && action)
	{
		for (e = 0; e < size; e++)
		{
			action(array[e]);
		}
	}
}
