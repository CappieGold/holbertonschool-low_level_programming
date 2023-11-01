#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: argumnt
 * @argv: unused
 * Return: always 0 (Success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
