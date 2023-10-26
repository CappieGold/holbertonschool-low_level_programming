#include "main.h"
#include <stdlib.h>

/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: string char
 * @c: the char i want locate
 * Return: c if i found 0 not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
			return (s + i);
		if (s[i] == '\0')
			return (NULL);
	}
}
