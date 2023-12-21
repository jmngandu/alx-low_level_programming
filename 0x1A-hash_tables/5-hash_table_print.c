#include "hash_tables.h"
#include <stdbool.h>

/**
 * hash_table_print - prints a hash table
 * @ht: input ht
 */
void hash_table_print(const hash_table_t *ht)
{
	register unsigned int i = 0;
	hash_node_t *curr = NULL;
	_Bool first = true;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				if (!first)
					printf(", ");
				printf("'%s': '%s'", curr->key, curr->value);
				first = false;
				curr = curr->next;
			}
		}
	}
	printf("}\n");
}
