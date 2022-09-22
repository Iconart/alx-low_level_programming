#include "main.h"

/**
 * _strcat - function to concatenate two string
 * @dest: the string dest should be checked
 * @src: the string src should be checked
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;

	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];
	return (dest);
}
