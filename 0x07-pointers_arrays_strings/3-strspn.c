#include "main.h"

/**
 * _strspn - functtion to get length of a prefix
 * substring
 * @s: the character s should be checked
 * @accept: the character accept  should be checked
 * Return: counter
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int counter = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (counter);
	}
	return (counter);
}
