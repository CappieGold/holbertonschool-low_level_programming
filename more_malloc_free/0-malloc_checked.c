#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Write a function that allocates memory using malloc.
 * @b: size of malloc
 * Return: pointer to allocate memory
*/

void *malloc_checked(unsigned int b)
{
	void *allocate_memory;

	allocate_memory = malloc(b);

	if (allocate_memory == NULL)
	{
		exit(98);
	}

	return (allocate_memory);
}
