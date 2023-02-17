#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0.
 */

int main(void)
{
	int p = 0;

	while (p < 10)
	{
		putchar(p + '0');
		p++;

	}

	putchar('\n');

	return (0);

}
