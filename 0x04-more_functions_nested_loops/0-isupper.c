#include "main.h"

/**
 * _isupper - function to check if upper character
 * @c: check for this character
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
