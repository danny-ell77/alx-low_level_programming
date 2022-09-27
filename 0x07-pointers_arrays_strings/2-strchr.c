#include "main.h"
/** 
 * _strchr -  a function that locates a character in a string.
 * @s: some pointer s
 * @c: some character c
 *
 * Return: some pointer
 **/
char *_strchr(char *s, char c)
{
	int i = 0;


	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
	
	return (0);
}
