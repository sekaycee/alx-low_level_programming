#include "main.h"

/**
 * clear_bit - change to 0 the bit of a given index
 * @n: the input number
 * @index: the input index
 * Return: 1 if success.. -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}

