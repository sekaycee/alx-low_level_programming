#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers up or down to 98
 * @n: integer argument
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
		_putchar('\n');
		return;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}

