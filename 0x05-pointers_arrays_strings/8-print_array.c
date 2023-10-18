#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array to be used name
 * @n: the number of array elements to be printed
 * Return : inputs of a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

