#include "main.h"
#include <stuio.h>

/**
 * _memset - Sets a block of memory to a specific character
 * @s: Pointer to the memory block to be set
 * @b: Character to set the memory block with
 * @n: Number of bytes to set
 *
 * Description: This function sets the specified number of bytes in the memory block
 *              pointed to by 's' to the character 'b'. It effectively initializes or
 *              fills a memory block with a constant byte value.
 *
 * Return: Pointer to the memory block 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
