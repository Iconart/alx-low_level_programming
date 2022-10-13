#include "function_pointers.h"

/**
 * print_name - function to print pointer
 * @name: the name passed as argument
 * @f: the callback function to name
 * Return: void
 */

void print_name(char* name, void (*f)(char *))
{
	f(name);
}
