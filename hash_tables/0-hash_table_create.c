#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - Write a function that creates a hash table.
 * @size: where size is the size of the array
 * Return: Returns a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* NewTable = (hash_table_t*) malloc(sizeof(hash_table_t));

	if (NewTable == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	NewTable->size = size;
	NewTable->array = calloc(NewTable->size, sizeof(NewTable->array));

	if (!NewTable->array)
		return (NULL);

	return (NewTable);
}
