#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while ((tmp = node) != NULL)
			{
				node = node->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp;
			}
		}
	}
	free(table->array);
	free(table);
}
