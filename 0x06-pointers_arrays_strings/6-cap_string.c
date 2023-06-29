#include <stdio.h>
#include "main.h"
/**
 * cap_string - Capitalizes the first letter of each word in a string.
 *
 * Description: This function takes a string 's' as input and capitalizes the
 *              first letter of each word in the string. Words are delimited
 *              by spaces or other non-alphabetic characters. The function
 *              modifies the input string in-place and returns a pointer to the
 *              modified string.
 *
 * @s: The input string to be capitalized.
 *
 * Return: A pointer to the destination string 's'.
 */

char *cap_string(char *s)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == sep_words[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}
