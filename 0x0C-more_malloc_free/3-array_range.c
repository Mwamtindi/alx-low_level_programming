#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: stores the minimum value
 * @max: stores the maximum value
 * Return: pointer to newly created array else
 * NULL is returned if min is greater than max or fxn fails.
 */

int *array_range(int min, int max)
{
	int *ptr, a, g;

	if (min > max)
		return (NULL);
	g = (max - min) + 1;

	ptr = malloc(sizeof(int) * g);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < g; a++)
	{
		ptr[a] = min++;
	}
	return (ptr);
}
