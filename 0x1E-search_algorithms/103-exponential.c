#include "search_algos.h"

/**
 * _bsearch - Search for a value in a sorted array
 *            of integers using binary search
 *
 * @array: a pointer to the first element of the array to search
 * @prev: the starting index of the [sub]array to search
 * @next: the ending index of the [sub]array to search
 * @value: the value to search for
 * Return: -1 - if the value is not present or the array is NULL
 *         the index where the value is located - otherwise
 *
 * Description: Print the [sub]array being searched after each change
 */
int _bsearch(int *array, size_t prev, size_t next, int value)
{
	size_t i;

	if (!array)
		return (-1);

	while (next >= prev)
	{
		printf("Searching in array: ");
		for (i = prev; i < next; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = prev + (next - prev) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			next = i - 1;
		else
			prev = i + 1;
	}
	return (-1);
}

/**
 * exponential_search - Search for a value in a sorted array
 *                      of integers using exponential search
 *
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: -1 - If the value is not present or the array is NULL
 *         the index where the value is located - otherwise
 *
 * Description: Print a value every time it is compared in the array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, next;

	if (!array)
		return (-1);

	if (array[0] != value)
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	next = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, next);
	return (_bsearch(array, i / 2, next, value));
}
