#include <stdio.h>

int main(void)
{
	int i, j, k, l;

	i = 48;
	j = 48;
	k = 48;
	l = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				l = 48;
				while (l < 58)
				{
					if (j != l && j < l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56 && k == 57 && l == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					l++;
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

