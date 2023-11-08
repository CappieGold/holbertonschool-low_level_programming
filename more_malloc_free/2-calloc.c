#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: number of element i want
 * @size: size of element
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (size * nmemb); index++)
	{
		array[index] = '\0';
	}

	return ((void *)array);
}
