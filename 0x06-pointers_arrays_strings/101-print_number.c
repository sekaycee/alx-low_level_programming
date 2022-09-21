#include "main.h"

/**
 * print_number - print an integer
 * @n: integer argument
 */
void print_number(int n)
{
	unsigned int a, b, c;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
	{
		a = n;
	}

	c = 1;
	for (b = a; b > 9; b /= 10)
		c *= 10;
	for ( ; c >= 1; c /= 10)
		_putchar(((a / c) % 10) + '0');
}

