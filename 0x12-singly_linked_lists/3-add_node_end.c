#include "lists.h"

/**
 * add_node_end - add a new node at the end
 * of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn, *tmp;
	size_t nc;

	nn = malloc(sizeof(list_t));
	if (!nn)
		return (0);

	nn->str = strdup(str);
	for (nc = 0; str[nc]; nc++)
		;

	nn->len = nc;
	nn->next = NULL;
	tmp = *head;
	if (!tmp)
	{
		*head = nn;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = nn;
	}
	return (*head);
}

