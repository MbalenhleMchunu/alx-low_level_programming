#include "main.h"
/**
 * _strpbrk - Main function entry point
 * @s: input function parameter
 * @accept: input function parameter
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

