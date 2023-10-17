#include "main.h"

/**
 * print_sign - return -1, 0, 1 if n inferieure, egale ou sup a 0
 * @n: output num
 * Return: -1, 0, 1 (Success)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	return (0);
}
