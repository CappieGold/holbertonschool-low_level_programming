#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: destination for the copy
 * @src: souce of the copy
 * @n: n bytes want to change
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
