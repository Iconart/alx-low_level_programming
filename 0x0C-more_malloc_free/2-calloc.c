#include "main.h"

/**
 * _calloc - function to allocate memory for an array
 * @nmeb: the number of element passed into the array
 * @size: the size of byte of data type
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	int mul;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mul = nmemb * size;
	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < mul; i++)
		pointer[i] = 0;
	return (pointer);
}
