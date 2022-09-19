#include "main.h"

/**
 * puts_half - print half of a string, followed by a new line
 * @str: char pointer argument
 */
void puts_half(char *str)
{
	int i, c;

	c = 0;
	while (str[c] != '\0')
		c++;

	if (c % 2 != 0)
		i = (c - 1) / 2;
	else
		i = c / 2;

	while (i < c)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

