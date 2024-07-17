#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Fxn that prints an array of integers
 * @array: Array to be printed
 * @left: Starting index
 * @right: Ending index
 */
void print_array(int *array, size_t left, size_t right)

{
	size_t s;

	printf("Searching in array: ");
	for (s = left; s <= right; s++)
	{
		printf("%d", array[s]);
		if (s < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of ints
 * using Binary search
 * @array: The pointer to the first element of the array to be searched
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The indx where value is located,
 * or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)

{
	size_t left = 0, right = size - 1, avg;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);

		avg = (left + right) / 2;

		if (array[avg] == value)
			return ((int)avg);

		if (array[mid] < value)
			left = avg + 1;
		else
			right = avg - 1;
	}

	return (-1);
}
