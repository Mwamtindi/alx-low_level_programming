#include "search_algos.h"
#include <stdio.h>

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
	int fir, mid, las;
	int id;

	if (array == NULL)
	{
		return (-1);
	}

	fir = 0;
	las = size - 1;

	while (fir <= las)
	{
		mid = (fir + las) / 2;
		printf("Searching in array: ");
		for (id = fir; id <= las; id++)
			printf("%i%s", array[id], id == las ? "\n" : ", ");

		if (array[mid] < value)
			fir = mid + 1;
		else if (array[mid] > value)
			las = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
