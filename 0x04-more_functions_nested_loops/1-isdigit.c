#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: an integer
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && '9' >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
