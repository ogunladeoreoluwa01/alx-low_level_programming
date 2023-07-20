#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program.
 *
 * This function serves as the entry point for the program and is the first
 * function that gets executed.
 *
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 to indicate successful program execution.
 */

int main(int argc, char *argv[])
{
	char *opc = (char *)main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
