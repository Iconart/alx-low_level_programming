#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function to free to pointer
 * @d: the pointer to be free
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
