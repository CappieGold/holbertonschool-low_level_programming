#include "main.h"

/**
 * more_numbers - 0 to 14, 10 times
 */

void more_numbers(void)
{
	int times = 1;
	int num;

	while (times++ <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
