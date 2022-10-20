#include "lists.h"

/**
 * list_len - return the number of elements in a list
 * @h: singly linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t ec; /* element count */

	ec = 0;
	while (h)
	{
		h = h->next;
		ec++;
	}
	return (ec);
}

