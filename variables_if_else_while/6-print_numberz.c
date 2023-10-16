#include <stdio.h>

/**
 * main - 1 to 9 with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		putchar(48 + i);

	putchar(10);

	return (0);
}
