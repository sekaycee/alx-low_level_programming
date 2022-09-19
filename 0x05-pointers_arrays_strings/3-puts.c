#include "main.h"

/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: char pointer argument
 */
void _puts(char *s)
{
	while (*s != '\0')
		_putchar(*s);
	_putchar('\n');
}

