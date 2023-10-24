#include <stdio.h>

/**
 * print_array - print elements of an array of integer
 * @a: pointer array
 * @n: variable compteur
 */

void print_array(int *a, int n)
{
	int index = 0;

	for (index = 0; index < n; index++)
	{
		if (index == 0)
			printf("%d", a[index]);
		else
			printf(", %d", a[index]);
	}
	printf("\n");
}
