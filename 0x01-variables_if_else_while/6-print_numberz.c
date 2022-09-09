#include <stdio.h>
/**
 * main - Function that prints 0-9 in base 10
 * using putchar()
 *
 * Return: 0
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
