#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int n1, n2, fn;

	i = 0;
	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	while (i < 48)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
		i++;
	}
	printf("\n");
	return (0);
}

