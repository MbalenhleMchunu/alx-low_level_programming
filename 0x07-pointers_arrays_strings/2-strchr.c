#include "main.h"

/**
  * _strchr - main function entry point
  * @s: Input function parameter
  * @c: Input function parameter
  *
  * Return: Always o (Success)
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
