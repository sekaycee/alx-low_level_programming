#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: current head address
 * @n: number to fill the node
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp = *head;

	if (!head)
		return (0);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}

