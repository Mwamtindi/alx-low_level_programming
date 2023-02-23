#include <stdio.h>

#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the character to be checked.
 * Return: On success 1 if c is uppercase.
 * Otherwise 0 is returned.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
