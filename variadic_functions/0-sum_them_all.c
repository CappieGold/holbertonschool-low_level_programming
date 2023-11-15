#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: constant of parametre sum
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);
}
