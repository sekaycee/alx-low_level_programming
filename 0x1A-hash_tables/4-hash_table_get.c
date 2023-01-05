#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash table you want to look into
 * @key: the key sought
 * Return: the value associated with the element else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (key == NULL || ht == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	for (; node != NULL; node = node->next)
		if (strcmp(node->key, key) == 0)
			return (node->value);

	return (0);
}
