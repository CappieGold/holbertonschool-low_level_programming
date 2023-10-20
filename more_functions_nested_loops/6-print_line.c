#include "main.h"

/**
 * print_line - draw line
 * @n: variable number of times
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}

