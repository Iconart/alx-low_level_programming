#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of argument passed
 * @argv: the array of string passed
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
