#include "search_algos.h"

int advance_search_helper(int *array, int value,
				size_t low, size_t high);

/**
 * advance_search_helper - helper to advanced_binary searches for a value
 * of integesr in sorted array
 * @array: The pointer to first element of array to be searched
 * @value: The value to search for
 * @low: The starting index in array
 * @high: The ending index in array
 *
 * Return: The index containing value, or -1 if value nt found or array is NULL
 */
int advance_search_helper(int *array, int value,
			    size_t low, size_t high)
{
	size_t ctr, i;

	if (!array)
		return (-1);

	ctr = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[ctr] < value)
			return (advance_search_helper(array, value,
							ctr + 1, high));
		if (array[ctr] >= value)
			return (advance_search_helper(array, value,
							low, ctr));
	}

	return (-1);
}

/**
 * advanced_binary - Fxn that searches for a value in a sorted array
 * of integers using a binary search algorithm.
 * @array: The pointer to first element of array to be searched
 * @size: The number of elements in sorted array
 * @value: The value to search for
 *
 * Return: The first index containing value, or -1 if value not found
 * or array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (advance_search_helper(array, value, low, high));
}
