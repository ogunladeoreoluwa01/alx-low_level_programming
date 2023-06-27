#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string.
 * Description: This function takes a pointer to a string as a parameter
 *              and reverses the order of the characters in the string.
 * @s: Pointer to the string to be reversed.
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* Calculate the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	j = i - 1;

	/* Swap characters from the start and end of the string */
	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
