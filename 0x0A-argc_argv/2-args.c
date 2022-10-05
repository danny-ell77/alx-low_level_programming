#include <stdio.h>
/**
 * main - A program that prints out its name
 *
 * @argc: the count of arguments passed
 * @argv: an array of pointers to the arguments of main
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
