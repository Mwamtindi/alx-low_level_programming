#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first pointer
 * @needle: second pointer to be checked
 * Return: haystack the beginning of the located substring
 * Otherwise NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int leng = strlen(needle);

	if (leng == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle && strncmp(haystack, needle, leng) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
