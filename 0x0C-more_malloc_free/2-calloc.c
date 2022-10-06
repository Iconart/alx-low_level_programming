#include "main.c"

/**
 * _calloc - function to allocate memory for an array
 * @nmeb: the number of element passed into the array
 * @size: the size of byte of data type
 * Return: void
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *pointer;
	int mul = size * nmeb;

	if (nmeb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmeb * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < mul; i++)
		pointer[i] = 0;
	return (pointer);
}
