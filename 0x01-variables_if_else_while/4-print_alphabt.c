#include <stdio.h>
/**
 * main - Function that prints all the letters of
 * the alphabet using putchar
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
