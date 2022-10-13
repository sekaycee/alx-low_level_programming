#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string to be printed between the strings
 * @n: number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	char *s;

	va_start(al, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(al, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(al);
}

