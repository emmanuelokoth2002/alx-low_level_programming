#include "hash_tables.h"
#include <stdio.h>

void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}

	printf("{\n");
	for (size_t i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->buckets[i];
		while (node != NULL)
		{
			printf("  '%s': '%s'\n", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
