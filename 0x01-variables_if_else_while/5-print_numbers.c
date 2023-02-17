#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0;
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}

	putchar('\n');

	return (0);

}
