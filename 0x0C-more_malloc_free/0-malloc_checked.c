#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: buffer size
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (!m)
		exit(98);
	return (m);
}

