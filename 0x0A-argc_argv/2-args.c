#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 * @argc: the argument count
 * @argv: the argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int cv;

	for (cv = 0; cv < argc; cv++)
	{
		printf("%s\n", argv[cv]);
	}
	return (0);
}
