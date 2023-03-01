#include <stdio.h>

#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the pointer to be used.
 * @n: the integer variable used.
 */

void reverse_array(int *a, int n)
{
	int l = 0;
	int k = n - 1;

	while (l < k)
	{
		int t = a[l];

		a[l] = a[k];
		a[k] = t;
		l++;
		k--;
	}
}
