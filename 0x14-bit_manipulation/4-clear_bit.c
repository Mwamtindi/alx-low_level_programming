#include <stdio.h>
#include "main.h"

/**
 * clear_bit -fxn that sets the value of a bit to 0 at a given index
 * @n: give the address of the bit at a given index
 * @index: the index of the to be used starting from 0
 * Return: 1 on success
 *        -1 incase of error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int valve;

	if (index >= sizeof(unsigned long int) * 8) /* check validity of index */
	{
		return (-1);
	}

	valve = ~(1UL << index);

	*n &= valve; /* clear bit with valve */

	return (1);
}
