#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memcpy - Copies a block of memory from source to destination
 *
 * @dst: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @cnt: Number of bytes to copy
 * Return: Pointer to the destination memory
 */
void *Memcpy(void *dst, const void *src, unsigned int cnt)
{
	char *pzDest = (char *)dst;
	const char *pszSource = (const char *)src;

	if ((pzDest != NULL) && (pszSource != NULL))
	{
		while (cnt)
		{
			*(pzDest++) = *(pszSource++);
			--cnt;
		}
	}
	return (dst);
}
/**
 * *_realloc - mimicks the realloc function
 *
 * @old_size: the old allocation size
 * @new_size: the new allocation size
 * @ptr: the old allocation
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);

	if (ptr == NULL)
		return (ptr2);
	Memcpy(ptr2, ptr, old_size);
	free(ptr);
	return (ptr2);
	free(ptr2);
}
