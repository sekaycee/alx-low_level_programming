#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t
 * @head: head of a list
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	if (!head)
		return (0);

	for (i = 0; i < index && head; i++)
		head = head->next;
	return (head);
}

