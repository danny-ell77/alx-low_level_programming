#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is postive\n", n)
	}
	else if (n < 0)
	{
		printf("%d is negetive\n", n)
	}
	else
	{
		printf("%d is zero\n", n)
	}

	return (0);
}
