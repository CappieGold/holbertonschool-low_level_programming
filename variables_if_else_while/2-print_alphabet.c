#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	putchar('\n');

	return (0);
}
