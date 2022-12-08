#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index position
 * of a linked list
 * @head: pointer to head in function
 * @index: index or position to be added
 * Return: 1 success -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int nodes;

	if (!head || !*head)
		return (-1);

	curr = *head;
	for (nodes = 0; curr && nodes < index; nodes++)
		curr = curr->next;

	if (!curr)
		return (-1);
	if (*head == curr)
		*head = curr->next;
	if (curr->next)
		curr->next->prev = curr->prev;
	if (curr->prev)
		curr->prev->next = curr->next;

	free(curr);
	return (1);
}
