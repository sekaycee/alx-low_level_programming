#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first integer pointer argument
 * @b: second integer pointer argument
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

