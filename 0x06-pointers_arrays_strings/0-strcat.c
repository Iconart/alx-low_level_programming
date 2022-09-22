#include "main.h"

/**
 * _strcat - function to concatenate two string
 * @dest: the string dest should be checked
 * @src: the string src should be checked
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int lenDest = 0;
	int lenSrc = 0;
	int i;

	while (dest[lenDest] != '\0')
	{
		lenDest++;
	}
	while (src[lenSrc] != '\0')
	{
		lenSrc++;
	}

	for (i = 0; i <= lenScr; i++)
	{
		dest[lenDest + i] = src[i];
	}
	dest[lenDest + lenSrc + 1] = '\0';
	return (dest);
}
