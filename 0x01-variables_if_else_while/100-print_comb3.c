#include <stdio.h>

/**
 * main - prints all possible combination of two digits.
 * Return: Always 0.
 */

int main(void)
{
	int n, p;

	for (n = '0'; n <= '9'; n++)
	{
		for (p = n + 1; p <= '9'; p++)
		{
			if (p != n)
			{
				putchar(n);

				putchar(p);

				if (n == '8' && p == '9')
					continue;
				putchar(',');

				putchar(' ');

			}
		}
	}
	putchar('\n');

	return (0);

}
