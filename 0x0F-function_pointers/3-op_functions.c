#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Adds two integers.
 *
 * This function takes two integers as input, 'a' and 'b', and returns
 * the result of their addition.
 *
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the addition of 'a' and 'b'.
 */

int op_add(int a, int b)
{
	int k;

	k = a + b;
	return (k);
}
/**
 * op_sub - adds two integers
 *
 * @a: first element
 * @b: the second element
 * Return: the result
 */
int op_sub(int a, int b)
{
	int k;

	k = a - b;
	return (k);
}
/**
 * op_mul - adds two integers
 *
 * @a: first element
 * @b: the second element
 * Return: the result
 */
int op_mul(int a, int b)
{
	int k;

	k = a * b;
	return (k);
}
/**
 * op_div - adds two integers
 *
 * @a: first element
 * @b: the second element
 * Return: the result
 */
int op_div(int a, int b)
{
	int k;

	k = a / b;
	return (k);
}
/**
 * op_mod - adds two integers
 *
 * @a: first element
 * @b: the second element
 * Return: the result
 */
int op_mod(int a, int b)
{
	int k;

	k = a % b;
	return (k);
}
