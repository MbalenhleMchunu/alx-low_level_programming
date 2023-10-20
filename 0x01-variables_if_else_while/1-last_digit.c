#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - main entry point, prints the last digit of a randomly generated number
*
*Return : Always 0 (success)
*/

int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (s > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	}
	else if (s < 6 && s != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, s);
	}
	return (0);
}

