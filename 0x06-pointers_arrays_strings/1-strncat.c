#include "main.h"

/**
 * _strncat - function to concatenate two string
 * @dest: dest string should be checked
 * @src: src string should be checked
 * @n: the number of character of concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;

	for (i = 0; i <= len2; i++)
	{
		if (i != n)
			dest[len1 + i] = src[i];
		else
			break;
	}
	return (dest);
}
