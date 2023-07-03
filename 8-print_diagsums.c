#include "main.h"
#include <stdio.h>

/**
 * calculate_diagsums - Calculates the sum of two diagonals in a square matrix
 *
 * @matrix: The square matrix
 * @size: The size of the matrix
 * @sum1: Pointer to store the sum of the main diagonal
 * @sum2: Pointer to store the sum of the secondary diagonal
 *
 * Return: None
 */
void print_diagsums(int *a, int size)
{
  int b, sum1 = 0, sum2 = 0;

  for (b = 0; b < size; b++)
  {
    sum1 += a[(size + 1) * b];
    sum2 += a[(size - 1) * (b + 1)];
  }

  printf("%d, %d\n", sum1, sum2);
}
