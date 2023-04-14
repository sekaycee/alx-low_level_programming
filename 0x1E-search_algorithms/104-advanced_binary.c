#include "search_algos.h"

/**
 * _rsearch - Search recursively for a value in an array of
 *            integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value - if exists
 *         -1 - otherwise
 */
int _rsearch(int *array, size_t size, int value)
{
	size_t i, mid = size / 2;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (_rsearch(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (_rsearch(array, mid + 1, value));

	mid++;
	return (_rsearch(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - Wrap _rsearch and validate the index returned
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value - if checks passed
 *         -1 - otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = _rsearch(array, size, value);
	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
