#include <stdio.h>

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

