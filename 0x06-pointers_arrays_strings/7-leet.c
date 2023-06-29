#include <stdio.h>
#include "main.h"
/**
 * leet - Encodes a string using the Leet (1337) cipher.
 *
 * Description: This function takes a string 's' as input and applies the Leet
 *              (1337) cipher to it. The Leet cipher is a character
 *              substitution cipher that replaces certain letters with
 *              corresponding numbers or symbols. The function modifies the
 *              input string in-place and returns a pointer to the modified
 *              string.
 *
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the destination string 's'.
 */
char *leet(char *s)
{
	int count = 0, i;
	int lower_letter[] = {97, 101, 111, 116, 108};
	int up_letter[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower_letter[i] || *(s + count) == up_letter[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
