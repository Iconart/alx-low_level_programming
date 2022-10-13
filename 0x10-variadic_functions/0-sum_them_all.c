#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to sum the array
 * @n: the number of item in the array
 * Return: 0 if successful
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list(value);

	if (n == 0)
		return (0);
	sum = 0;
	va_start(value, n);

	for (i = 0; i < n; i++)
		sum += va_arg(value, unsigned int);
	va_end(value);
	return (sum);
}
