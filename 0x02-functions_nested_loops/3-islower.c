#include "main.h"

/**
 * _islower - function to check for lowercase
 *
 * Return: 0 Or 1
 *
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
