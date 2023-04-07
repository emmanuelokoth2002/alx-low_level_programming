#include "hash_tables.h"

/*
 * Function to create a new hash table with the given size
 * i: Initialize each element of the table array to NULL
 * Return: returns a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		{
			fprintf(stderr, "Error: Failed to allocate memory for hash table\n");
			return (NULL);
		}
	for (int i = 0; i < MAX_SIZE; i++)
	{
		hash_table->table[i] = NULL;
	}
	return (hash_table);
}
