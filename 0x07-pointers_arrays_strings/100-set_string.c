#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer used
 * @to: pointer of type character
 * Return: Nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
