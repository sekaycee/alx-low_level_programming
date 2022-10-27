#include "main.h"

/**
 * set_bit - change to 1 the bit of a given index
 * @n: the input number
 * @index: the input index
 * Return: 1 if success.. -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n |= m;
	return (1);
}

