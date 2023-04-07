#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}

	for (size_t i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->buckets[i];
		while (node != NULL)
		{
			hash_node_t *next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
		ht->buckets[i] = NULL;
	}
	free(ht->buckets);
	free(ht);
}
