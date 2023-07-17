#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: array size
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	/* creates a new hash_table */
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
