#include "search_algos.h"
#include <math.h>


size_t min(size_t fv, size_t sv);

/**
 * min - Fxn that returns the minimum of two size_t values
 * @fv: The first value
 * @sv: The second value
 *
 * Return: fv if lower or equal to sv, sv otherwise
 */

size_t min(size_t fv, size_t sv)
{
	return (fv <= sv ? fv : sv);
}

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
	size_t low, high, move;

	if (!array || size == 0)
		return (-1);

	move = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += move)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
