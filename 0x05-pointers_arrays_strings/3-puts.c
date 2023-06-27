#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * Description: This function takes a pointer to a string as a parameter
 *              and prints the characters of the string until the null terminator is reached,
 *              followed by a new line character.
 * @str: Pointer to the string to be printed.
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
