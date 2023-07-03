#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Source string to search
 * @accept: Accepted characters
 *
 * Description: This function searches the given source string for the first
 *              occurrence of any character from the specified set of accepted
 *              characters. It returns a pointer to the location in the string
 *              where the first match is found.
 *
 * Return: Pointer to the location of the first found accepted character in the string,
 *         or NULL if no matches are found.
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
