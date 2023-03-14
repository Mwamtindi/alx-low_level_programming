#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: On success return a pointer
 * Otherwise NULL is returned on failure
 */

char *str_concat(char *s1, char *s2)
{
	int rat, leng1, leng2;
	char *str_conc;

	if (s1 == NULL)
		leng1 = 0;
	else
		for (leng1 = 0; s1[leng1]; leng1++)
			;

	if (s2 == NULL)
		leng2 = 0;
	else
		for (leng2 = 0; s2[leng2]; leng2++)
			;

	str_conc = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (str_conc == NULL)
		return (NULL);

	for (rat = 0; rat < leng1; rat++)
		str_conc[rat] = s1[rat];

	for (rat = 0; rat < leng2; rat++)
		str_conc[rat + leng1] = s2[rat];

	str_conc[leng1 + leng2] = '\0';

	return (str_conc);
}
