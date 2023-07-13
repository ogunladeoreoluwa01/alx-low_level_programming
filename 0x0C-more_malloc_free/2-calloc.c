#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memset - Sets a block of memory with a specified value
 *
 * @s: Pointer to the memory to be set
 * @c: Value to set the memory with
 * @len: Number of bytes to set
 * Return: Pointer to the memory after setting
 */
void *Memset(void *s, int c, unsigned int len)
{
	unsigned char *p = s;

	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/**
 * _calloc - micks the calloc function
 *
 * @nmemb: the array size
 * @size: the memory size
 * Return: a pointer to the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *st;
	void *end;

	if (nmemb == 0 || size == 0)
		return (NULL);

	st = malloc(size * nmemb);

	if (st == NULL)
		return (NULL);

	end = Memset(st, 0, (nmemb * size));
	return (end);
}
