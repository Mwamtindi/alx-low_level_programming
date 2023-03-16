#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int _numpositive(char *str);

/**
 * _numpositive - check for correct argument and positive numbers
 * @str: memory address;
 * Return: On success 0 else 1 to be returned.
 */

int _numpositive(char *str)
{
	int e = 0;

	while (str[e] != '\0')
	{
		if (!isdigit(str[e]))
		{
			return (0);
		}
		e++;
	}
	return (1);
}
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: on success 0.
 */

int main(int argc, char *argv[])
{
	char *mult;
	int num1, num2, prod, d, k, e = 0;
	int digits[100];

	if (argc != 3)
	{
		mult = "Error\n";
		while (*mult)
		{
			_putchar(*mult++);
		}
		exit(98);
	}
	if (!_numpositive(argv[1]) || !_numpositive(argv[2]))
	{
		mult = "Error\n";
		while (*mult)
		{
			_putchar(*mult++);
		}
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	prod = num1 * num2;
	if (prod == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	while (prod > 0)
	{
		d = prod % 10;
		prod /= 10;
		digits[e++] = d;
	}
	for (k = e - 1; k >= 0; k--)
	{
		_putchar(digits[k] + '0');
	}
	_putchar('\n');

	return (0);
}
