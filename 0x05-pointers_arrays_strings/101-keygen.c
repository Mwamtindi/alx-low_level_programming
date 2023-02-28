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
	char password[100];
	int i, r;

	srand(time(NULL));

	for (i = 0; i < 4; i++)
	{
		r = rand() % 26;
		password[i] = 'a' + r;
	}

	for (i = 4; i < 6; i++)
	{
		r = rand() % 10;
		password[i] = '0' + r;
	}

	password[6] = '\0';

	printf("%s\n", password);

	return (0);
}
