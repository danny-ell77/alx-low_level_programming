#include "main.h"

/**
 * print_number -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_number(int n)
{
	// If number is smaller than 0, put a - sign
    	// and change number to positive
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
 
    // Remove the last digit and recur
    if (n/10)
        print(n/10);
 
    // Print the last digit
    putchar(n%10 + '0');
}
