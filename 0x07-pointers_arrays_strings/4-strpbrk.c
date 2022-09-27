#include "main.h"

/**
 * _strpbrk - function to searches a string
 * @s: the character s should be checked
 * @accept: the character accept should be checked
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
