#include <stdio.h>

#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the pointer used.
 * Return: On success sign * result.
 */

int _atoi(char *s)
{
	int sign = 1, found_num = 0;
	long int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			found_num = 1;
			num = num * 10 + (*s - '0');
		}
		else if (found_num)
			break;
		s++;
	}
	return (num * sign);
}
