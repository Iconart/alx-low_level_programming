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

	int loop;

	for (loop = i; loop >= 0; loop--)
	{
		if (s[loop] != '\0')
			putchar(s[loop]);
	}
	putchar('\n');
}
