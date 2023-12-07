#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * hash_table_set - Write a function that adds an element to the hash table.
 * @ht: Hash table you want to add or update the key/value to.
 * @key: Is the key. key can not be an empty string.
 * @value: Value associated with the key. value must be duplicated. value can
 * be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *New_node, *Index_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	Index_node = ht->array[index];
	while (!Index_node)
	{
		if (strcmp(Index_node->key, key) == 0)
		{
			free(Index_node->value);
			Index_node->value = strdup(value);
			if (Index_node->value == NULL)
				return (0);
			return (1);
		}
		Index_node = Index_node->next;
	}
	New_node = malloc(sizeof(hash_node_t));
	if (!New_node)
		return (0);
	New_node->key = strdup(key);
	if (!New_node->key)
	{
		free(New_node);
		return (0);
	}
	New_node->value = strdup(value);
	if (!New_node->value)
	{
		free(New_node->key), free(New_node);
		return (0);
	}
	New_node->next = ht->array[index];
	ht->array[index] = New_node;
	return (1);
}
