#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac equal to 0 or av equal to NULL
 * else return a pointer to new string or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int u, h;
	int leng = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (u = 0; u < ac; u++)
	{
		for (h = 0; av[u][h] != '\0'; h++)
		{
			leng++;
		}
		leng++;
	}
	str = (char *) malloc(leng * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	leng = 0;
	for (u = 0; u < ac; u++)
	{
		for (h = 0; av[u][h] != '\0'; h++)
		{
			str[leng] = av[u][h];
			leng++;
		}
		str[leng] = '\n';
		leng++;
	}
	str[leng] = '\0';

	return (str);
}
