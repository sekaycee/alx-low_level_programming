#include "lists.h"

/**
 * sum_listint - return the sum of all the data (n) of a listint_t
 * @head: head of a list
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);

	for (sum = 0; head; head = head->next)
		sum += head->n;
	return (sum);
}

