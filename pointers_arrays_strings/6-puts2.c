#include "main.h"

/**
 * puts2 - print % 2 = 0
 * @str: 0 to 9
 */

void puts2(char *str)
{
	int index = 0;
	int n = 0;

	while (str[index] != '\0')
		index++;

	for (n = 0; n <= index; n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
