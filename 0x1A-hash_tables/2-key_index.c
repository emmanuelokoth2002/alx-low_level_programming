#include "hash_tables.h"
#include <string.h>

/**
 * key_index - Calculate the hash value of the key using the djb2 algorithm
 * index : calculate an index within the size of the hash table
 * @key:allocates key to value
 * @size:size of hash table
 * Return:index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
