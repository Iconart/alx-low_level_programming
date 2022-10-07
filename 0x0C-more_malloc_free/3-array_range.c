#include "main.h"

/**
 * array_range - function to create an array in integer
 * @min: the minimal value
 * @max: the maximal value
 * Return: the pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *pointer;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pointer = malloc(sizeof(min) * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pointer[i] = min + i;
	return (pointer);
}
