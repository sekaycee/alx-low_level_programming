#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node
 * at a given position
 * @head: head of a list
 * @idx: index of the new node
 * @n: number to fill new node
 * Return: the address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *new, *in; /* insert node */

	in = *head;
	if (idx != 0)
		for (i = 0; i < idx - 1 && in; i++)
			in = in->next;

	new = malloc(sizeof(listint_t));
	if (!new || (!in && idx != 0))
		return (0);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = in->next;
		in->next = new;
	}

	return (new);
}

