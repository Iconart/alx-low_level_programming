#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element
 * an array
 * @array: the group of array
 * @size: the size of element in an array
 * @action: the callback function to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(*(array + i));
}
