#include "main.h"

/**
 * _strdup - function to duplicate string
 * @str: string pointer
 * Return: char
 */

char *_strdup(char *str)
{
	char *pointer;
	int i;
	int count;
	int sizeStr = 1;

	for (i = 0; str[i] != '\0'; i++)
		sizeStr += i;

	if (str == NULL)
		return (NULL);

	pointer = malloc(sizeof(char) * sizeStr);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < sizeStr; i++)
		pointer[i] += str[i];
	return (pointer);
}
