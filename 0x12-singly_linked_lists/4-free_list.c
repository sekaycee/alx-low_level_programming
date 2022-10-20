#include "lists.h"

/**
 * free_list - free a list
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
	list_t *curr; /* current node */

	while ((curr = head))
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}

