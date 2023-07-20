#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 *
 * This function searches for an integer in the given array using a specified
 * comparison function. If the integer is found, the function returns the index
 * of the first occurrence.
 *
 * @array: The array in which the search occurs.
 * @size: The size of the array.
 * @cmp: A pointer to the comparison function used to check for a match.
 *
 * Return: The index of the first occurrence of the integer in the array.
 *         If no match is found or the array is empty, -1 is returned.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j, k;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		k = cmp(array[j]);
		if (k != 0)
			return (j);
	}
	return (-1);
}
