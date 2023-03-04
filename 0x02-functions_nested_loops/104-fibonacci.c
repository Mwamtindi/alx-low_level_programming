#include <stdio.h>

/**
 * fibnum_length - return the length to be used.
 * @n: the number to be used.
 * Return: On success len.
 */

int fibnum_length(int n)
{
	int len = 0;

	if (!n)
	{
		return (1);
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
/**
 * main - check the code and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long acc, nf = 100000000, fn1 = 0, fn2 = 0, acci = 0;
	unsigned long fib1 = 1, fib2 = 2;
	short int i = 1, fibnum;

	while (i <= 98)
	{
		if (fn1 > 0)
			printf("%lu", fn1);
		fibnum = fibnum_length(nf) - 1 - fibnum_length(fib1);
		while (fn1 > 0 && fibnum > 0)
		{
			printf("%i", 0);
			fibnum--;
		}
		printf("%lu", fib1);

		acc = (fib1 + fib2) % nf;
		acci = fn1 + fn2 + (fib1 + fib2) / nf;
		fib1 = fib2;
		fn1 = fn2;
		fib2 = acc;
		fn2 = acci;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
