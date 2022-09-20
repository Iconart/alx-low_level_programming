#include "main.h"

/**
 * rev_string - function to reverse a string
 *
 * @s: the character s should be checked
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int *loop = &i;
	int j;

	while (s[i] != '\0')
		i++;

	for (j = *loop; j >= 0; j--)
	{
		if (s[j] != '\0')
		{
			*s = (s[j]);
		}
	}
}
