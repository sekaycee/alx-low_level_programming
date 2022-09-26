#include "main.h"

/**
 * _memset - fill memort with a constant byte
 * @s: memory area
 * @b: filler byte
 * @n: fill limit
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

