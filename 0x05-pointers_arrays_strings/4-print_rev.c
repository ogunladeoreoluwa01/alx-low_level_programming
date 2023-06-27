#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * Description: This function takes a pointer to a string as a parameter
 *              and prints the characters of the string in reverse order,
 *              followed by a new line character.
 * @s: Pointer to the string to be printed in reverse.
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i;

	/* Calculate the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* Print the characters of the string in reverse order */
	for (--i; i >= 0; --i)
		_putchar(s[i]);

	_putchar('\n');
}
