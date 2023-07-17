#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to look into.
 * @key: key you are looking for.
 *
 * Return: value associated with element, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *node;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	/* provide only non-NULL values */
	if (node)
	{
		do {
			if (!strcmp(node->key, key))
				return (node->value);
			node = node->next;
		} while (node);
	}
	return (NULL);
}
