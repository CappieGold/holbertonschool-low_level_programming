#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: factorial
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else if (n == 0)
		return (1);
	else
		return (-1);
}
