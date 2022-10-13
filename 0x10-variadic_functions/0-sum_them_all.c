#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all parameters
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(al, n);
	for (i = 0; i < n; i++)
		sum += va_arg(al, int);

	va_end(al);
	return (sum);
}

