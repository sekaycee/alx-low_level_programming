#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list
 * @n: number to fill node
 * Return: address of the new element. NUll if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (0);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

