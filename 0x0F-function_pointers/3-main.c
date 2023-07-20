#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - A basic calculator program.
 *
 * This program is a basic calculator that performs arithmetic operations on
 * two integer operands passed as command-line arguments.
 *
 * @argc: The number of command-line arguments provided.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if the program executes successfully.
 */

int main(int argc, char *argv[])
{
	int a, b, c, d;
	int (*func)(int, int) = get_op_func(*(argv + 2));

	b = argv[2][0];
	d = argv[2][1];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (d != '\0' || func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(*(argv + 1));
	c = atoi(*(argv + 3));
	if ((b == '/' && c == 0) || (b == '%' && c == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(a, c));
	return (0);
}
