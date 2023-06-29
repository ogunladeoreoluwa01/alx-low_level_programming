#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Reverses the contents of an integer array.
 *
 * Description: This function takes an integer array 'a' and its size 'n' as
 *              input. It reverses the contents of the array in-place, meaning
 *              the original array is modified. The function does not return
 *              any value.
 *
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: None (void).
 */
void reverse_array(int *a, int n)
{
	int j, k;
	int ch;

	j = n - 1;

	for (k = 0; k < n / 2; k++)
	{
		ch = a[k];
		a[k] = a[j];
		a[j--] = ch;
	}
}
