#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: pointer to head in fucntion
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
