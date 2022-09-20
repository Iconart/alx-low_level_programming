#include "main.h"

/**
 * puts2 - function to print
 * @str: the character should be checked
 * Return: void
 */

void puts2(char *str)
{
	int count;
	int len = 0;

	while (str[len] != '\0')
		len++;

	for (count = 0; count < len; count += 2)
	{
		putchar(str[count]);
	}
	putchar('\n');
}
