#include "search_algos.h"

/**
 * interpolation_search - Search for a value in an array of integers using
 *                        the Interpolation search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the number - if value is in array
 *         -1 - otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pp, lo, hi;
	float f;

	if (!array)
		return (-1);

	lo = 0;
	hi = size - 1;
	while (size)
	{
		f = (hi - lo) / (array[hi] - array[lo]) * (value - array[lo]);
		pp = lo + f;
		printf("Value checked array[%d]", pp);
		if (pp >= (int)size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pp]);

		if (array[pp] == value)
			return (pp);

		if (array[pp] < value)
			lo = pp + 1;
		else
			hi = pp - 1;

		if (lo == hi)
			break;
	}
	return (-1);
}
