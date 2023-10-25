#include "main.h"

/**
 * *_strncpy - Write a function that copies a string.
 * @dest: destination
 * @src: source
 * @n: want to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	for (; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
