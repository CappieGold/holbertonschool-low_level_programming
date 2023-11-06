#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Write a function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of array
 * @c: content of array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arrayOfChar;

	if (size == 0)
	{
		return (NULL);
	}

	arrayOfChar = malloc(size * sizeof(c));

	if (arrayOfChar == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arrayOfChar[i] = c;
	}

	return (arrayOfChar);
}
