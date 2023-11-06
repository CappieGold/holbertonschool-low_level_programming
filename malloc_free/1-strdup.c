#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Write a function that returns a pointer to a newly allocated
 *  space in memory, which contains a copy of the string given as a parameter.
 *  @str: string to duplicate
 *  Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *duplicate;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[size] != '\0'; i++)
	{
		size++;
	}

	duplicate = malloc(sizeof(char) * (size + 1));

	if (duplicate == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		duplicate[i] = str[i];
	}

	duplicate[i] = '\0';

	return (duplicate);

}
