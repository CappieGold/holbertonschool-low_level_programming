#include "main.h"

/**
 * find_sqrt - function that returns the natural square root of a number.
 * @a: number comparaison
 * @b: number mutiple
 * Return: b or -1
 */

int find_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	else
		return (find_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: num we saerch square root
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (find_sqrt(n, 0));
}
