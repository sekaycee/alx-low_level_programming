#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a
 * square matrix of integers
 * @a: integer matrix
 * @size: matrix size
 */
void print_diagsums(int *a; int size)
{
	int i, f_sum, s_sum;

	f_sum = s_sum = 0;
	for (i = 0; i < size; i++)
	{
		f_sum += *(a + i * size + i);
		s_sum += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", f_sum, s_sum);
}

