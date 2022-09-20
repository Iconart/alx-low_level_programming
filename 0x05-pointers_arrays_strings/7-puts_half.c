#include "main.h"

/**
 * puts_half - function to print half of a string
 *
 * @str: the character of str should be checked
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int i;
	int result;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		result = length / 2;
	else
		result = (length + 1) / 2;

	for (i = result; i < length; i++)
		putchar(str[i]);
}
