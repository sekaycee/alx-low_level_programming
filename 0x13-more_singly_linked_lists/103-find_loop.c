#include "lists.h"

/**
 * find_listint_loop - find a loop and the beginning of loop
 * @head: head of a list
 * Return: pointer to the beginning of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	if (!head || !head->next)
		return (0);

	a = b = head;
	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;
		if (a == b)
			break;
	}

	if (a != b)
		return (0);

	for (a = head; a != b; a = a->next)
		b = b->next;
	return (b);
}

