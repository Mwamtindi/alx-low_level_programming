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
	int p, leng = 0;

	dup = malloc(sizeof(char) * (leng + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	for (p = 0; str[p]; p++)
	{
		leng++;
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	for (p = 0; str[p]; p++)
	{
		dup[p] = str[p];
	}
	dup[leng] = '\0';
	return (dup);
}
