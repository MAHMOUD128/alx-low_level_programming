#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash_table.
 * @ht: hash_table.
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t index;
	hash_node_t *node, *tmp;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			if (node)
			{
				do {
					free(node->key);
					free(node->value);
					tmp = node;
					node = node->next;
					free(tmp);
				} while (node);
			}
		}
		free(ht->array);
		free(ht);
	}
}
