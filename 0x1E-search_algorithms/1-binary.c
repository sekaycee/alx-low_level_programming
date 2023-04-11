#include "search_algos.h"

/**
 * _recurse - Search recursively for a value in an array of integers
 *            using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value
 */
int _recurse(int *array, size_t size, int value)
{
	int mid = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return (mid);

	if (value < array[mid])
		return (_recurse(array, mid, value));

	mid++;
	return (_recurse(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - Wrap _recurse and return the index of the value
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value - if exists
 *         -1 - otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = _recurse(array, size, value);
	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
