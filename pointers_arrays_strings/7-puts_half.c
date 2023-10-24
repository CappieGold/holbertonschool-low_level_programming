#include "main.h"

/**
 * puts_half - prints half of a strinf
 * @str: pointer
 */

void puts_half(char *str)
{
	int lenght = 0;
	int index;

	while (str[lenght] != '\0')
		lenght++;

	for (index = lenght / 2; index < lenght; index++)
	{
		if (lenght % 2 != 0)
			_putchar(str[index] / 2);
		else
			_putchar(str[index]);
	}
	_putchar('\n');
}
