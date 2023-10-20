#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int space, diag;

	if (n > 0)
	{
		for (space = 0; space < n; space++)
		{
			for (diag = 0; diag < space; diag++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
