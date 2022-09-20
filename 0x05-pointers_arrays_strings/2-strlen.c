#include "main.h"

/**
 * _strlen - function the check for the length of a string
 * @s: string s should be checked
 * Return: void
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;

	return (count);
}
