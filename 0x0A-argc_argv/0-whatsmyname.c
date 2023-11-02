#include <stdio.h>
#include "main.h"

/**
 * main - this prints its name followed by a new line
 * @argc: arguments number
 * @argv: argument array
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
