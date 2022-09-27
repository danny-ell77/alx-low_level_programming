#includes "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: some pointer s
 * @b: some character b
 * @n: some character n
 * Return - a pointer to a memory area s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s)
}
