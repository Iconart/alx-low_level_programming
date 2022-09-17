#include "main.h"

/**
 * print_square - function to print square
 * @size: should check size as character
 * Return: void
 */

void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		putchar('\n');
		int j;

		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
	}
}
