#include "main.h"

/**
 * print-alphabet - Entry point
 * Description: print lowercase alphabet
 * Return: always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar(letter);
}
