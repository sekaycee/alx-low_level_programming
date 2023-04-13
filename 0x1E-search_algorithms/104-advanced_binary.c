#include "search_algos.h"

/**
 * _recurse - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int _recurse(int *array, size_t size, int value)
{
	size_t mid = size / 2;
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
	{
		if (mid > 0)
			return (_recurse(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (_recurse(array, mid + 1, value));

	mid++;
	return (_recurse(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - calls to _recurse to return
 * the index of the number
 *
 * @array: input array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = _recurse(array, size, value);
	if (i >= 0 && array[i] != value)
		return (-1);
	return (i);
}
