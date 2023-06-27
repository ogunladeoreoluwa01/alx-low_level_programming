#include <stdio.h>
#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}