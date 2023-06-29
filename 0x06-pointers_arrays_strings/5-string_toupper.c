#include <stdio.h>
#include "main.h"
/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 *
 * Description: This function takes a string 's' as input and converts all
 *              lowercase letters in the string to their corresponding
 *              uppercase representation. The function modifies the input
 *              string in-place and returns a pointer to the modified string.
 *
 * @s: The input string to be converted.
 *
 * Return: A pointer to the destination string 's'.
 */
char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 97 && s[k] <= 122)
			s[k] = s[k] - 32;
	}
	s[k] = '\0';
	return (s);
}
