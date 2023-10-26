#include "main.h"

/**
 * *leet - Write a function that encodes a string into 1337.
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int index = 0;
	int index2 = 0;
	char tab[] = "aAeEoOtTlL";
	char tab2[] = "4433007711";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index2 = 0; index2 <= 10; index2++)
		{
			if (s[index] == tab[index2])
				s[index] = tab2[index2];
		}
	}
	return (s);
}
