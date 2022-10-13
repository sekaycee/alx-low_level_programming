#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list al;
	unsigned int i;

	va_start(al, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(al, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(al);
}

