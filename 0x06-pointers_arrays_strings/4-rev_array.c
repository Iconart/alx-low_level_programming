#include "main.h"

/**
 * reverse_array - the function to reverse an array
 * @a: the pointer must be checked
 * @n: the number of element n must be checked also
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
		i++;
	}
}
