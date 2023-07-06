#include "main.h"
#include <stdio.h>
/**
 *  _pow_recursion - Calculates the result of a number raised to a specific power using recursion.
 *
 * Description: This function recursively calculates the result of a number raised to a power
 *              by multiplying the base number with itself raised to the power minus one,
 *              until it reaches the base cases of 0 or 1 for the power.
 *
 * @x: The base number.
 * @y: The power to which the base number is raised.
 *
 * Return: The result of the base number raised to the power, or -1 if x is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
