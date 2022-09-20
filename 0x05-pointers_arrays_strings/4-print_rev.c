#include "main.h"

/**
 * print_rev - function to reverse a string
 *
 * @s: the character s should be checked
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i; i >= 0; i--)
	{
		if (s[i] != '\0')
			putchar(s[i]);
	}
	putchar('\n');
}
