#include "main.h"

/**
 * _realloc - function to reallocate a memory block
 * @ptr: the previously allocated memory
 * @old_size: the byte size of the previous size
 * @new_size: the byte size of the new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (mem);
	}

	if (new_size == old_size)
		return (ptr);

	mem = malloc(new_size);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *) mem + i) = *((char *) ptr + i);
		}
	}
	free(ptr);
	return (mem);
}
