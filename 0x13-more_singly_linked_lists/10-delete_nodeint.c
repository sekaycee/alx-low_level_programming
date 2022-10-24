#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * of a listint_t
 * @head: head of a list
 * @index: index of the list where the node is deleted
 * Return: 1 if it success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *prev, *next;

	prev = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev; i++)
			prev = prev->next;
	}

	if (!prev || (!prev->next && index != 0))
		return (-1);

	next = prev->next;
	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}

