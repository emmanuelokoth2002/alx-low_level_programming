int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    // Make sure the key is not an empty string
    if (strlen(key) == 0) {
        return 0;
    }

    // Calculate the index at which the key/value pair should be stored
    unsigned long int index = key_index((const unsigned char *)key, ht->size);

    // Create a new node to store the key/value pair
    node_t *new_node = malloc(sizeof(node_t));
    if (!new_node) {
        return 0; // Failed to allocate memory for new node
    }
    new_node->key = strdup(key); // Duplicate the key string
    new_node->value = strdup(value); // Duplicate the value string

    // Add the new node to the beginning of the linked list at the calculated index
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}
