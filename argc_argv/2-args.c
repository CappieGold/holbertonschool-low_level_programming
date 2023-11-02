#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: argument
 * @argv: argument 
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
