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
	int temp;

	while (s[i] != '\0')
		i++;

	for (j = *loop - 1; j >= *loop / 2; j--)
	{
		temp = s[j];
		s[j] = s[*loop - j - 1];
		s[*loop - j - 1] = temp;
	}
}
