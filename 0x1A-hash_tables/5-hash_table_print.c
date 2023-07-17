#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash_table.
 * @ht: hash_table.
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t index;
	hash_node_t *node;
	char printed = 0;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			/* provide only non-NULL values */
			if (node)
			{
				if (printed)
					printf(", ");
				do {
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
					if (node)
						printf(", ");
				} while (node);
				printed = 1;
			}
		}
		printf("}\n");
	}
}
