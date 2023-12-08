#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - Create a sorted hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(shash_node_t *));
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Set a key/value pair in the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key.
 * @value: The value.
 * Return: 1 on success, 0 on failure.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *Index_node;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	Index_node = ht->array[index];
	while (Index_node != NULL)
	{
		if (strcmp(Index_node->key, key) == 0)
		{
			free(Index_node->value);
			Index_node->value = strdup(value);
			if (!Index_node->value)
				return (0);
			return (1);
		}
		Index_node = Index_node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key), free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (insert_sorted_node(ht, new_node) == 0)
		return (0);
	return (1);
}

/**
 * shash_table_get - Get the value associated with a key
 * in the sorted hash table.
 *
 * @ht: The sorted hash table.
 * @key: The key.
 * Return: The value associated with the key, or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *Index_node;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	Index_node = ht->array[index];

	while (Index_node != NULL)
	{
		if (strcmp(Index_node->key, key) == 0)
			return (Index_node->value);
		Index_node = Index_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table.
 * @ht: The sorted hash table.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *Index_node;

	if (!ht)
		return;

	Index_node = ht->shead;
	printf("{");
	while (Index_node != NULL)
	{
		printf("'%s': '%s'", Index_node->key, Index_node->value);
		Index_node = Index_node->snext;
		if (Index_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order.
 * @ht: The sorted hash table.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *Index_node;

	if (!ht)
		return;

	Index_node = ht->stail;
	printf("{");
	while (Index_node != NULL)
	{
		printf("'%s': '%s'", Index_node->key, Index_node->value);
		Index_node = Index_node->sprev;
		if (Index_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table and free its memory.
 * @ht: The sorted hash table.
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *Index_node, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		Index_node = ht->array[i];
		while (Index_node != NULL)
		{
			temp = Index_node->next;
			free(Index_node->key);
			free(Index_node->value);
			free(Index_node);
			Index_node = temp;
		}
	}

	free(ht->array);

	Index_node = ht->shead;
	while (Index_node != NULL)
	{
		temp = Index_node->snext;
		free(Index_node->key);
		free(Index_node->value);
		free(Index_node);
		Index_node = temp;
	}

	free(ht);
}

/**
 * insert_sorted_node - Insert a node into the sorted linked list.
 * @ht: The sorted hash table.
 * @new_node: The node to be inserted.
 * Return: 1 on success, 0 on failure.
 */

int insert_sorted_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *Index_node;

	if (!ht || !new_node)
		return (0);

	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
		return (1);
	}

	Index_node = ht->shead;

	while (Index_node != NULL)
	{
		if (strcmp(new_node->key, Index_node->key) < 0)
		{
			if (!Index_node->sprev)
				ht->shead = new_node;
			else
				Index_node->sprev->snext = new_node;

			new_node->sprev = Index_node->sprev;
			new_node->snext = Index_node;
			Index_node->sprev = new_node;

			return (1);
		}
		Index_node = Index_node->snext;
	}

	ht->stail->snext = new_node;
	new_node->sprev = ht->stail;
	new_node->snext = NULL;
	ht->stail = new_node;

	return (1);
}
