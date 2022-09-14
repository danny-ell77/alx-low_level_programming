#include "main.h"
/**
 * print_alphabet - Print alphabet 10x in
 * lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';
	int i = 0

	while (i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
