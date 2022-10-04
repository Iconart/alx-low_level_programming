#include "main.h"

/**
 * create_array - function to allocate array space
 * @size: the number of items added to the array
 * @c: the data type
 * Return: return 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);

}
