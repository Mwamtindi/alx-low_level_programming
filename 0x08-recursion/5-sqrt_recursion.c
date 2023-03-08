#include <stdio.h>

#include "main.h"

int _sqrt(int num, int r);

/**
 * _sqrt - find the square root
 * @num: number to be checked
 * @r: the integer input
 * Return: value -1 if num is less than 0 or less than r square
 * and if num is equal to r square , r is returned
 * Otherwise sqrt is returned.
 */
int _sqrt(int num, int r)
{
	if (num < 0)
		return (-1);
	if (num == (r * r))
		return (r);
	if (num < (r * r))
		return (-1);
	return (_sqrt(num, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer variable to check for the squareroot
 * Return: sqrt.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
