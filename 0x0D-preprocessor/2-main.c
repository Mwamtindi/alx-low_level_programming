#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 *
 * Return: On success 0.
 */

int main(void)
{
	const char *fname = __FILE__;

	while (*fname)
	{
		putchar(*fname++);
	}
	putchar('\n');

	return (0);
}
