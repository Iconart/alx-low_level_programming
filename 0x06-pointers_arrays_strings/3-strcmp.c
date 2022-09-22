#include "main.h"

/**
 * _strcmp - function to compare the two string
 * @s1: the string should be checked
 * @s2: the string should be checked
 * Return: s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	char *str1 = s1;
	char *str2 = s2;

	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
