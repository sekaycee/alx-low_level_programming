#include "lists.h"

/**
 * listint_len - return the number of elements in
 * a linked list
 * @h: head of a list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}

