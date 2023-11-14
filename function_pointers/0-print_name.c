#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name.
 * @name: name of the person
 * @f: pointer of function printname
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
