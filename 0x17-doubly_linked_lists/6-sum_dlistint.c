#include "lists.h"

/**
 * sum_dlistint - return the sum of all numbers in nodes
 * @head: pointer to head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
