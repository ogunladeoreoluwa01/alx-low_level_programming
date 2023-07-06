#include "main.h"
#include <stdio.h>
/**
 *  _strlen_recursion - Calculates the length of a string using recursion.
 *
 * Description: This function recursively calculates the length of a string
 *              by counting the number of characters until it reaches the null terminator ('\0').
 *
 * @s: The string to be counted.
 *
 * Return: The length of the string.
 **/
int _strlen_recursion(char *s)
{
	if (*(s) == '\0')
		return (0);
	else
		return (1 + (_strlen_recursion(s + 1)));
}
