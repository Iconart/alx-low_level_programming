#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data typeg
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: who owns the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
