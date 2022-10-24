#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t
 * @head: head of the list
 * Return: number in node popped
 */
int pop_listint(listint_t **head)
{
	listint_t *nh; /* new head */
	int n;

	if (!head || !*head)
		return (0);

	nh = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nh;
	return (n);
}

