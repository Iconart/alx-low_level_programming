#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: alway 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
