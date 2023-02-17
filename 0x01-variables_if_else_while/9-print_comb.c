#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0.
 */

int main(void)
{
	for (int c = 0; c < 10; c++)
	{
		for (int j = c; j < 10; j++)
		{
			for (int k = j; k < 10; k++)
			{
				putchar(c + '0');

				putchar(',');

				putchar(' ');

				putchar(j + '0');

				putchar(',');

				putchar(' ');

				putchar(k + '0');

				putchar('\n');

			}

		}

	}

	return (0);

}
