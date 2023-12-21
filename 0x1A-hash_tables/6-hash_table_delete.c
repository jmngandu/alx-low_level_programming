#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: input hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	register unsigned int i = 0;
	hash_node_t *curr, *tmp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				tmp = curr;
				free(curr->key);
				if (curr->value)
					free(curr->value);
				curr = curr->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
