#include <stdio.h>

/**
 * main - Entry point
 * Description: print value in base 16
 * Return: always 0
 */

int main(void)
{
	int num;
	int letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}