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

	if (strlen(needle) == 0)
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i])
			{
				if (needle[j + 1] == haystack[i + 1])
				{
					return (needle + i);
				}
			}
		}
	}
	return (NULL);
}
