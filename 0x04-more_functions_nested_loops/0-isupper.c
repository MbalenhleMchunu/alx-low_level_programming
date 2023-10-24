#include "main.h"

/**
 * _isupper - main function for checking uppercase letters
 * @c: input character to check
 *
 * Return: 0 for lowercase or 1 for uppercase
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
