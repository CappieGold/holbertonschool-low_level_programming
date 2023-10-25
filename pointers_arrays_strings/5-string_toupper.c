#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str : pointer
 * Return: str
 */

char *string_toupper(char *str)
{
	int index = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
	}
	return (str);
}
