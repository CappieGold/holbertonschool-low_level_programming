#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Is the hash table you want to look into
 * @key: The key you are looking for.
 * Return: Value associated with the element or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *Index_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	Index_node = ht->array[index];

	while (Index_node != NULL)
	{
		if (strcmp(Index_node->key, key) == 0)
			return (Index_node->value);
		Index_node = Index_node->next;
	}

	return (NULL);
}
