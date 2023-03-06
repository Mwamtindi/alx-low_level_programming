#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of two diagnols
 * @a: the pointer to be used
 * @size: variable of type integer
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int sum0 = 0, sum1 = 0;
	int z;

	for (z = 0; z < size; z++)
	{
		sum0 += *(a + z * size + z);
		sum1 += *(a + z * size + size - z - 1);
	}
	printf("%d, %d\n", sum0, sum1);
}
