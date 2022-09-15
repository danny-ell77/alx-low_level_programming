#include "main.h"
/**
* print_most_numbers - a function that prints the numbers, from 0 to 9
*
* Return: print to stdout the alphabet, in lowercase, followed by a new line.
**/

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + '0');
	}
	_putchar('\n');
}
