#include "main.h"

/**
 * _isalpha - c lower or upper return 1
 * @c: output character
 * Return: 1 (Success)
 */

int _isalpha(int c)
{
	return (( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'));
}	
