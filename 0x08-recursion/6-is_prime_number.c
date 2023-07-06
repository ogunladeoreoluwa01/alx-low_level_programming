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
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
