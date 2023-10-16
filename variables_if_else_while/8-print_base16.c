#include <stdio.h>

/**
 * main - number of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		putchar(48 + i);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar(10);

	return (0);
}
