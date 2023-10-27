#include "main.h"
#include <stdlib.h>

/**
 * *_strstr - Write a function that locates a substring.
 * @haystack: where i search
 * @needle: what i search
 * Return: NULL if not found or needle if is found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[j + i] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
