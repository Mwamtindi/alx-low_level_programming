#include <stdio.h>

/**
 * main - check the code and prints the sum of the even-valued term.
 *
 * Return: Always 0.
 */

int main(void)
{
	int f = 0;
	long g = 1, h = 2, sum = h;

	while (g + h < 4000000)
	{
		h = h + g;

		if (h % 2 == 0)
			sum = sum + h;
		g = h - g;
		f++;
	}
	printf("%ld\n", sum);

	return (0);
}
