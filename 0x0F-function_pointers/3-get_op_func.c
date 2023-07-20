#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - Gets the appropriate function for the given operator.
 *
 * This function takes an operator character as input and returns a pointer to
 * the appropriate function that performs the corresponding operation.
 *
 * @s: The operator character.
 *
 * Return: A pointer to the right function for the given operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[5].f);
}
