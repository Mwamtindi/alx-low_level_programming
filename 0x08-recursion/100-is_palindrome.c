#include "main.h"
#include <string.h>

int palindrome(char *s, int t, int d);

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: chsrscter input
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int leng = strlen(s);

	return (palindrome(s, 0, leng - 1));
}

/**
 * palindrome - checks if a string is palindrome
 * @s: character pointer used
 * @t: input
 * @d: input of type integer
 * Return: On success 1 otherwise palindrome to be returned.
 */
int palindrome(char *s, int t, int d)
{
	if (t >= d)
	{
		return (1);
	}
	return ((s[t] == s[d]) && palindrome(s, t + 1, d - 1));
}
