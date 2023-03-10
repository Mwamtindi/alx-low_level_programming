#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 * Return: On success 0 or 1 if one of the numbers is symbols.
 */

int main(int argc, char *argv[])
{
	int r, g;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (r = 1; r < argc; r++)
	{
		for (g = 0; argv[r][g] != '\0'; g++)
		{
			if (!isdigit(argv[r][g]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[r]);
	}
	printf("%d\n", sum);
	return (0);
}
