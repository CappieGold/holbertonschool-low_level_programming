#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Write a function that creates an array of integers.
 * @min: minimum of array
 * @max: maximum of array
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *array;
	int index;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (array == 0)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
