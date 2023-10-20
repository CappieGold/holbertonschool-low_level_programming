#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int space;

	if (n > 0)
	{
		for (space = 0; space < n; space++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
