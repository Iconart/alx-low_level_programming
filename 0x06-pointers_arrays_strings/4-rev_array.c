#include "main.h"

/**
 * reverse_array - the function to reverse an array
 * @a: the pointer must be checked
 * @n: the number of element n must be checked also
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (i >= 0)
	{
		if (i != n)
		{
			putchar(',');
			putchar(' ');
		}
		printf("%d", a[i]);
		i--;
	}
	putchar('\n');
}
