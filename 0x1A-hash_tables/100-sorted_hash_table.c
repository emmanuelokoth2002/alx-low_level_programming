#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: Size of the array.
 *
 * Return: Pointer to the created hash table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;
	unsigned long int i = 0;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
		return (NULL);

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: Pointer to the hash table.
 * @key: Key of the element.
 * @value: Value of the element.
 *
 * Return: 1 if success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node = NULL, *tmp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
		{
			ht->shead = new_node;
			ht->stail = new_node;
			new_node->sprev = NULL;
			new_node->snext = NULL;
		}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
		{
			new_node->sprev = NULL;
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
	else
		{
			tmp = ht->shead;
			while (tmp->snext != NULL && strcmp(new_node->key, tmp->snext->key) >= 0)
				tmp = tmp->snext;
			new_node->sprev = tmp;
			new_node->snext = tmp->snext;
			if (tmp->snext == NULL)
				ht->stail = new_node;
			else
				tmp->snext->sprev = new_node;
				tmp->snext = new_node;
		}
	return (1);
}
/**
 * shash_table_print - prints the key/value pairs in the hash table
 * using the sorted linked list
 *
 * @ht: the hash table to print
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
			node = node->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints the hash table's key
 * using the sorted linked list.
 *
 * @ht: A pointer to the hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;


	if (ht == NULL)
	return;

	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *temp_node;
	unsigned long int i;



	if (!ht)
	return;

	current_node = ht->shead;
	while (current_node)
	{
		temp_node = current_node;
		current_node = current_node->snext;
		free(temp_node->key);
		free(temp_node->value);
		free(temp_node);
	}
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			temp_node = current_node;
			current_node = current_node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}
	free(ht->array);
	free(ht);
}
