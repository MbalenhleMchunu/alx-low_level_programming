#include "main.h"
**
* puts_half - a function that returns the first half of a string
* if odd length, then n = (length_of_the_string - 1) / 2
* @str: input to be printed
* _putchar - a custom function for printing a single character
* Return: half of input
*/

void puts_half(char *str)
{
	int a, n, count = 0;

	for (a = 0; str[a] != '\0'; a++)
		count++;
	n = (count - 1) / 2;
	for (a = n + 1 ; str[a]!= '\0' ; i++)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

