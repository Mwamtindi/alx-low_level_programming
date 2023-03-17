#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _isdigit - checks if a string contains a non-digit char
 * @c: string to be checked
 *
 * Return: 0 if a non-digit is found, else 1 is returned.
 */
int _isdigit(char *c)
{
	int u = 0;

	while (c[u])
	{
		if (c[u] < '0' || c[u] > '9')
			return (0);
		u++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @n: string to be checked
 *
 * Return: the size of the string.
 */
int _strlen(char *n)
{
	int u = 0;

	while (n[u] != '\0')
	{
		u++;
	}
	return (u);
}

/**
 * _iserror - checks for errors
 * Return: Nothing.
 */
void _iserror(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	char *sp1, *sp2;
	int sha1, sha2, sha0, u, raw, num1, num2, *prod, e = 0;

	sp1 = argv[1], sp2 = argv[2];
	if (argc != 3 || !_isdigit(sp1) || !_isdigit(sp2))
		_iserror();
	sha1 = _strlen(sp1);
	sha2 = _strlen(sp2);
	sha0 = sha1 + sha2 + 1;
	prod = malloc(sizeof(int) * sha0);
	if (!prod)
		return (1);
	for (u = 0; u <= sha1 + sha2; u++)
		prod[u] = 0;
	for (sha1 = sha1 - 1; sha1 >= 0; sha1--)
	{
		num1 = sp1[sha1] - '0';
		raw = 0;
		for (sha2 = _strlen(sp2) - 1; sha2 >= 0; sha2--)
		{
			num2 = sp2[sha2] - '0';
			raw += prod[sha1 + sha2 + 1] + (num1 * num2);
			prod[sha1 + sha2 + 1] = raw % 10;
			raw /= 10;
		}
		if (raw > 0)
			prod[sha1 + sha2 + 1] += raw;
	}
	for (u = 0; u < sha0 - 1; u++)
	{
		if (prod[u])
			e = 1;
		if (e)
			_putchar(prod[u] + '0');
	}
	if (!e)
		_putchar('0');
	_putchar('\n');
	free(prod);
	return (0);
}
