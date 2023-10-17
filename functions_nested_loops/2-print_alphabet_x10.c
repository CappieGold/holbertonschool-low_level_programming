#include "main.h"

/**
 * print_alphabet_x10 - display 10x aphabet
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int num = 0;

	while (num++ <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
