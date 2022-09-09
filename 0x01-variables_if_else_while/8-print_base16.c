#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all hexadecimal chars
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58 || i < 103)
	{
		if (i == 58)
			i = 97;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

