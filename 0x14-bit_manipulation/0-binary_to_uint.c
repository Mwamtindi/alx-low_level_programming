#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - fxn that converts a binary number to an unsigned int
 * @b: the pointer used to point string of 1 and 0 chars
 * Return: number after conversion otherwise 0 is returned if b is NULL
 *          or one or more chars present in string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int bti = 0;

	if (b == NULL)
		return (0);

	for (; b[bti] != '\0'; bti++)
	{
		if (b[bti] != '0' && b[bti] != '1')
			return (0);

		val <<= 1;

		if (b[bti] == '1')
			val += 1;
	}
	return (val);
}
