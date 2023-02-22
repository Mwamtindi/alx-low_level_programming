#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r = 0;
	long t = r, y = 2;

	while (r < 50)
	{
		if (r == 0)
			printf("%ld", t);
		else if (r == 1)
			printf("%ld", y);
		else
		{
			y = y + t;
			t = y - t;
			printf(", %ld", y);
		}
		r++;
	}
	printf("\n");
	return (0);
}
