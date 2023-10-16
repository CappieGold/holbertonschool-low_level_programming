#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * main function: nombre aleatoire positive, negative ou zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	if (n < 0)
		printf("%d is negative\n", n);

	if (n == 0)
		printf("0 is zero\n");

	return (0);
}
