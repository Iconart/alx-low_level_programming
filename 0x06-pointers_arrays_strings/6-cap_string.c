#include "main.h"

/**
 * cap_string - function to capitalize the first letter
 * @str: the string should be checked
 * Return: 0 if successful
 */

char *cap_string(char *str)
{
	int i, j;
	char separator[] = " \n\t.,!\"(){}?;";

	for (i = 0; str[i]; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		for (j = 0; separator[j]; j--)
		{
			if (str[i] == separator[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
