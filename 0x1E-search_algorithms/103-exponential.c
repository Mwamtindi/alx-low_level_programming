#include "search_algos.h"

int expo_search_helper(int *array, int value,
			 size_t bot, size_t high);
size_t min(size_t fv, size_t sv);

/**
 * min - fxn that returns the minimum of two size_t values
 * @fv: The first value
 * @sv: The second value
 *
 * Return: fv if lower or equal to sv,otherwise return sv
 */
size_t min(size_t fv, size_t sv)

{
	return (fv <= sv ? fv : sv);
}

/**
 * expo_search_helper - function that helps the searches for a value in a
 * sorted array of integers using the exponential search algorithm
 * @array: The pointer to first element of array to be searched
 * @value: The value to search for
 * @bot: The starting index
 * @high: The ending index
 *
 * Return: The index containing value, or -1 if value not found or array
 * is NULL
 */

int expo_search_helper(int *array, int value,
			 size_t bot, size_t high)

{
	size_t ctr, i;

	if (!array)
		return (-1);

	while (bot <= high)
	{
		ctr = (bot + high) / 2;
		printf("Searching in array: ");
		for (i = bot; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[ctr] < value)
			bot = ctr + 1;
		else if (array[ctr] > value)
			high = ctr - 1;
		else
			return ((int)ctr);
	}

	return (-1);
}

/**
 * exponential_search - Fxn that searches for a value in a sorted array
 * of integers using an exponential search algorithm
 * @array: The pointer to first element of array to be searched
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index containing value, or -1 if value not found or
 * array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bot, high, mix = 1;

	if (!array || size == 0)
		return (-1);

	while (mix < size && array[mix] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       mix, array[mix]);
		mix *= 2;
	}

	bot = mix / 2;
	high = min(mix, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", bot, high);
	return (expo_search_helper(array, value, bot, high));
}
