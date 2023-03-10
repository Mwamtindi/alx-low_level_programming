#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - checks the code
 * @argc: the argument count
 * @argv: the argument vector
 * Return: On success 0 otherwise 1 if argument not equal to 1.
 */

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		cents = cents - 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents = cents - 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
