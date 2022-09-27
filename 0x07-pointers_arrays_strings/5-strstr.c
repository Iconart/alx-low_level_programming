#include "main.h"
#include <string.h>

/**
 * _strstr - function to locates a substring
 * @haystack: this character should be checked
 * @needle: the character should be checked
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
