#include <stdio.h>

/**
 * main - display alphabet in lowercase without q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
		if (lower != 'e' && lower != 'q')
			putchar(lower);

	putchar('\n');

	return (0);
}
