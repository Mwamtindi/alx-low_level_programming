#include <stdio.h>

#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @i: the integer to be computed.
 * Return: On success i if greater than 0.
 * Otherwise -i is returned.
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
