#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 * Return: On success 0 otherwise 1 on an error.
 */

int main(int argc, char *argv[])
{
	int numb0, numb1, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	numb0 = atoi(argv[1]);
	numb1 = atoi(argv[2]);
	product = numb0 * numb1;

	printf("%d\n", product);

	return (0);
}
