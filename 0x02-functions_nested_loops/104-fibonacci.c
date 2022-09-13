#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, bool, bool2;
	long int n1, n2, n3, n4, fn, fe;

	n1 = 1;
	n2 = 2;
	bool = bool2 = 1;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 96; i++)
	{
		if (bool)
		{
			fn = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = fn;
		}
		else
		{
			if (bool2)
			{
				n3 = n1 % 1000000000;
				n4 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				bool2 = 0;
			}
			fe = n3 + n4;
			fn = n1 + n2 + (fe / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fe % 1000000000);
			n1 = n2;
			n3 = n4;
			n2 = fn;
			n4 = fe % 1000000000;
		}
		if (((n1 + n2) < 0) && bool == 1)
			bool = 0;
	}
	printf("\n");
	return (0);
}

