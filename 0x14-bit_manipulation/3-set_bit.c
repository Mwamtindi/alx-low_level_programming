#include <stdio.h>
#include "main.h"

/**
 * set_bit - fxn that sets the value of a bit to 1 at a given index
 * @index: index to be set starting from 0
 * @n: unsigned long integer number pointing at given index
 * Return: 1 on success,
 *        -1 incase of an error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sam = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	sam = sam << index; /* shift sam to the left by given index */

	*n = *n | sam;  /* Bitwise OR used to set the bit to 1 */

	return (1);
}
