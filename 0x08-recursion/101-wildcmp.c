#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first pointer to hold one number
 * @s2: input for the second number
 * Return: 1 if the strings can be considered identical
 * Otherwise 0 is returned.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return ((wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)));
	}
	if (*s2 == '\0' || *s1 != *s2)
	{
		return ((*s1 == '\0' && *s2 == '\0'));
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
