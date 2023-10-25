#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings
 * @dest: ce qu'on ajoute a la chaine src
 * @src : on ajoute dest a src
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] != '\0'; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
