#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: pointer to first node
 * @n: given int to be added
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (new_node);
}
