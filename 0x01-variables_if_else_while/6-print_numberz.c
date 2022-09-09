#include <stdio.h>

/**
 * main - Entry point
 * Description: print numbers of base 10 with putchar
 * Return: alway 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
