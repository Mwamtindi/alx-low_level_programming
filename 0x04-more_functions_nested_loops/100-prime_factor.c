#include <stdio.h>

/**
 * main - find and prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	long int largest_factor = 1;
	int factor = 2;

	while (n != 1)
	{
		if (n % factor == 0)
		{
			n = n / factor;
			if (factor > largest_factor)
				largest_factor = factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", largest_factor);

	return (0);
}
