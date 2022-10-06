#include "main.h"
#include <string.h>

/**
 * string_nconcat - function to concatenate string
 * @s1: the first string
 * @s2: the second string
 * @n: the number second string to concat
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, sum, s1Len, s2Len;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1Len = strlen(s1);
	s2Len = strlen(s2);

	if (n >= s2Len)
		sum = s1Len + s2Len;
	else
		sum = s1Len + n;

	pointer = malloc(sizeof(*s1) * sum);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < s1Len; i++)
		pointer[i] = s1[i];

	if (n >= s2Len)
	{
		for (j = 0; j <= n; j++)
			pointer[s1Len + j] = s2[j];
	}
	else
	{
		for (j = 0; j <= n; j++)
			pointer[s1Len + j] = s2[j];
		pointer[s1Len + j + 1] = '\0';
	}
	return (pointer);
}
