#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int index = 0;
	int swap;

	for (index = 0; index < n / 2; index++)
	{
		swap = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = swap;
	}
}
