#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 * @separator: separator of my arguments
 * @n: number of argument
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator)
		{
			printf("%d", va_arg(ap, int));
			printf("%s", separator);
		}

		if (i == n - 1)
		{
			printf("%d", va_arg(ap, int));
		}

		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
}
