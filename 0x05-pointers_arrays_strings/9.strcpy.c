#include "main.h"

/**
 * _strcpy - function to copy string
 * @scr:  the content should be checked
 * @dest: the content should be checked
 * Return: dest
 */

char *_strcpy(char *dest, char *scr)
{
	int index = 0;

	while (scr[index])
	{
		dest[index] = scr[index];
		index++;
	}
	return (dest);
}
