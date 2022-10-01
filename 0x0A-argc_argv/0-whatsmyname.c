#include <stdio.h>

/**
 * main - Entry point
 * @argc: the count string in an array
 * @argv: the entire array
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	putchar('\n');
	return (0);
}
