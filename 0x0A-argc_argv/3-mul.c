#include <stdio.h>
#include <stdlib.h>
/**
 * main - takes 2 arguments multiplies them and prints out the result
 *
 * @argc: the number of arguments
 * @argv: an array
 * Return: 0 if successful, 1 if an error occurs
 */

int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);

	printf("%d\n", mul);
	return (0);
}
