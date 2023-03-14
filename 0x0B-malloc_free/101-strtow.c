#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _count-count number of the words
 * @ng: adress of the string
 * Return: string0.
 */
int _count(char *ng)
{
	int sha0, string0 = 0;

	for (sha0 = 0; ng[sha0]; sha0++)
	{
		if (ng[sha0] == ' ')
		{
			if (ng[sha0 + 1] != ' ' && ng[sha0 + 1] != '\0')
				string0++;
		}
		else if (sha0 == 0)
			string0++;
	}
	string0++;

	return (string0);
}

/**
 * strtow - splits a string into words
 * @str: address of the string
 * Return: NULL if str equal to NULL or str is empty
 * else return NULL if fxn fails.
 */

char **strtow(char *str)
{
	char **words;
	int sha0, sha1, word = 0, e = 0, b, s;

	if (str == NULL || *str == '\0')
		return (NULL);
	word = _count(str);
	if (word == 1)
		return (NULL);

	words = malloc(sizeof(char *) * (word + 1));
	if (words == NULL)
		return (NULL);
	words[word - 1] = NULL;
	while (str[sha0])
	{
		if (str[sha0] != ' ' && (sha0 == 0 || str[sha0 - 1] == ' '))
		{
			for (sha1 = 1; str[sha0 + sha1] != ' ' && str[sha0 + sha1]; sha1++)
				;
			sha1++;
			words[e] = malloc(sizeof(char) * sha1 + 1);
			sha1--;
			if (words[e] == NULL)
			{
				for (b = 0; b < e; b++)
					free(words[b]);
				free(words[word - 1]);
				free(words);
				return (NULL);
			}
			for (s = 0; s < sha1; s++)
				words[e][s] = str[sha0 + s];
			words[e][s] = '\0';
			e++;
			sha0 += sha1++;
		}
		else
			sha0++;
	}
	return (words);
}
