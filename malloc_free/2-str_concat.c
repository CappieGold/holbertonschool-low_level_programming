#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings.
 * @s1: string i want concetenate
 * @s2: string i want concetenate after s1
 * Return: pointer of my concetenate or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int index = 0;
	int index2 = 0;
	int size = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index] != '\0' || s2[index] != '\0'; index++)
	{
		size++;
	}

	concat = malloc(sizeof(char) * size);

	if (concat == 0)
	{
		return (NULL);
	}

	for (index = 0; s1[index]; index++)
	{
		concat[index2++] = s1[index];
	}

	for (index = 0; s2[index]; index++)
	{
		concat[index2++] = s2[index];
	}

	return (concat);
}
