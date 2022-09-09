#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (i != j && i != k && j != k && i < j && i < k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

