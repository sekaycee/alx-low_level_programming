#include "lists.h"

/**
 * list_len - return the number of nodes in a list
 * @h: singly linked list
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}

