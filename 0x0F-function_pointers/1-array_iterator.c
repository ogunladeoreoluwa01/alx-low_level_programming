#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes the given function on each element of the array.
 *
 * This function takes an array, its size, and a function pointer as input.
 * It applies the specified function to each element of the array.
 *
 * @array: The array to be processed.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * Return: None.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
		for (j = 0; j < size; j++)
			action(array[j]);
}
