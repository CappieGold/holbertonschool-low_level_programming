#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointeur
 */

void rev_string(char *s)
{
	int index = 0;
	char swap;
	int index2;

	while (s[index] != '\0')
		index++;

	for (index2 = 0; index2 < index; index2++)
	{
		index--;
		swap = s[index2];
		s[index2] = s[index];
		s[index] = swap;
		
	}
}
