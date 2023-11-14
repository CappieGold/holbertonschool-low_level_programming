#include"function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Write a function that executes a function given as a
 * parameter on each element of an array.
 * @array: array of integer
 * @size: size of the array
 * @action: pointer to the function i use to print
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size || action)
	{
		while (size-- > 0)
	{
		action(*array);
		array++;
	}
	}
}
