#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i,j;

	for (i = 0; a[i] < a[8]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
