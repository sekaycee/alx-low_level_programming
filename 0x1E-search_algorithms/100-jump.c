#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search for a value in an array of integers using
 *               the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the number - if present in array
 *         -1 - otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int i, j, k, tmp;

	if (!array || size == 0)
		return (-1);

	j = (int)sqrt((double)size);
	i = k = tmp = 0;
	for (; i < (int)size && array[i] < value; k++, tmp = i, i = j * k)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	printf("Value found between indexes [%d] and [%d]\n", tmp, i);
	for (; tmp <= i && tmp < (int)size; tmp++)
	{
		printf("Value checked array[%d] = [%d]\n", tmp, array[tmp]);
		if (array[tmp] == value)
			return (tmp);
	}
	return (-1);
}
