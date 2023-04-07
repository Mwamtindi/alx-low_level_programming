#include <stdio.h>
#include "main.h"

/**
 * get_endianness - fxn used to check the endianness
 * Return: 0 incase is big endian
 *         1 if result is little endian.
 */

int get_endianness(void)
{
	int en = 0;
	char *dian;

	dian = (char *) &en;

	if (dian == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

