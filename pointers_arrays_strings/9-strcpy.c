#include "main.h"

/**
 * *_strcpy - copie string
 * @dest: value to return
 * @src: pointer string
 * Return: *dest (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
