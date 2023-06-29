#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates a portion of one string onto another.
 *
 * Description: This function is an implementation of strncat, which appends a
 *              portion of the string pointed to by 'src' to the end of the
 *              string pointed to by 'dest'. The maximum number of characters
 *              to be appended is specified by the 'n' parameter.
 *
 * @src: The string to be appended.
 * @dest: The destination string.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
