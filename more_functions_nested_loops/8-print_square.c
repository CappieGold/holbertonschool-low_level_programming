#include "main.h"

/**
 * print_square - draw square
 * @size: size of my square
 */

void print_square(int size)
{
	int larg, lenght;

	if (size > 0)
	{
		for (lenght = 0; lenght < size; lenght++)
		{
			for (larg = 0; larg < size; larg++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
