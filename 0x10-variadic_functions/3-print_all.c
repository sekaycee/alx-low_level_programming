#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: types of arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s;
	va_list al;

	va_start(al, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(al, int));
			break;
		case 'i':
			printf("%i", va_arg(al, int));
			break;
		case 'f':
			printf("%f", va_arg(al, double));
			break;
		case 's':
			s = va_arg(al, char *);
			if (str)
			{
				printf("%s", s);
				break;
			}
			printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(al);
}

