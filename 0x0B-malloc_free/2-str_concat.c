#include "main.h"

/**
* str_concat - function to concatenate
* @s1: string
* @s2: string
* Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	int s1Len = 0;
	int s2Len = 1;
	int i = 0;
	int j = 0;
	int l = 0;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		S2 = "";
	}
	while (s1[i] != '\0')
	{
		s1Len++;
		i++;
	}
	while (s2[j] != '\0')
	{
		s2Len++;
		j++;
	}
	l = s1Len + s2Len;
	pointer = malloc(sizeof(*s1) * l);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < s1Len; i++) pointer[i] = s1[i];

	for (i = 0; i < s2Len; i++)
	pointer[s1Len + i] = s2[i];

	return (pointer);
}
