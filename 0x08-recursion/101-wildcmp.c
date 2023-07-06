#include "main.h"

/**
 * wildcmp - Compares two strings, allowing for wildcard character '*'.
 *
 * Description: This function recursively compares two strings character by character.
 *              It allows for a wildcard character '*' in the second string, which can match
 *              any sequence of characters (including an empty sequence) in the first string.
 *              If the strings are identical or if the wildcard pattern matches the first string,
 *              it returns 1. Otherwise, it returns 0.
 *
 * @s1: The first string to be compared.
 * @s2: The second string with wildcard pattern.
 *
 * Return: 1 if the strings are identical or if the wildcard pattern matches the first string,
 *         0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
