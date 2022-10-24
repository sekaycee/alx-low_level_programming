#include "lists.h"

/**
 * print_listint - print all the nodes of a listibt_t list
 * h: the first element in the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}

