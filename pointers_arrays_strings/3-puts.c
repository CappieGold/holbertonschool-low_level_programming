#include "main.h"

/**
 * void_puts - prints a string
 * @str: string of charactere 
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
