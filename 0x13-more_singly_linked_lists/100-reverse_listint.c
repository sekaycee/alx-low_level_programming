#include "lists.h"

/**
 * reverse_listint - reverse a listint_t
 * @head: head of a listint_t
 * Return: pointer to the first node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}

