#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using Jump search
 * @array: The pointer to the first element of the array to be searched
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located,
 * or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t move, prv = 0, s;

	if (array == NULL || size == 0)
		return (-1);

	move = sqrt(size);

	while (prv < size && array[prv] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prv, array[prv]);
		prv += move;
	}

	s = prv - move;
	printf("Value found between indexes [%lu] and [%lu]\n", s,
			prv < size ? prv : size - 1);

	while (s < size && s <= (prv < size ? prv : size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n", s, array[s]);
		if (array[s] == value)
			return ((int)s);
		s++;
	}

	return (-1);
}
