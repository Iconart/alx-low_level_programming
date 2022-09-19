#include "main.h"

/**
 * swap_int - function to swap the value of two variable
 * @a: the character a should be checked
 * @b: the character b should be checked
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
