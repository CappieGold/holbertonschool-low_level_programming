#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *Index_node;
	int flag = 0;

	if (!ht)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		Index_node = ht->array[index];
		while (Index_node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", Index_node->key, Index_node->value);
			flag = 1;
			Index_node = Index_node->next;
		}
	}
	printf("}\n");
}
