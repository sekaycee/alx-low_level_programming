#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn; /* new node */
	size_t nc;

	nn = malloc(sizeof(list_t));
	if (!nn)
		return (0);

	nn->str = strdup(str);
	for (nc = 0; str[nc]; nc++)
		;

	nn->len = nc;
	nn->next = *head;
	*head = nn;
	return (*head);
}

