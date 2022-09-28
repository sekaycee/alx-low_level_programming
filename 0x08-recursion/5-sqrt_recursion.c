#include "main.h"

/**
 * pow_op - return the natural square root of a number
 * @n: given number
 * @i: iterator
 * Return: square root or -1
 */
int pow_op(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + pow_op(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: given number
 * Return: natural squre root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pow_op(n, 2));
}

