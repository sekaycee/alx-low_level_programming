#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 124)
	{
		if (i == 123)
			i = 65;
		if (i == 91)
			break;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

