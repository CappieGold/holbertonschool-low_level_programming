#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of octet want to copy
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; index < n && src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
