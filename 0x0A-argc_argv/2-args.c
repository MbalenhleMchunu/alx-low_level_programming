#include <stdio.h>

#include "main.h"
/**
 * main - function that prints all arguments it receives
 * @argc: arguments number
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int i;

	for (i = 0; i < argc; i++)

	{

		printf("%s\n", argv[i]);

	}


	return (0);

}
