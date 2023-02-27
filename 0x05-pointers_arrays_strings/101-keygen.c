#include <stdio.h>
#include <time.h>
#include "main.h"
#define PASSWORD_LENGTH 6

/**
 * _putchar - generate password
 * @c: the character to be checked.
 * Return: Always 0.
 *
 * main - check the code and generate random password.
 */

int _putchar(char c);

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int w;

	srand(time(NULL));
	for (w = 0; w < PASSWORD_LENGTH; w++)
	{
		password[w] = rand() % 26 + 97;
	}
	password[PASSWORD_LENGTH] = '\0';
	for (w = 0; w < PASSWORD_LENGTH; w++)
	{
		_putchar(password[w]);
	}

	_putchar('\n');

	return (0);
}
