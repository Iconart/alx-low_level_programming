#include "main.h"

/**
 * print_sign - print -ve, +ve and 0
 * @n: the character should be checked
 * Return: 0 , -ve, and +ve
 *
 */

int print_sign(int n)
{
	if (n == '0')
	{
		putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
