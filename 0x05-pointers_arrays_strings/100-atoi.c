#include <stdio.h>

#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the pointer used.
 * Return: On success sign * num.
 */

int _atoi(char *s)
{
	int g = 1;
	int m = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			g *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			m = m * 10 + (*s - '0');
		}
		else if (*s == '+')
		{
		}
		else if (m > 0)
		{

			break;
		}
		s++;
	}

	return (g * m);
}
