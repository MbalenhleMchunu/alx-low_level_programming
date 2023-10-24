#include "main.h"

/**
 * _isdigit - checks for digits 0 - 9
 * @c: input character to be checked
 *
 * Return: 0 for any other or 1 for digit
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}

