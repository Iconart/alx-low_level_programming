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

	int *loop = &i;
	int j = *loop;

	for (j; j >= 0; j--)
	{
		if (s[j] != '\0')
			putchar(s[j]);
	}
	putchar('\n');
}
