#include "main.h"

/**
 * print_triangle - draw triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int diag, triangle;

	if (size > 0)
	{
		for (diag = 1; diag <= size; diag++)
		{
			for (triangle = size - diag; triangle > 0; triangle--)
				_putchar(' ');

			for (triangle = 0; triangle < diag; triangle++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
