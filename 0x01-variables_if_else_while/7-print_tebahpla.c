#include <stdio.h>
/**
 * main - Function that prints a-z in the reverse
 * order using puthcar()
 *
 * Return: 0
 */

int main(void)
{
	char d = 'z';

	while (d >= 'a')
	{
		putchar(d);
		d--;
	}
	putchar('\n');
	return (0);
}
