#include "main.h"

/**
 * _print_rev_recursion - main function that prints string
 * @s: function string to print
 *
 * Return: always 0
 */

void _print_rev_recursion(char *s)

{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
