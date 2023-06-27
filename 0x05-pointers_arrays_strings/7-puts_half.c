#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * Description: This function takes a pointer to a string as a parameter
 *              and prints the second half of the string.
 * @str: Pointer to the string to be processed.
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	/* Calculate the length of the string */
	for (i = 0; str[i] != '\0'; i++)
		length++;

	start = length / 2;

	/* Print the second half of the string */
	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
