#include "main.h"

/**
 * times_table - print the 9 times tables
 */
void times_table(void)
{
	int i, j, r;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			r = i * j;
			if (j == 0 && r == 0)
				_putchar('0');
			if (r < 10 && j > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
			if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

