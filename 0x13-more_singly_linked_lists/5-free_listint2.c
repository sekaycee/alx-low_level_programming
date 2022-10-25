#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *tmp;

	if (head)
	{
		curr = *head;
		for (curr = *head; tmp = curr; curr = curr->next)
			free(tmp);
		*head = NULL;
	}
}

