#include "main.h"

/**
 * string_nconcat - function to concatenate string
 * @s1: the first string
 * @s2: the second string
 * @n: the number second string to concat
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, sum, s1Len = 0, s2Len = 0;
	char *pointer;
	int a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
	{
		s1Len++;
		a++;
	}
	while (s2[b] != '\0')
	{
		s2Len++;
		b++;
	}
	if (n >= s2Len)
		sum = s1Len + s2Len;
	else
		sum = s1Len + n;
	pointer = malloc(sizeof(char *) * sum);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < s1Len; i++)
		pointer[i] = s1[i];
	if (n >= s2Len)
	{
		for (j = 0; j < n; j++)
			pointer[s1Len + j] = s2[j];
		pointer[s1Len + j] = '\0';
	}
	else
	{
		for (j = 0; j < n; j++)
			pointer[s1Len + j] = s2[j];
		pointer[s1Len + j] = '\0';
	}
	return (pointer);
}
