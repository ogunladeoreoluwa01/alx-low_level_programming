#include <stdio.h>
#include "main.h"
/**
 * _strncpy - Copies a string from the source to the destination up to 'n' characters.
 *
 * Description: This function copies the string pointed to by 'src' to the
 *              character array pointed to by 'dest'. It copies at most 'n'
 *              characters from 'src' to 'dest'. If 'src' is shorter than 'n'
 *              characters, the remaining characters in 'dest' are filled with
 *              null bytes. The function returns a pointer to 'dest'.
 *
 * @dest: The destination for the copied string.
 * @src: The string to be copied.
 * @n: The maximum number of characters to be copied.
 *
 * Return: A pointer to the destination string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
