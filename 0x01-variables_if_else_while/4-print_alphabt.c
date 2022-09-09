#include <stdio.h>

/**
 * main - Entry point
 * Description: print all alphabet expect q and e
 * Return: alway (0);
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
