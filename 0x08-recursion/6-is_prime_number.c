#include "main.h"

int prime_number(int, int sum);
/**
 * prime_number - checks for a prime number
 * @n: the input integer
 * @num: check the number
 * Return: 1 if the integer is a prime number
 * Othewise 0 is returned.
 */

int prime_number(int n, int num)
{
	if (n % num == 0)
		return (0);
	if (num == n / 2)
		return (1);
	return (prime_number(n, num + 1));
}

/**
 * is_prime_number - returns the prime number
 * @n: the input
 * Return: prime number is returned.
 */
int is_prime_number(int n)
{
	int sum = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (prime_number(n, sum));
}
