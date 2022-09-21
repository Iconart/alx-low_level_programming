#include "main.h"

/**
 * _strcpy - function to copy string
 * @scr: the content should be checked
 * @dest: the content should be checked
 * Return: dest
 */

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
