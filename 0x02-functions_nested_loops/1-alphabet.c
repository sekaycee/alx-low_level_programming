#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');	
}

