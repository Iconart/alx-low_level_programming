#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_numbers - function to print number with separator
 * @separator: use to separator after each iteration
 * @n: the numbers of argument passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(point);

	va_start(point, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(point, int));
		if (i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	putchar('\n');
	va_end(point);
}
