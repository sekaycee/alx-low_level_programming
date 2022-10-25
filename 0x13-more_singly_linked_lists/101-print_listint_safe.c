#include "lists.h"

/**
 * free_listp - function that frees a linked list
 * @head: head of a list
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - function that prints a linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *hptr, *new, *sum;

	hptr = NULL;
	while (head)
	{
		new = malloc(sizeof(listp_t));
		if (!new)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;
		sum = hptr;
		while (sum->next)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}

	free_listp(&hptr);
	return (node);
}

