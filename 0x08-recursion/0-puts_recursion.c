#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 *
 * Description: This function recursively calculates the length of a string
 *              by counting the number of characters until it reaches the null terminator ('\0').
 *
 * @s: The string to be counted.
 *
 * Return: The length of the string.
 */
void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*(s));
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
