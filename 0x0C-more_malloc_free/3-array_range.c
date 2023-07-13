#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - Creates an array of integers between the specified ranges
 *
 * @min: The lower limit of the range
 * @max: The higher limit of the range
 * Return: A pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	size = (max - min) + 1;

	if (size <= 0)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(ptr + (i - min)) = i;
	}
	return (ptr);
	free(ptr);
}
