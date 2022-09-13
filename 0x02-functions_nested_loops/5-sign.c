#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: integer argument
 *
 * Return: 1 if +ve 0 if 0 and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 48 || n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

