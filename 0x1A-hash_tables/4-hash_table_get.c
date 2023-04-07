#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/*
 *
 *
 */
hash_node_t *hash_table_get_node(const hash_table_t *ht, const char *key) {
    size_t bucket_index = hash_function(key) % ht->size;
    hash_node_t *node = ht->buckets[bucket_index];
    while (node != NULL && strcmp(node->key, key) != 0) {
        node = node->next;
    }
    return node;
}

char *hash_table_get(const hash_table_t *ht, const char *key) {
    hash_node_t *node = hash_table_get_node(ht, key);
    if (node == NULL) {
        return NULL;
    } else {
        return node->value;
    }
}
