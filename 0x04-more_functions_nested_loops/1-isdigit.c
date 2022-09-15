#include "main.h"

/**
 * _isdigit - function to check for digit
 * @c: check the character c if it is a digit
 * Return: return 1 if c is a digit else return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
