#include <stdio.h>

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first variable to be used
 * @y: second variable of integer type
 * Return: -1 if y is lower than 0 or 1 if y is equal to 0
 * Otherwise x * _pow_recursion(x, y - 1) is returned.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
