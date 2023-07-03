#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Description: This function searches for the first occurrence of the substring
 *              within the given string and returns a pointer to it.
 *
 * Return: Pointer to the beginning of the substring within the string, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
