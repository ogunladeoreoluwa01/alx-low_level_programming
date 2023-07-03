#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string being checked
 * @c: The character to find
 *
 * Description: This function searches for the first occurrence of the specified
 *              character within the given string and returns a pointer to it.
 *
 * Return: Pointer to the first occurrence of the character in the string, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		++s;
	return ((char *)(c == *s ? s : NULL));
}
