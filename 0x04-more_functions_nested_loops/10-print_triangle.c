#include "main.h"

/**
 * print_triangle - print a triangle on the terminal
 * followed by a new line
 * @n: number of lines
 */
void print_triangle(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n - 1; j++)
			_putchar(' ');
		for (j--; j < n; j++)
			_putchar('#');
		if (i < n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

