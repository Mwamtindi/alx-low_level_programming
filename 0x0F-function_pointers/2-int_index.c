#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integers
 * @array: array to pointers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no elements matches or size is less or equal to 0
 * else index of the first element is returned.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (e = 0; e < size; e++)
	{
		if (cmp(array[e]))
			return (e);
	}
	return (-1);
}
