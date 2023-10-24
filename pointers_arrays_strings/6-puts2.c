#include "main.h"

/**
 * puts2 - print % 2 = 0
 * @str: 0 to 9
 */

void puts2(char *str)
{
	int index = 0;

	for (index = 0; index <= 9; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
