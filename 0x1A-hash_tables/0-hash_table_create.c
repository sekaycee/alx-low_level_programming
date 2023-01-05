#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 * Return: if an error occurs - NULL
 * 	otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (0);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (0);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
