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
	int n;
	int len;

	while (str[length] != '\0')
		length++;

	len = length + 1;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
		if (str[i] != '\0')
			putchar(str[i]);
}
