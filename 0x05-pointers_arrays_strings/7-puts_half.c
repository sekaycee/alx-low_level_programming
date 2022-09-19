#include "main.h"

/**
 * puts_half - print half of a string, followed by a new line
 * @str: char pointer argument
 */
void puts_half(char *str)
{
	int i, l;

	l = _strlen(str);
	if (l % 2 != 0)
		i = (l - 1) / 2;
	else
		i = l / 2;
	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

