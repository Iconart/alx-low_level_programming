#include "main.h"

/**
 * print_square - function to print square
 * @size: should check size as character
 * Return: void
 */

void print_square(int size)
{
	int i;

	if (size == 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
