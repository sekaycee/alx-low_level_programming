#include "main.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to old array.
 * @old_size: the size of ptr
 * @new_size: new size of array
 * Return: pointer to the new array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pm;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (0);
	}

	pm = malloc(new_size);
	if (!pm)
		return (0);
	for (i = 0; i < old_size; i++)
		pm[i] = *((char *)ptr + i);

	free(ptr);
	return (pm);
}

