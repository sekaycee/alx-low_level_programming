#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: memory size
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	a = malloc(nmemb * size);
	if (!a)
		return (0);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;

	return (a);
}

