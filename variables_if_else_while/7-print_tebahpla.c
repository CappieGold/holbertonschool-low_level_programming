#include <stdio.h>

/**
 * main - z to a
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'z';

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);

	putchar('\n');

	return (0);
}
