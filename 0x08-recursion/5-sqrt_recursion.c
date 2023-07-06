#include "main.h"

/**
 * power_operation - Calculates the natural square root of a number using recursion.
 *
 * Description: This function recursively calculates the square root of a number
 *              by iteratively checking if the square of the current iterator 'c'
 *              is equal to the input number 'n'. If found, it returns the iterator.
 *              If the iterator exceeds the half of the input number without finding
 *              the exact square root, it returns -1 to indicate failure.
 *
 * @n: The input number for which the square root is calculated.
 * @c: The iterator used to find the square root.
 *
 * Return: The square root of the number if found, or -1 if the square root is not a natural number.
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion -> returns the natural square root of a number
 * @n: inputer number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
