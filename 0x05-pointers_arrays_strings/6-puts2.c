#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * Description: This function takes a pointer to a string as a parameter
 *              and prints every other character of the string,
 *              starting from the first character.
 * @str: Pointer to the string to be processed.
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i;

	/* Calculate the length of the string */
	for (i = 0; str[i] != '\0'; i++)
		;

	/* Print every other character of the string */
	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
