#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * key_index - Write a function that gives you the index of a key.
 * @key: where key is the key.
 * @size: size of the array of the hash table.
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
