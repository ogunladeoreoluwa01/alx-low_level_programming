#include "main.h"
#include <stdio.h>
/**
 * factorial - Calculates the factorial of a given integer using recursion.
 *
 * Description: This function recursively calculates the factorial of a number
 *              by multiplying it with the factorial of the number minus one,
 *              until it reaches the base case of 0 or 1.
 *
 * @n: The number for which the factorial is calculated.
 *
 * Return: The factorial result of the number, or -1 if the number is lower than zero.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
