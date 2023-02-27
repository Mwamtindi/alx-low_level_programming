#include <stdio.h>

#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the first variable.
 * @b: the second variable.
 */

void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;

	*b = s;
}
