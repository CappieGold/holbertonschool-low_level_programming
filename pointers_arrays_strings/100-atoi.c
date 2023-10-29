#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer.
 * @s: string i want to convert
 * Return: result integer
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -sign;

		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + sign * (s[i] - '0');

		else if (result != 0)
			break;
	}
	return (result);
}
