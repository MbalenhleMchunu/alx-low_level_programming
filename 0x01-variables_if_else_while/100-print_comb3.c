#include <stdio.h>

/**
 * main - this is the main function that prints combination of two numbers
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return (0);
}

