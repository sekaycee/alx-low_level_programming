#include "lists.h"

/**
 * sum_dlistint - return the sum of all numbers in nodes
 * @head: pointer to head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (temp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
