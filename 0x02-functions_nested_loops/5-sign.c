#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: a number of type int
 *
 * Return: 1 if greater than zero, -1 if less than zero and
 * 0 if equal to zero
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	if (n == 0)
		_putchar('0');
		return (0);
	if (n < 0)
		_putchar('-');
		return (-1);
}
