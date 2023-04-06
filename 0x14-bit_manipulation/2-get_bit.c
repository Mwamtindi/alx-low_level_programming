#include <stdio.h>
#include "main.h"

/**
 * get_bit - fxn that returns the value of a bit at a given index
 * @n: number used of type unsigned long integer
 * @index: index of the bit you want to get starting from 0.
 * Return: -1 incase of error
 *         value of the bit at the index "index".
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int vibe;

	/* right shift n by index to bring bit and assigned it to vibe */
	vibe = (n >> index) & 1;

	if (vibe == 0 || vibe == 1)
	{
		return (vibe);
	}
	else
	{
		return (-1); /* this indicate an error */
	}
}
