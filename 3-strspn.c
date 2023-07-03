#include "main.h"
#include <stdio.h>
/**
 * _strspn - Calculates the length of a prefix substring
 * @s: The string to be checked
 * @accept: The criteria
 *
 * Description: This function calculates the length of the longest prefix substring
 *              in the given string that consists only of characters present in the
 *              specified criteria string.
 *
 * Return: Length of the prefix substring if successful, or 0 if no matches found.
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t n;
	char *p;

	for (n = 0; *s; s++, n++)
	{
		for (p = accept; *p && *p != *s; p++)
			;
		if (!*p)
			break;
	}
	return (n);
}
