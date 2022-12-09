#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tmp;
	unsigned int i;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		if (tmp)
			while (tmp->prev)
				tmp = tmp->prev;
		for (i = 1; tmp; i++)
		{
			if (i == idx)
			{
				if (!tmp->next)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node)
					{
						new_node->n = n;
						new_node->next = tmp->next;
						new_node->prev = tmp;
						tmp->next->prev = new_node;
						tmp->next = new_node;
					}
				}
				break;
			}
			tmp = tmp->next;
		}
	}

	return (new_node);
}
