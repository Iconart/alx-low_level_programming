#include "main.h"

/**
 * *_memset - function to store a specific value to a
 * certain number of address pointing to
 * @s: the memory addresses
 * @b: special character to be stored
 * @n: numbers of address to store value b into
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{


	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
