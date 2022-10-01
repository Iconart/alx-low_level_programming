#include <stdio.h>

/**
 * main - Entry point
 * @argc: the numbers of argument passed
 * @argv: the array of string passed
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
	{
		argc--;
		printf("%d\n", argc);
	}
	return (0);
}
