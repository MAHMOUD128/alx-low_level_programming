#include "hash_tables.h"
#include <string.h>

/**
 * create_node - allocate memory for a node.
 * @key: key to be used.
 * @value: value associated with key.
 *
 * Return: pointer to node.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	/**
	 * try to instantiate node to insert word
	 * creates a pointer to a new hash_node_t
	 */
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	node->next = NULL;
	if (!node->key || !node->value)
		return (NULL);
	/* make a new pointer */
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: key to be used.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	size_t index;

	if (!ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	if (!ht->array[index]) /* check for empty list */
		/* key does not exist */
		/* insert directly */
	{
		node = create_node(key, value);
		if (node)
			ht->array[index] = node;
		else
			return (0);
	}
	else
	{
		/* handle the collision */
		hash_node_t *ptr = ht->array[index];

		do {
			/* scenario 1: update the value */
			if (!strcmp(ptr->key, key))
			{
				strcpy(ptr->value, value);
				return (1);
			}
			ptr = ptr->next; /* update pointer */
		} while (ptr);
		/* scenario 2: insertion at head */
		node = create_node(key, value);
		if (!node)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
