#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - Copies the string pointed to by src to the specified destination.
 * Description: This function takes two pointers to strings as parameters
 *              and copies the string pointed to by src to the destination string.
 * @dest: Pointer to the destination where the string will be copied.
 * @src: Pointer to the string to be copied.
 * Return: Nothing.
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
