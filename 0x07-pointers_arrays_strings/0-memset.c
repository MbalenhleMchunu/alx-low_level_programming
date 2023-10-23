#include "main.h"

/**
 * _memset - Entry point
 * @s: input starting address of memory to be filled
 * @b: input of the desired value
 * @n: input number of bytes to be changed
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

