#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0;
 */

int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c--;
	}

	while (c >= 'a');

	putchar('\n');

	return (0);

}
