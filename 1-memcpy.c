#include "main.h"
#include <stuio.h>
/**
 * _memcpy - Copies a memory area from source to destination
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Description: This function copies the specified number of bytes from the source
 *              memory area to the destination memory area. It mimics the behavior
 *              of the original memcpy function in C.
 *
 * Return: Pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
