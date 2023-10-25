#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int sum = 0;

	while (s1[index])
	{
		if (s1[index] != s2[index])
			sum = s1[index] - s2[index];
		return (sum);
	}
	return (sum);
}
