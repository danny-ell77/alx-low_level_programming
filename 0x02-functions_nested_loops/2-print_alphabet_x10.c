#include "main.h"
/**
 * print_alphabet - Print alphabet 10x in
 * lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
