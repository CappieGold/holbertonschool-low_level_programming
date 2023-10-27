#include "main.h"

/**
 * int_strspn - Write a function that gets the length of a prefix substring.
 * @s: pointer string char
 * @accept: char i search
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j = 0;
		int found = 0;

		for (j = 0; j[accept] != '\0'; j++)
		{
			if (s[i] == j[accept])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
	}
	return (i);
}
