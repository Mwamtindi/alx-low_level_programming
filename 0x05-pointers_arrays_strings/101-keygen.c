#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - check the code and generate random password.
 *
 * Return: Always 0.
 */

int main(void)
{
	int pass[100];
	int a, s, d;

	s = 0;
	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		s += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - s) - '0' < 78)
		{
			d = 2772 - s - '0';
			s += d;
			putchar(d + '0');
			break;
		}
	}
	return (0);
}
