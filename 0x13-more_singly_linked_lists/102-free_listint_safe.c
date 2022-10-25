#include "lists.h"

/**
 * free_listp2 - free a linked list
 * @head: head of a list
 */
void free_listp2(listp_t **head)
{
	listp_t *curr, *tmp;

	if (head)
	{
		curr = *head;
		while ((tmp = curr))
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - free a linked list
 * @h: head of a list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listp_t *hptr, *new, *sum;
	listint_t *curr;

	hptr = NULL;
	while (*h)
	{
		new = malloc(sizeof(listp_t));
		if (!new)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;
		sum = hptr;
		while (sum->next)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (node);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		node++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (node);
}

