#include <string.h>

#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1:the first number to be used.
 * @n2: the second number to be sed.
 * @r: the buffer to store the result.
 * @size_r: the buffer size.
 * Return: On success r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k, n, pg, q, x1, x2;

	for (k = 0; n1[k]; k++)
		;
	for (n = 0; n2[n]; n++)
		;
	if (k > size_r || n > size_r)
		return (0);
	x1 = 0;
	for (k -= 1, n -= 1, pg = 0; pg < size_r - 1; k--, n--, pg++)
	{
		x2 = x1;
		if (k >= 0)
			x2 += n1[k] - '0';
		if (n >= 0)
			x2 += n2[n] - '0';
		if (k < 0 && n < 0 && x2 == 0)
		{
			break;
		}
		x1 = x2 / 10;
		r[pg] = x2 % 10 + '0';
	}
	r[pg] = '\0';
	if (k >= 0 || n >= 0 || x1)
		return (0);
	for (pg -= 1, q = 0; q < pg; pg--, q++)
	{
		x1 = r[pg];
		r[pg] = r[q];
		r[q] = x1;
	}
	return (r);
}
