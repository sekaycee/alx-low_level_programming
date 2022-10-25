#include "lists.h"

/**
 * print_listint - print all the elements of a list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c;

	for (c = 0; h; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}

