#include "lists.h"

/**
 * dlistint_len - return number of elements in a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	if (!h)
		return (0);

	temp = h;
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
