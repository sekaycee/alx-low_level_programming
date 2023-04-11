#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
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
		return (recursive_search(array, mid, value));

	mid++;
	return (recursive_search(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - Wrap binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);
	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
