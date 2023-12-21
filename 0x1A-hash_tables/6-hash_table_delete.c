#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
