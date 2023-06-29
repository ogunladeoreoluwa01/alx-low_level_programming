#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int a[5] = {98, 402, 198, 298, 1024};
	int *p = a;

	p[2] = 98;  /* Add this line to set a[2] to 98 */

	printf("a[2] = %d\n", a[2]);

	return 0;
}
