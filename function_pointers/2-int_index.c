#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Write a function that searches for an integer.
 * @array: array of int
 * @size: number of elements in the array
 * @cmp: pointer to the function to be udes to compare values
 * Return: -1 error
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (!array || !cmp)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
