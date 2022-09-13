#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1, n2, fn, fe;

	n1 = 1;
	n2 = 2;
	fe = 0;
	for (fn = 0; fn <= 4000000; fn = n1 + n2)
	{
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
			fe += n1;
	}
	printf("%ld\n", fe);
	return (0);
}

