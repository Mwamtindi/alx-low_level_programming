#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat-concatenates two strings
 * @s1: adress of the first string
 * @s2: adress of the second string
 * @n: integre variable to be used
 * Return: pointer to newly allocated space
 * else NULL is returned if fxn fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concate;
	unsigned int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
	{
		n++;
	}
	concate = malloc(sizeof(char) * (n + 1));

	if (concate == NULL)
		return (NULL);
	n = 0;
	for (x = 0; s1[x]; x++)
		concate[n++] = s1[x];
	for (x = 0; s2[x] && x < n; x++)
		concate[n++] = s2[x];

	concate[n] = '\0';
	return (concate);
}
