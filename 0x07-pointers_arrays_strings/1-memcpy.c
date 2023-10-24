#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input memory where is stored
 * @src: input memory where is copied
 * @n: input number of bytes
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		dest[r] = src[r];
		n--;

	}
	return (dest);
}
