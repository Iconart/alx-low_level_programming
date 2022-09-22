#include "main.h"

/**
 * _strncpy - function to copies the array
 * @dest: desk checked
 * @src: src checked
 * @n: n checked
 * Return: desk
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
