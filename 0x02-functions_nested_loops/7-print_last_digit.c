#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: integer argument
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld = ld * -1;
	_putchar('0' + ld);
	return ld;
}

