#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard
 * @board: 2D array representing the chessboard
 *
 * Description: This function takes a 2D array representing the chessboard and
 *              prints it in a visually appealing format.
 *
 * Return: None
 */
void print_chessboard(char (*a)[8])
{
	int d, b;

	for (d = 0; d < 8; d++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[d][b]);
		}
		_putchar('\n');
	}
}
