#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints all elements of an array.
 * Description: This function takes an array and the number of elements as parameters
 *              and prints all the elements of the array.
 * @a: The array to be printed.
 * @n: The number of elements to be printed.
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
