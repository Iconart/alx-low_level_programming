#include "main.h"

/**
 * _puts - funtion to print a string end with a new line
 *
 * @str: check the string str
 *
 * Return: void;
 */

void _puts(char *str)
{
	int loop;

	for (loop = 0; loop < 1000; loop++) 
	{
		if (str[loop] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(str[loop]);
		}
	}
}
