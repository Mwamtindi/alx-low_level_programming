#include <stdio.h>

#include <string.h>

#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the variable used.
 */

void rev_string(char *s)
{
	int m = strlen(s);
	int n;
	char b;

	for (n = 0; n < m / 2; n++)
	{
		b = s[n];
		s[n] = s[m - n - 1];
		s[m - n - 1] = b;
	}
}
