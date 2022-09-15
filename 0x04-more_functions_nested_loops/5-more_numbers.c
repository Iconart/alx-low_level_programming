#include "main.h"

/**
 * more_numbers - function to print 1 - 14
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			if (j >= 10 && j <= 14)
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
			else
			{
				putchar((j % 10) + '0');
			}
		}
		putchar('\n');
	}
}
