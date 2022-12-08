#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a list
 * @head: pointer to first node
 * @index: node index
 * Return: nth node of linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = NULL;

	if (!head)
		return (0);

	tmp = head;
	for (i = 0; tmp; i++)
	{
		if (index == 0)
			return (tmp);

		tmp = tmp->next;
		if (i == (index - 1) && index != 0)
			return (tmp);
	}
	return (0);
}
