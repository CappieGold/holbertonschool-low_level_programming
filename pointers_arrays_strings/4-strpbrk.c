#include "main.h"
#include <stdlib.h>

/**
 * *_strpbrk - Write a function that searches a string for any of a set of byte
 * @s: poiter to a string
 * @accept: what we search
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
