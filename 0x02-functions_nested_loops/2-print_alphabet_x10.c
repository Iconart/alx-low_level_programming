#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
	return 0;
}
