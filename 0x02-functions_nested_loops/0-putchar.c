#include <stdio.h>

#include <unistd.h>

/**
 * main - prints _putchar, followed by a new line..
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

int main(void)
{
	_putchar('_');

	_putchar('p');

	_putchar('u');

	_putchar('t');

	_putchar('c');

	_putchar('h');

	_putchar('a');

	_putchar('r');

	_putchar('\n');

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
