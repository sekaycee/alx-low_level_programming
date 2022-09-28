#include "main.h"

/**
 * _puts_recursion - print a string.. followed by a new line
 * :@s: input string
 */
void _puts_recursion(char *s)
{
	_putchar(s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}

