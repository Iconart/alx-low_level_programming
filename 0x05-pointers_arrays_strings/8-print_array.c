#include "main.h"

/**
 * print_array - function to print an array
 * @a: the character a should check as a array
 * @n: the character n should be checked as the number of element
 * Return: void
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (a[count] == a[n - 1])
			continue;
		printf(", ");
	}
	putchar('\n');
}
