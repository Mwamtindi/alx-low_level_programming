#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}

	for (x = 0; x < 6; x++)
	{
		putchar(x + 'a');
	}

	putchar('\n');

	return (0);

}
