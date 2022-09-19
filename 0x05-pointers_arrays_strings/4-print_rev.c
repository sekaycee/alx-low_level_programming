#include "main.h"

/**
 * print_rev - print a string, in reverse, followed by a new line
 * @s: char pointer argument
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i > -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

