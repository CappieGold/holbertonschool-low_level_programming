#include "3-calc.h"
#include "stdlib.h"

/**
 * op_add - a + b
 * @a: num 1
 * @b: num 2
 * Return: (sum a+b)
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a - b
 * @a: num 1
 * @b: num 2
 * Return: (a - b)
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: num 1
 * @b: num 2
 * Return: (a * b)
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: num 1
 * @b: num 2
 * Return: (a / b)
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: num 1
 * @b: num 2
 * Return: (a % b)
*/

int op_mod(int a, int b)
{
	return (a % b);
}
