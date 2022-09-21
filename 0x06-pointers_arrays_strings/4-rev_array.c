#include "main.h"

/**
 * rev_array - reverse the contents of an array of integers
 * @a: integer pointer to array
 * @n: length of array
 */
void rev_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

