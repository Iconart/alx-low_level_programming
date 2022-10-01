#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number argument passed
 * @argv: the array of string passed
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
