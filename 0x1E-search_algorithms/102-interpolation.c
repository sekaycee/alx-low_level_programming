#include "search_algos.h"

/**
 * interpolation_search - Search for a value in an array of integers using
 *                        the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the number - if value is in array
 *         -1 - otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pos, low, high;
	double f;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]);
		f *= (value - array[low]);
		pos = (size_t)(low + f);
		printf("Value checked array[%d]", pos);
		if (pos >= (int)size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}
	return (-1);
}
