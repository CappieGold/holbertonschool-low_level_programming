#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - Write a function that prints strings, followed by a new line
 * @separator: separator of my arg string
 * @n: number of arg
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", str);
			printf("%s", separator);
		}

		else if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}
	}
	printf("\n");
}
