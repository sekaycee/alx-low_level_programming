#include "main.h"

/**
 * prime_h - check if a number is a prime number
 * @n: given number
 * @i: iterator
 * Return: 1 if n is a prime number.. 0 otherwise
 */
int prime_h(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime_h(n, i + 1));
}

/**
 * is_prime_number - check if a number is a prime number
 * @n: given number
 * Retuen: 1 if n is a prime number.. 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (prime_h(n, 2));
}

