#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: the hash table to search in
 * @key: the key to look for
 *
 * Return: the value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	for (node = ht->array[index]; node != NULL; node = node->next)
	if (strcmp(node->key, key) == 0)
		return (node->value);

	return (NULL);
}
