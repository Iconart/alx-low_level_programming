#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - function to print strings with separator
 * @separator: use to separator after each iteration
 * @n: the numbers of argument passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *pointer;

	va_list(point);

	va_start(point, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		pointer = va_arg(point, char *);
		if (pointer == NULL)
			printf("(nil)");
		else
			printf("%s", pointer);
		if (i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	putchar('\n');
	va_end(point);
}
