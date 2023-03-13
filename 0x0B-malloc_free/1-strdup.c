#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string value
 * Return: On success a pointer to duplicated srting
 * Otherwise NULL is returned if str is equal to NULL
 * or insufficient memory
 */

char *_strdup(char *str)
{
	char *dup;

	dup = (char *) malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
