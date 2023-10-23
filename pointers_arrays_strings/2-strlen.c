#include "main.h"

/**
 * _strlen - return lenght of a string
 * @s: pointers of my lenght
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s++)
		lenght++;

	return (lenght);
}
