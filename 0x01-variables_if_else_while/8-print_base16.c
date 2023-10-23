#include <stdio.h>

/**
 * main - this is the ain function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10 ; i++)
		putchar(i + 'o');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
