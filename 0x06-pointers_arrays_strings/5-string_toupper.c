#include "main.h"

/**
 * string_toupper - function to convert lowercase to uppercase
 * @str: the character str should be checked
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
