#include "main.h"

/**
 * puts2 - print every other character of a string. Begin with the first
 * character followed by a new line
 * @str: char pointer argument
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i > -1; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
			_putchar(str[i]);

	}
}

