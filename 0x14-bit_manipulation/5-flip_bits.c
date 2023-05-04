#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a fxn that can return the bits number needed to be flipped
 *             to get from number to number
 * @n: intial number of unsigned long integer type to be used
 * @m: second number of unsigned long integer type to be used
 * Return: bits number(tally).
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int furr;
	unsigned int tally = 0;

	furr = n ^ m;

	while (furr)  /* check validity in furr and count bits number */
	{
		tally += furr & 1;
		furr >>= 1;
	}

	return (tally);
}
