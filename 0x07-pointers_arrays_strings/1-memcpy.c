#include "main.h"

/**
 * _memcpy - function to copy memory
 * @dest: the pointer to copy to
 * @src: the pointer to copy from
 * @n: the number memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
