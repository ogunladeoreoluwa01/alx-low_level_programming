#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name according to a specified format.
 *
 * This function takes a name as input and uses a function pointer
 * to specify the format in which the name should be printed.
 *
 * @name: The name to be printed.
 * @f: A pointer to the function that defines the printing format.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
