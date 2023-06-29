#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specific format.
 *
 * Description: This function takes a buffer 'b' and its size 'size' as input.
 *              It prints the content of the buffer in a well-formatted manner.
 *              The output shows the hexadecimal values of the bytes in the
 *              buffer, followed by their corresponding ASCII representation.
 *              Each line of output displays 10 bytes of the buffer.
 *
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 *
 * Return: None (void).
 */
void print_buffer(char *b, int size)
{
	int j, k, i;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf(" ");
			for (i = j; i < j + 10; i++)
			{
				if (i >= size)
					break;
				if (*(b + i) < 32 || *(b + i) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + i));
			}
			printf("\n");
		}
	}
}
