#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp2, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp2 = ht->array[i];
		while ((tmp = tmp2) != NULL)
		{
			tmp2 = tmp2->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
