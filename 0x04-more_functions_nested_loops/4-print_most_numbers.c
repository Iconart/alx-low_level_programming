#include "main.h"

/**
 * print_most_numbers - function to print 0 to 9 without 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			putchar((i % 10) + '0');
		else
			continue;
	}
	putchar('\n');
}
