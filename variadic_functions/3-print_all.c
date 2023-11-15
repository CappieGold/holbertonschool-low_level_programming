#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - print all type of arg
 * @format: format
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0;
	char c;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}

		if (format[i + 1] && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(ap);
}
