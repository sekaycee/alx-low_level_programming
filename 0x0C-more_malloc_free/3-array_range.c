#include "main.h"

/**
 * array_range - create an array of integers
 * @min: smallest integer
 * @max: largest integer
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *a, i, c;

	if (min > max)
		return (0);
	c = (max - min) + 1;

	a = malloc(sizeof(int) * c);
	if (!a)
		return (0);

	for (i = 0; i < c; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}

