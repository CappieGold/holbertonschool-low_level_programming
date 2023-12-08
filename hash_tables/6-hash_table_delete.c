#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht: The hash table to delete.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *Index_node, *tempon;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		Index_node = ht->array[index];
		while (Index_node != NULL)
		{
			tempon = Index_node->next;
			free(Index_node->key);
			free(Index_node->value);
			free(Index_node);
			Index_node = tempon;
		}
	}
	free(ht->array);
	free(ht);
}
