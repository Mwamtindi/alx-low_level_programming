#include <stdio.h>

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the pointer used
 * Return: 0 if empty string
 * Otherwise 1 + _strlen_recursion(s + 1) is returned.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
