#include "lists.h"

/**
 * print_listint - print all the nodes of a listint_t
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}

