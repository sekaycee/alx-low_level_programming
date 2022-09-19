#include "main.h"

/**
 * print_array - print n elements of array
 * @a: integer pointer argument (array)
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	printf("\n");
}

