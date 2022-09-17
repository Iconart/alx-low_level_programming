#include "main.h"

/**
 * print_line - function to print line
 * @n: should be check  as character
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
