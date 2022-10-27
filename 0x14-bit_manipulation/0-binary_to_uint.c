#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to the string of 0's and 1's
 * Return: an unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int i, bin;

	if (!b)
		return (0);

	uint = 0;
	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, bin = 1; i >= 0; i--, bin *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] & 1)
			uint += bin;
	}
	return (uint);
}

