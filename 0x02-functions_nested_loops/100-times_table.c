#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: integer argument
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		int i, j, p;

		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				p = i * j;
				_putchar(44);
				_putchar(32);
				if (p <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(p + 48);
				}
				else if (p <= 99)
				{
					_putchar(32);
					_putchar((p / 10) + 48);
					_putchar((p % 10) + 48);
				}
				else
				{
					_putchar(((p / 100) % 10) + 48);
					_putchar(((p / 10) % 10) + 48);
					_putchar((p % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

