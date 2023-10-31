#include "main.h"

/**
 * find_prime_num - find prime num
 * @num: int want divided
 * @division: division fir num
 * Return: 1 if prime number 0 if not
 */

int find_prime_num(int num, int division)
{
	if (num % division == 0)
		return (0);
	else if (division == num / 2)
		return (1);
	return (find_prime_num(num, division + 1));
}

/**
 * is_prime_number - function return 1 is n prime number and 0 otherwise
 * @n: int prime number or not
 * Return: 1 if prime number or 0 if not
 */

int is_prime_number(int n)
{

	if (n >= 2 && n <= 3)
		return (1);
	if (n < 2)
		return (0);
	return (find_prime_num(n, 2));
}
