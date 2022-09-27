#include "main.h"

/**
 * _strchr - function to search for a present
 * of a character in string;
 * @s: this string should be checked
 * @c: this character should be checked
 * Return: c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char result;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			result = c;
		}
		else
		{
			result = '\0';
		}
	}
	return (result);
}
