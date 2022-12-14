#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table
 * @size: the size of new sorted hash table
 * Return: if an error occurs - NULL
 * otherwise - a pointer to the new sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (0);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (0);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - add an element to a sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: the key to add - cannot be an empty string
 * @value: the value associated with key
 * Return: Upon failure - 0. otherwise - 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	char *valcpy;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valcpy = strdup(value);
	if (valcpy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = valcpy;
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(valcpy);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(valcpy);
		free(new);
		return (0);
	}

	new->value = valcpy;
	new->next = ht->array[i];
	ht->array[i] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - retrieve the value associated with
 * a key in a sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: the key to get the value of
 * Return: if the key cannot be matched - NULL
 * otherwise - the value associated with key in ht
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (0);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? 0 : node->value);
}

/**
 * shash_table_print - print a sorted hash table in order
 * @ht: pointer to the sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - print a sorted hash table in reverse order
 * @ht: pointer to the sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_delete - delete a sorted hash table
 * @ht: pointer to the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(ht->array);
	free(ht);
}
