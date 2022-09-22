#include "main.h"

/**
 * _putchar - the function the print output
 * @c: the c character should be checked
 * Return: 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
