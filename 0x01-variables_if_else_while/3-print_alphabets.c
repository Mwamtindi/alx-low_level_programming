#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0.
 */

int main(void)

{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}

	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}

	putchar('\n');

	return (0);

}
