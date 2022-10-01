#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: the number of argument passed
 * @argv: the array of string passed
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{
	int count, mul = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (isdigit(*argv[count]))
			{
				mul += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
