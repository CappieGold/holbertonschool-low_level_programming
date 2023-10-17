#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: output number
 * Return: %10
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		_putchar(-last + '0');
		return (-last);
	}

	else
	{
		_putchar(last + '0');
		return (last);
	}
}
