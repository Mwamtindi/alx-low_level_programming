#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int word_length(char *str);
int word_count(char *str);
/**
 * word_length-count number of the words
 * @str: adress of the string
 * Return: leng.
 */
int word_length(char *str)
{
	int sha = 0, leng = 0;

	while (*(str + sha) && *(str + sha) != ' ')
	{
		leng++;
		sha++;
	}
	return (leng);
}
/**
 * word_count - counts the number of words
 * @str: the string to be checked
 * Return:number of words.
 */
int word_count(char *str)
{
	int sha = 0, words = 0, leng = 0;

	for (sha = 0; *(str + sha); sha++)
		leng++;
	for (sha = 0; sha < leng; sha++)
	{
		if (*(str + sha) != ' ')
		{
			words++;
			sha += word_length(str + sha);
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: address of the string
 * Return: NULL if str equal to NULL or str is empty
 * else return NULL if fxn fails.
 */

char **strtow(char *str)
{
	char **string0;
	int sha = 0, words, u, tt, v;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	string0 = malloc(sizeof(char *) * (words + 1));
	if (string0 == NULL)
		return (NULL);

	for (u = 0; u < words; u++)
	{
		while (str[sha] == ' ')
			sha++;
		tt = word_length(str + sha);
		string0[u] = malloc(sizeof(char) * (tt + 1));

		if (string0[u] == NULL)
		{
			for (; u >= 0; u--)
				free(string0[u]);
			free(string0);
			return (NULL);
		}
		for (v = 0; v < tt; v++)
			string0[u][v] = str[sha++];
		string0[u][v] = '\0';
	}
	string0[u] = NULL;
	return (string0);
}
