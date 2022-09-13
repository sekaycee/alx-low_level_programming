#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 1;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
		i++;
	}
	printf("%d\n", j);
	return (0);
}

