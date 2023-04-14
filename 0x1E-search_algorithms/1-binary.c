#include "search_algos.h"

/**
 * binary_search - Search for a value in an array of integers using
 *                 the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value - if exists
 *         -1 - otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
