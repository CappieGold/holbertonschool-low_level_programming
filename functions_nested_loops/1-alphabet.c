#include "main.h"

/**
 * print_alphabet - display alphabet a to z
 */

void print_alphabet(void)
{
	char lowercase = 'a';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);

	_putchar('\n');
}
