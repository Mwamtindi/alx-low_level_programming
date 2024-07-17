#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of int using Linear search
 * @array: Pointer to the first element of the array to be searched
 * @size: Number of elements in the array of ints
 * @value: Value to search for in an array
 *
 * Return: First indx where value is located,
 * or -1 if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)

{
	size_t s;

	if (array == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		printf("Value checked array[%lu] = [%d]\n", s, array[s]);
		if (array[s] == value)
			return ((int)s);
	}

	return (-1);
}
