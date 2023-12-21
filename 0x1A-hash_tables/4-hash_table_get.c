#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value associated with a key in the hash table
 * @ht: The hash table to look into
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
