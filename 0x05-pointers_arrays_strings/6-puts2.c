#include "main.h"

/**
 * puts2 - print every other character of a string. Begin with the first
 * character followed by a new line
 * @str: char pointer argument
 */
void puts2(char *str)
{
	int i, c;

	c = 0;
	while (str[c] != '\0')
		c++;

	for (i = 0; i < c - 1; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}

