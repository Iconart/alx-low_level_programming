#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize struct dog
 * @d: the pointer to the newly create initialization
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: who owns the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
