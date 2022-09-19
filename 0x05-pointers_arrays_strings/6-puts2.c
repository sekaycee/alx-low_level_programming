#include "main.h"

/**
 * puts2 - print every other character of a string. Begin with the first
 * character followed by a new line
 * @str: char pointer argument
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}

