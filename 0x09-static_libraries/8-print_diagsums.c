#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that print sum of diagonal matrix
 * @a: the character a should be checked
 * @size: the number of element size should be checked
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	unsigned int i, j;
	unsigned int forstep = 0;
	unsigned int bacstep = 0;
	unsigned int sizing = size * size;

	for (i = 0; i < sizing; i += (size + 1))
	{
		forstep += *(a + i);
	}
	for (j = size - 1; j < sizing - 1; j += (size - 1))
	{
		bacstep += *(a + j);
	}
	printf("%d, %d\n", forstep, bacstep);
}
