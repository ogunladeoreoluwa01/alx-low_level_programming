#include "main.h"
/**
 * rot13 - Encodes a string using the ROT13 cipher.
 *
 * Description: This function takes a string 's' as input and applies the ROT13
 *              cipher to it. The ROT13 cipher is a simple letter substitution
 *              cipher that replaces each letter with the letter 13 positions
 *              ahead or behind it in the alphabet. The function modifies the
 *              input string in-place and returns a pointer to the modified
 *              string.
 *
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the destination string 's'.
 */

char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
