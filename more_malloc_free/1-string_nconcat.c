#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Write a function that concatenates two strings.
 * @s1: string after what i want concatenate
 * @s2: string concatenate after s1
 * @n: number of charactere i want concatenate of s2 after s1
 * Return: pointer to the concatenate
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenates;
	unsigned int lenght = n, index = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		lenght++;

	concatenates = malloc(sizeof(char) * (lenght + 1));

	if (concatenates == NULL)
		return (NULL);

	lenght = 0;

	for (index = 0; s1[index]; index++)
		concatenates[lenght++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concatenates[lenght++] = s2[index];

	concatenates[lenght] = '\0';
	return (concatenates);
}
