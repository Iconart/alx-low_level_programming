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
	int len;

	while (str[length] != '\0')
		length++;
	len = lenght;

	if (len % 2 == 0)
		result = len / 2;
	else
		result = (len - 1) / 2;

	for (i = result; i < length; i++)
		putchar(str[i]);
}
