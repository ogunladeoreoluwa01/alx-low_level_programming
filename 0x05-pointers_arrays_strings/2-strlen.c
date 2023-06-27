#include <stdio.h>
#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * Description: This function takes a pointer to a string as a parameter
 *              and calculates the length of the string.
 * @s: Pointer to the string to be checked.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;

	/* Iterate through the string until the null terminator is reached */
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}
