#include "main.h"

/**
*swap_int - swaps the two integers
* @a: integer 1 to swap
* @b: integer 2 to swap Return : void
* Return :void
*/

void swap_int(int *a, int *b)

{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
